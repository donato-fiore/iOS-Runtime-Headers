// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPWIZARDSCRATCHPADTOAST_H
#define PNPWIZARDSCRATCHPADTOAST_H

@class UIView, UIVisualEffectView, UILabel, NSString;



@interface PNPWizardScratchpadToast : UIView {
    UIVisualEffectView *_background;
    UILabel *_label;
}


@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif