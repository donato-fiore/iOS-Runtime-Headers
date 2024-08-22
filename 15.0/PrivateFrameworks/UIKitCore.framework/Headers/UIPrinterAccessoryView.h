// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTERACCESSORYVIEW_H
#define UIPRINTERACCESSORYVIEW_H

@protocol UIPrinterAccessoryViewDelegate;


#import "UIView.h"
#import "UIButton.h"

@interface UIPrinterAccessoryView : UIView

@property (weak, nonatomic) NSObject<UIPrinterAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *infoButton; // ivar: _infoButton
@property (nonatomic) int printerState; // ivar: _printerState
@property (retain, nonatomic) UIView *statusView; // ivar: _statusView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)infoButtonPressed:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif