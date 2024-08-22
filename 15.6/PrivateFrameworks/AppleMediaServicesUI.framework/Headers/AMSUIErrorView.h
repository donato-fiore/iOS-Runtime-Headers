// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIERRORVIEW_H
#define AMSUIERRORVIEW_H

@class _UIContentUnavailableView, NSString;


#import "AMSUICommonView.h"

@interface AMSUIErrorView : AMSUICommonView

@property (retain, nonatomic) _UIContentUnavailableView *backingView; // ivar: _backingView
@property (copy, nonatomic) id *buttonAction;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 ;
-(void)_handleButtonTap;
-(void)layoutSubviews;


@end


#endif