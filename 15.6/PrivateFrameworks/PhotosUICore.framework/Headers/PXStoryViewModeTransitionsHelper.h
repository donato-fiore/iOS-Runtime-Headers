// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVIEWMODETRANSITIONSHELPER_H
#define PXSTORYVIEWMODETRANSITIONSHELPER_H

@class NSString;
@protocol PXChangeObserver, PXStoryViewModeTransitionsHelperDelegate;

#import <Foundation/Foundation.h>

#import "PXStoryViewModeTransition.h"
#import "PXStoryModel.h"
#import "PXUpdater.h"

@interface PXStoryViewModeTransitionsHelper : NSObject <PXChangeObserver>



@property (retain, nonatomic) PXStoryViewModeTransition *currentViewModeTransition; // ivar: _currentViewModeTransition
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXStoryViewModeTransitionsHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) PXStoryViewModeTransition *pendingViewModeTransition; // ivar: _pendingViewModeTransition
@property (nonatomic) NSInteger presentedViewMode; // ivar: _presentedViewMode
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(BOOL)_isViewModeSupported:(NSInteger)arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)_configureTransition:(id)arg0 ;
-(void)_currentTransitionDidCancel;
-(void)_currentTransitionDidFinish;
-(void)_invalidateTransition;
-(void)_invalidateTransitionCompletion;
-(void)_setNeedsUpdate;
-(void)_startTransition:(id)arg0 ;
-(void)_updateTransition;
-(void)_updateTransitionCompletion;
-(void)invalidatePresentingGeometry;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)updateIfNeeded;


@end


#endif