// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERENCODINGTHREADBTLEREQUEST_H
#define HAP2ACCESSORYSERVERENCODINGTHREADBTLEREQUEST_H



#import "HAPBTLERequest.h"

@interface HAP2AccessoryServerEncodingThreadBTLERequest : HAPBTLERequest

@property (readonly, nonatomic) BOOL expectsResponseBody;
@property (readonly, nonatomic) id *requestedValue; // ivar: _requestedValue
@property (readonly, nonatomic) unsigned char threadRequestType; // ivar: _threadRequestType
@property (readonly, nonatomic) NSInteger writeOptions; // ivar: _writeOptions


+(id)attributeDatabaseRequest;
+(id)executeWriteRequestForCharacteristic:(id)arg0 value:(id)arg1 options:(NSInteger)arg2 error:(*id)arg3 ;
+(id)notificationRequestForCharacteristic:(id)arg0 threadRequestType:(unsigned char)arg1 enforcePDUBodyLength:(BOOL)arg2 ;
+(id)prepareWriteRequestForCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 error:(*id)arg5 ;
+(id)readRequestForCharacteristic:(id)arg0 ;
+(id)writeRequestForCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 error:(*id)arg5 ;


@end


#endif