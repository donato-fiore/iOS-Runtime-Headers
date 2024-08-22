// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILECONTROLLER_H
#define PUTILECONTROLLER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "PUTileLayoutInfo.h"
#import "PUTilingView.h"

@interface PUTileController : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) NSInteger animationCount; // ivar: _animationCount
@property (nonatomic, getter=isDetached) BOOL detached; // ivar: _detached
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isPresentationActive;
@property (readonly, nonatomic) PUTileLayoutInfo *layoutInfo; // ivar: _layoutInfo
@property (readonly, nonatomic) PUTileLayoutInfo *presentationLayoutInfo;
@property (retain, nonatomic) NSMutableArray *reasonsToSuppressAnimatedUpdates; // ivar: _reasonsToSuppressAnimatedUpdates
@property (nonatomic, getter=isReusable) BOOL reusable; // ivar: _reusable
@property (readonly, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (readonly, nonatomic) BOOL shouldAvoidInPlaceSnapshottedFadeOut;
@property (nonatomic) BOOL shouldPreserveCurrentContent; // ivar: _shouldPreserveCurrentContent
@property (readonly, nonatomic) BOOL shouldSuppressAnimatedUpdates;
@property (readonly, weak, nonatomic) PUTilingView *tilingView; // ivar: _tilingView
@property (readonly, nonatomic) CGRect visibleRect;
@property (readonly, nonatomic) BOOL wantsVisibleRectChanges; // ivar: _wantsVisibleRectChanges


-(BOOL)adoptAssetTransitionInfo:(id)arg0 ;
-(NSInteger)willBeginAnimation;
-(id)description;
-(id)freeze;
-(id)generateAssetTransitionInfo;
-(id)init;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)addToTilingView:(id)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)didChangeActive;
-(void)didChangeAnimating;
-(void)didChangeVisibleRect;
-(void)didEndAnimation:(NSInteger)arg0 ;
-(void)notifyWhenReadyForDisplayWithTimeOut:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)prepareForReuse;
-(void)removeAllAnimations;
-(void)reuseIfApplicable;
-(void)setPreloadedImage:(id)arg0 ;
-(void)startSuppressingAnimatedUpdatesWithReason:(id)arg0 ;
-(void)stopSuppressingAnimatedUpdatesWithReason:(id)arg0 ;


@end


#endif