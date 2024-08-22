// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERENCODINGTHREAD_H
#define HAP2ACCESSORYSERVERENCODINGTHREAD_H

@class NSString;
@protocol HAP2AccessoryServerEncoding;


#import "HAP2LoggingObject.h"

@interface HAP2AccessoryServerEncodingThread : HAP2LoggingObject <HAP2AccessoryServerEncoding>

 {
    NSString *_accessoryDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger encodingFeatures; // ivar: _encodingFeatures
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_parseShortFormUUID:(id)arg0 error:(*id)arg1 ;
-(id)_parseCharacteristicMetadata:(id)arg0 error:(*id)arg1 ;
-(id)_parseCharacteristicResponsesWithBodyData:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)_parseCharacteristics:(id)arg0 error:(*id)arg1 ;
-(id)_parseServiceList:(id)arg0 error:(*id)arg1 ;
-(id)_parseTopLevelAttributeDatabaseFromData:(id)arg0 error:(*id)arg1 ;
-(id)decodeBodyData:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)encodeBodyValue:(id)arg0 format:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)eventsForData:(id)arg0 error:(*id)arg1 ;
-(id)executeWriteRequestForCharacteristics:(id)arg0 error:(*id)arg1 ;
-(id)groupingsForReadRequestsForCharacteristics:(id)arg0 ;
-(id)groupingsForWriteRequestsForCharacteristics:(id)arg0 ;
-(id)initWithEncodingFeatures:(NSUInteger)arg0 accessoryDescription:(id)arg1 ;
-(id)notificationRequestsForCharacteristics:(id)arg0 type:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)prepareWriteRequestForCharacteristics:(id)arg0 ttl:(CGFloat)arg1 error:(*id)arg2 ;
-(id)readRequestForAttributeDatabaseWithEncryption:(BOOL)arg0 error:(*id)arg1 ;
-(id)readRequestForCharacteristics:(id)arg0 shouldEncrypt:(BOOL)arg1 error:(*id)arg2 ;
-(id)requestToAddPairing:(id)arg0 characteristic:(id)arg1 error:(*id)arg2 ;
-(id)requestToListPairingsWithCharacteristic:(id)arg0 error:(*id)arg1 ;
-(id)requestToRemovePairing:(id)arg0 characteristic:(id)arg1 error:(*id)arg2 ;
-(id)responseForRequest:(id)arg0 bodyData:(id)arg1 error:(*id)arg2 ;
-(id)unpairedIdentifyRequestWithError:(*id)arg0 ;
-(id)writeRequestForCharacteristics:(id)arg0 shouldEncrypt:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif