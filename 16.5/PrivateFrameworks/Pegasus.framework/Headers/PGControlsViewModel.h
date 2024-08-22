// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCONTROLSVIEWMODEL_H
#define PGCONTROLSVIEWMODEL_H

@class NSString;
@protocol PGPlaybackStateDiffConsumer, PGControlsViewModelDelegate;

#import <Foundation/Foundation.h>

#import "PGPlaybackState.h"
#import "PGControlsViewModelValues.h"

@interface PGControlsViewModel : NSObject <PGPlaybackStateDiffConsumer>

 {
    CGFloat _lastKnownElapsedTime;
    BOOL _hasBegun;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGControlsViewModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInActivitySession) BOOL inActivitySession; // ivar: _inActivitySession
@property (nonatomic, getter=isInterrupted) BOOL interrupted; // ivar: _interrupted
@property (readonly, nonatomic) BOOL isPrerollSkippable;
@property (readonly, copy, nonatomic) PGPlaybackState *playbackState; // ivar: _playbackState
@property (readonly, nonatomic) CGFloat preferredMinimumWidth;
@property (readonly, nonatomic) NSInteger secondsUntilPrerollSkippable;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PGControlsViewModelValues *values; // ivar: _values


-(NSUInteger)recommendedUpdateCadenceForProgressBarWithWidthInPixels:(CGFloat)arg0 ;
-(id)init;
-(void)_updateViewModelValues;
-(void)handleActionButtonTapped;
-(void)handleCancelButtonTapped;
-(void)handleDoubleDoubleTap;
-(void)handleDoubleTap;
-(void)handleRestoreButtonTapped;
-(void)handleSingleTap;
-(void)handleSkipBackButtonTapped;
-(void)handleSkipForwardButtonTapped;
-(void)handleSkipPrerollButtonTapped;
-(void)updatePlaybackStateWithDiff:(id)arg0 ;


@end


#endif