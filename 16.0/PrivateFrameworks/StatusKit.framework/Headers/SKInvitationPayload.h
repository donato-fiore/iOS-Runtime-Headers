// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKINVITATIONPAYLOAD_H
#define SKINVITATIONPAYLOAD_H

@class NSDictionary, NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKInvitationPayload : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary; // ivar: _cachedPayloadDictionary
@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSDictionary *payloadDictionary;


+(BOOL)supportsSecureCoding;
+(id)logger;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 dateCreated:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 dateCreated:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif