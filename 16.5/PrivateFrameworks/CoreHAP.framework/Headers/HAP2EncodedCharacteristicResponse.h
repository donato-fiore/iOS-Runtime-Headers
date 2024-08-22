// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ENCODEDCHARACTERISTICRESPONSE_H
#define HAP2ENCODEDCHARACTERISTICRESPONSE_H

@class NSArray, NSString;
@protocol HAP2EncodedCharacteristicResponse;


#import "HAP2LoggingObject.h"

@interface HAP2EncodedCharacteristicResponse : HAP2LoggingObject <HAP2EncodedCharacteristicResponse>

 {
    NSArray *_responses;
}


@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCharacteristics:(id)arg0 ;


@end


#endif