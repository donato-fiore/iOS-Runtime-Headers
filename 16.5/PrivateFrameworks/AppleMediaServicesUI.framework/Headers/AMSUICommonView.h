// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUICOMMONVIEW_H
#define AMSUICOMMONVIEW_H

@class UIView, NSString;



@interface AMSUICommonView : UIView

@property (readonly, nonatomic) NSString *accessibilityElementLabel; // ivar: _accessibilityElementLabel
@property (nonatomic) NSUInteger edgesPropagatingSafeAreaInsetsToSubviews; // ivar: _edgesPropagatingSafeAreaInsetsToSubviews


-(id)accessibilityLabel;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tintColor;
-(void)_setup;


@end


#endif