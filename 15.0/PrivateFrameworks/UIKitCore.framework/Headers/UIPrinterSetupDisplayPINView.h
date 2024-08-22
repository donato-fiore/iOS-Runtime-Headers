// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTERSETUPDISPLAYPINVIEW_H
#define UIPRINTERSETUPDISPLAYPINVIEW_H



#import "UIView.h"
#import "UIButton.h"
#import "UILabel.h"

@interface UIPrinterSetupDisplayPINView : UIView

@property (retain, nonatomic) UIButton *nextButton; // ivar: _nextButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setMessage:(id)arg0 showButton:(BOOL)arg1 ;


@end


#endif