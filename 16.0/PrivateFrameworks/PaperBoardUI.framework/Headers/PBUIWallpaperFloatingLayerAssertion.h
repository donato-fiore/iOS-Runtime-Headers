// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERFLOATINGLAYERASSERTION_H
#define PBUIWALLPAPERFLOATINGLAYERASSERTION_H

@class BSSimpleAssertion, BSUIAnimationFactory, UIView, NSString;
@protocol PBUIWallpaperAnimatedInvalidating;



@interface PBUIWallpaperFloatingLayerAssertion : BSSimpleAssertion <PBUIWallpaperAnimatedInvalidating>

 {
    BSUIAnimationFactory *_invalidationAnimationFactory;
    UIView *_containerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithAnimationFactory:(id)arg0 ;


@end


#endif