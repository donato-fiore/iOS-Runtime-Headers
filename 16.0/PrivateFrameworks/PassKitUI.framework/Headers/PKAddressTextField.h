// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKADDRESSTEXTFIELD_H
#define PKADDRESSTEXTFIELD_H

@class UITextField, PKUniqueAddressField, PKContactFieldConfiguration, UIColor;
@protocol PKAddressTextFieldDelegate;



@interface PKAddressTextField : UITextField

@property (weak, nonatomic) NSObject<PKAddressTextFieldDelegate> *addressDelegate; // ivar: _addressDelegate
@property (retain, nonatomic) PKUniqueAddressField *addressField; // ivar: _addressField
@property (retain, nonatomic) PKContactFieldConfiguration *contactFieldConfiguration; // ivar: _contactFieldConfiguration
@property (retain, nonatomic) UIColor *defaultColor; // ivar: _defaultColor
@property (retain, nonatomic) UIColor *invalidColor; // ivar: _invalidColor
@property (readonly, nonatomic) BOOL isInvalid; // ivar: _isInvalid
@property (nonatomic) NSInteger style; // ivar: _style


-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)insertTextSuggestion:(id)arg0 ;


@end


#endif