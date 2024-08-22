// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBWALLPAPERREMOTEVIEWCONTROLLERSCALEASSERTION_H
#define _SBWALLPAPERREMOTEVIEWCONTROLLERSCALEASSERTION_H

@class BSSimpleAssertion, BSUIAnimationFactory, NSString;
@protocol SBWWallpaperScaleInvalidating;



@interface _SBWallpaperRemoteViewControllerScaleAssertion : BSSimpleAssertion <SBWWallpaperScaleInvalidating>

 {
    BSUIAnimationFactory *_invalidationAnimationFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)initWithScale:(CGFloat)arg0 forReason:(id)arg1 invalidationBlock:(id)arg2 ;
-(void)invalidateWithAnimationFactory:(id)arg0 ;


@end


#endif