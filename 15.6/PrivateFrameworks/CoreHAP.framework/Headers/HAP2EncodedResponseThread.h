// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ENCODEDRESPONSETHREAD_H
#define HAP2ENCODEDRESPONSETHREAD_H

@class NSString;
@protocol HAP2EncodedResponse;


#import "HAP2LoggingObject.h"
#import "HAPBTLEResponse.h"

@interface HAP2EncodedResponseThread : HAP2LoggingObject <HAP2EncodedResponse>



@property (readonly, nonatomic) HAPBTLEResponse *btleResponse; // ivar: _btleResponse
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBTLEResponse:(id)arg0 ;


@end


#endif