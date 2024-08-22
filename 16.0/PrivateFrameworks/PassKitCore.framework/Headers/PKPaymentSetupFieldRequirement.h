// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDREQUIREMENT_H
#define PKPAYMENTSETUPFIELDREQUIREMENT_H

@class NSString;
@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupFieldRequirement : NSObject

@property (copy, nonatomic) NSString *fieldIdentifier; // ivar: _fieldIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *value; // ivar: _value


-(id)initWithDictionary:(id)arg0 ;


@end


#endif