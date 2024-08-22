// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIOVERLAYTRANSITIONSTATE_H
#define CCUIOVERLAYTRANSITIONSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIOverlayTransitionState : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat clampedPresentationProgress; // ivar: _clampedPresentationProgress
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (readonly, nonatomic) CGFloat nonZeroPresentationProgress; // ivar: _nonZeroPresentationProgress
@property (readonly, nonatomic) CGFloat presentationProgress; // ivar: _presentationProgress
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) CGFloat snappedPresentationProgress; // ivar: _snappedPresentationProgress
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)isSignificantStatusBarTransitionFrom:(id)arg0 to:(id)arg1 ;
+(BOOL)isSignificantTransitionFrom:(id)arg0 to:(id)arg1 ;
+(id)fullyDismissedState;
+(id)fullyPresentedState;
+(id)stateWithType:(NSUInteger)arg0 interactive:(BOOL)arg1 progress:(CGFloat)arg2 ;
-(CGFloat)snappedStatusBarPresentationProgress;
-(id)_initWithType:(NSUInteger)arg0 interactive:(BOOL)arg1 progress:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif