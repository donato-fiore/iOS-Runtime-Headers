// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUISERVICEICONVIEW_H
#define AAUISERVICEICONVIEW_H

@class UIView, UIStackView;



@interface AAUIServiceIconView : UIView {
    UIStackView *_stackView;
}




+(id)iconNames;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateStackViewSpacing;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif