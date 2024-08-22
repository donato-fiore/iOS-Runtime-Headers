// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11APPSTOREKIT6BUTTON_H
#define _TTC11APPSTOREKIT6BUTTON_H

@class UIButton;



@interface _TtC11AppStoreKit6Button : UIButton {
    ? imageAlignment;
    ? imageWantsBaselineAlignment;
    ? touchOutsideMargin;
    ? primaryActionHandler;
}




-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)didTriggerPrimaryAction:(id)arg0 ;


@end


#endif