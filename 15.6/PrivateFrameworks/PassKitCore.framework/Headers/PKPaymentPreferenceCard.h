// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCECARD_H
#define PKPAYMENTPREFERENCECARD_H



#import "PKPaymentPreference.h"

@interface PKPaymentPreferenceCard : PKPaymentPreference

@property (nonatomic) BOOL supportsNullSelection; // ivar: _supportsNullSelection


-(BOOL)supportsDeletion;
-(id)errorsForPreference:(id)arg0 ;
-(id)initWithTitle:(id)arg0 preferences:(id)arg1 selectedIndex:(NSUInteger)arg2 readOnly:(BOOL)arg3 ;
-(void)setErrors:(id)arg0 forPreference:(id)arg1 ;


@end


#endif