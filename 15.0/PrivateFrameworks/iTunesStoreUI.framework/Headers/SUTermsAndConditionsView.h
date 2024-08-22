// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTERMSANDCONDITIONSVIEW_H
#define SUTERMSANDCONDITIONSVIEW_H

@class UIView;
@protocol SUTermsAndConditionsViewDelegate;


#import "SUSubtitledButton.h"
#import "SULinkControl.h"
#import "SUClientInterface.h"

@interface SUTermsAndConditionsView : UIView {
    SUSubtitledButton *_button;
    id<SUTermsAndConditionsViewDelegate> *_delegate;
    SULinkControl *_termsAndConditionsControl;
}


@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (weak, nonatomic) NSObject<SUTermsAndConditionsViewDelegate> *delegate;
@property (nonatomic) BOOL hideAccountButton; // ivar: _hideAccountButton
@property (nonatomic) CGFloat rightMargin; // ivar: _rightMargin
@property (nonatomic) NSInteger style; // ivar: _style


-(CGFloat)_buttonHeightForStyle:(NSInteger)arg0 ;
-(NSInteger)_linkStyleForStyle:(NSInteger)arg0 ;
-(id)_button;
-(id)_termsAndConditionsControl;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_accountsChangedNotification:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_clearButtonSelection:(id)arg0 ;
-(void)_destroyButton;
-(void)_termsAndConditionsAction:(id)arg0 ;
-(void)_updateButton;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif