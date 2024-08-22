// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPDATASTREAMTRANSPORTINTERRUPTPAYLOAD_H
#define HAPDATASTREAMTRANSPORTINTERRUPTPAYLOAD_H

@class NSString, NSData;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPTLVUnsignedNumberValue.h"

@interface HAPDataStreamTransportInterruptPayload : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *dataStreamTransportInterruptSequenceNumber; // ivar: _dataStreamTransportInterruptSequenceNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *requestToSendIdentifiers; // ivar: _requestToSendIdentifiers
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRequestToSendIdentifiers:(id)arg0 dataStreamTransportInterruptSequenceNumber:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif