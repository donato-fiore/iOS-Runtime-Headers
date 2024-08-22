// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI17DYNAMICTYPEBUTTON_H
#define _TTC12GAMECENTERUI17DYNAMICTYPEBUTTON_H



#import "GKFocusableButton.h"

@interface _TtC12GameCenterUI17DynamicTypeButton : GKFocusableButton {
    ? fontUseCaseContentSizeCategory;
    ? fontUseCase;
    ? titleColorFollowsTintColor;
    ? imageAlignment;
    ? imageSpacing;
    ? imageWantsBaselineAlignment;
    ? touchOutsideMargin;
}




-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif