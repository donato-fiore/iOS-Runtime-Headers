// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRINVOCATIONPAYLOADCOMMAND_H
#define CRINVOCATIONPAYLOADCOMMAND_H

@class NSString, NSDictionary;
@protocol CRPayloadCommand, NSSecureCoding><NSCopying;


#import "CRBasicPayloadCommand.h"

@interface CRInvocationPayloadCommand : CRBasicPayloadCommand <CRPayloadCommand>



@property (nonatomic) NSUInteger commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *invocationIdentifier; // ivar: _invocationIdentifier
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *payload;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif