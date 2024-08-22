// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRBASICPAYLOADCOMMAND_H
#define CRBASICPAYLOADCOMMAND_H

@class NSString, NSDictionary;
@protocol CRPayloadCommand, NSSecureCoding><NSCopying;

#import <Foundation/Foundation.h>


@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand>



@property (nonatomic) NSUInteger commandDirection; // ivar: commandDirection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *payload; // ivar: payload
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: userInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif