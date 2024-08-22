// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONNAVIGATIONBAR_H
#define PKPAYMENTAUTHORIZATIONNAVIGATIONBAR_H

@class UINavigationBar, UILabel;



@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {
    UILabel *_environmentLabel;
}




+(id)_leftBarButtonItemWithImage:(id)arg0 ;
+(id)applePayBarButtonItem;
+(id)cardOnFileBarButtonItemForRequestor:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didUpdateInterfaceStyle;
-(void)layoutSubviews;


@end


#endif