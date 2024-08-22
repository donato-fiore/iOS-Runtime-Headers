// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ENCODEDREQUESTTHREAD_H
#define HAP2ENCODEDREQUESTTHREAD_H

@class NSString;
@protocol HAP2EncodedRequest;


#import "HAP2LoggingObject.h"
#import "HAP2AccessoryServerEncodingThreadBTLERequest.h"

@interface HAP2EncodedRequestThread : HAP2LoggingObject <HAP2EncodedRequest>

 {
    BOOL _enforcePDUBodyLength;
}


@property (readonly, nonatomic) HAP2AccessoryServerEncodingThreadBTLERequest *btleRequest; // ivar: _btleRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


+(NSUInteger)hap2RequestTypeFromBTLERequestType:(unsigned char)arg0 ;
+(unsigned char)btleRequestTypeFromHAP2RequestType:(NSUInteger)arg0 ;
-(id)initWithBTLERequest:(id)arg0 enforcePDUBodyLength:(BOOL)arg1 ;
-(id)serialize;


@end


#endif