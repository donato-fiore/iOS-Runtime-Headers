// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTBINARYSMS_H
#define CTBINARYSMS_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "CTXPCServiceSubscriptionContext.h"

@interface CTBinarySMS : NSObject

@property (copy, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (copy, nonatomic) NSString *destinationAddress; // ivar: _destinationAddress
@property (nonatomic) int dstPort; // ivar: _dstPort
@property (copy, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) int portAddressingScheme; // ivar: _portAddressingScheme
@property (nonatomic) int smsType; // ivar: _smsType
@property (copy, nonatomic) NSString *smscAddress; // ivar: _smscAddress
@property (nonatomic) int srcPort; // ivar: _srcPort


-(BOOL)isValid;
-(id)init;


@end


#endif