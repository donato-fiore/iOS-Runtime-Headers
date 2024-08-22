// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPREFERENCEDETAILEDCELLTEXTFIELD_H
#define PKPAYMENTPREFERENCEDETAILEDCELLTEXTFIELD_H

@class UITextField, UIColor;



@interface PKPaymentPreferenceDetailedCellTextField : UITextField {
    UIColor *_defaultColor;
    UIColor *_invalidColor;
}


@property (nonatomic) BOOL isInvalid; // ivar: _isInvalid


-(id)init;


@end


#endif