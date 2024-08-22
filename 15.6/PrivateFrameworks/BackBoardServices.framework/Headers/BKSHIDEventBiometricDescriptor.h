// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTBIOMETRICDESCRIPTOR_H
#define BKSHIDEVENTBIOMETRICDESCRIPTOR_H



#import "BKSHIDEventDescriptor.h"

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor

@property (readonly, nonatomic) unsigned int biometricEventType; // ivar: _biometricEventType


+(BOOL)supportsSecureCoding;
+(id)descriptorWithBiometricEventType:(unsigned int)arg0 ;
-(BOOL)describes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithBiometricEventType:(unsigned int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif