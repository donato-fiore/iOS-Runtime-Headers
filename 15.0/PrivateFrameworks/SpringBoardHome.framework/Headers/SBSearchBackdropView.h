// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSEARCHBACKDROPVIEW_H
#define SBSEARCHBACKDROPVIEW_H

@class UIView, MTMaterialView, NSString;
@protocol SBHProgressiveBlur;



@interface SBSearchBackdropView : UIView <SBHProgressiveBlur>

 {
    MTMaterialView *_materialView;
    BOOL _transitioningToBlur;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_recipeForStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)completeIncrementalTransitionSuccessfully:(BOOL)arg0 ;
-(void)completeTransitionSuccessfully:(BOOL)arg0 ;
-(void)prepareForTransitionToBlurred:(BOOL)arg0 ;
-(void)setTransitionProgress:(CGFloat)arg0 ;


@end


#endif