// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUICOMMONVIEW_H
#define AMSUICOMMONVIEW_H

@class UIView, NSString;



@interface AMSUICommonView : UIView

@property (readonly, nonatomic) NSString *accessibilityElementLabel; // ivar: _accessibilityElementLabel


-(id)accessibilityLabel;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tintColor;
-(void)_setup;


@end


#endif