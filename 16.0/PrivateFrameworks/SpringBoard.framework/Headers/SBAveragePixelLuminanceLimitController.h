// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAVERAGEPIXELLUMINANCELIMITCONTROLLER_H
#define SBAVERAGEPIXELLUMINANCELIMITCONTROLLER_H

@class NSString, UIView;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface SBAveragePixelLuminanceLimitController : NSObject <CAAnimationDelegate>



@property (nonatomic, getter=areAplLimitsEnabled) BOOL aplLimitsEnabled; // ivar: _aplLimitsEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGlobalFilter) BOOL globalFilter; // ivar: _globalFilter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *targetView; // ivar: _targetView


-(id)_targetLayer;
-(void)_addFilter;
-(void)_removeFilter;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif