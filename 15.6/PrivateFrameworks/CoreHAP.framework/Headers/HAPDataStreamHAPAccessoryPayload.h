// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPDATASTREAMHAPACCESSORYPAYLOAD_H
#define HAPDATASTREAMHAPACCESSORYPAYLOAD_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAPDataStreamHAPAccessoryPayload : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryRequestToSend; // ivar: _accessoryRequestToSend
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *forceClose; // ivar: _forceClose
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPayload:(id)arg0 forceClose:(id)arg1 accessoryRequestToSend:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif