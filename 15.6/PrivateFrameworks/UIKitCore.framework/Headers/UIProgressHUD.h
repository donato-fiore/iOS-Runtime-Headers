// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPROGRESSHUD_H
#define UIPROGRESSHUD_H



#import "UIView.h"
#import "UIActivityIndicatorView.h"
#import "UILabel.h"
#import "UIImageView.h"
#import "UIWindow.h"

@interface UIProgressHUD : UIView {
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_progressMessage;
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    ? _progressHUDFlags;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWindow:(id)arg0 ;
-(void)dealloc;
-(void)done;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)hide;
-(void)layoutSubviews;
-(void)setFontSize:(int)arg0 ;
-(void)setShowsText:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;
-(void)show:(BOOL)arg0 ;
-(void)showInView:(id)arg0 ;


@end


#endif