// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPRINTMESSAGEANDSPINNERVIEW_H
#define _UIPRINTMESSAGEANDSPINNERVIEW_H

@class UIView, NSArray, UILabel, NSString, UIActivityIndicatorView;



@interface _UIPrintMessageAndSpinnerView : UIView

@property (retain, nonatomic) NSArray *currentHorizontalConstraints; // ivar: _currentHorizontalConstraints
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (nonatomic) BOOL spinnerHidden;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;
-(void)updateFont;


@end


#endif