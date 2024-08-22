// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERSCALEASSERTION_H
#define PBUIWALLPAPERSCALEASSERTION_H

@class BSSimpleAssertion, BSUIAnimationFactory, NSString;
@protocol PBUIWallpaperAnimatedInvalidating;



@interface PBUIWallpaperScaleAssertion : BSSimpleAssertion <PBUIWallpaperAnimatedInvalidating>

 {
    BSUIAnimationFactory *_invalidationAnimationFactory;
    NSInteger _variant;
    CGFloat _scale;
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