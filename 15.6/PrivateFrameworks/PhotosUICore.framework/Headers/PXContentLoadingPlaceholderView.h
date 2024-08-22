// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTLOADINGPLACEHOLDERVIEW_H
#define PXCONTENTLOADINGPLACEHOLDERVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, NSString;



@interface PXContentLoadingPlaceholderView : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property (copy, nonatomic) NSString *statusMessage; // ivar: _statusMessage


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupSubviews;
-(void)_updateStatusLabel;
-(void)layoutSubviews;


@end


#endif