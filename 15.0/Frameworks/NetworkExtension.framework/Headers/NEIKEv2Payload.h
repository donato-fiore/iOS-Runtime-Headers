// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2PAYLOAD_H
#define NEIKEV2PAYLOAD_H

@class NSData;

#import <Foundation/Foundation.h>


@interface NEIKEv2Payload : NSObject

@property (readonly) BOOL hasRequiredFields;
@property BOOL isInbound; // ivar: _isInbound
@property (readonly) BOOL isValid;
@property (retain) NSData *payloadData; // ivar: _payloadData
@property (readonly) NSUInteger type;


+(id)copyTypeDescription;
+(id)createPayloadWithType:(NSUInteger)arg0 fromData:(id)arg1 ;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)copyPayloadData;
-(id)init;


@end


#endif