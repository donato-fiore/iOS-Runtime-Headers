// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUIVOICEOVERTEXTSPINNERVIEW_H
#define AXUIVOICEOVERTEXTSPINNERVIEW_H

@class UIView, UILabel, UIActivityIndicatorView;
@protocol PSHeaderFooterView;



@interface AXUIVoiceOverTextSpinnerView : UIView <PSHeaderFooterView>

 {
    UILabel *_text;
    UIActivityIndicatorView *_spinner;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)hideSpinner;
-(void)showSpinner;


@end


#endif