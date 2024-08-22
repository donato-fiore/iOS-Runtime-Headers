// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ENCODEDCHARACTERISTICEVENT_H
#define HAP2ENCODEDCHARACTERISTICEVENT_H

@class NSString, NSData, NSNumber;
@protocol HAP2EncodedCharacteristicEvent, HAP2AccessoryCharacteristicEncodedData;


#import "HAP2LoggingObject.h"

@interface HAP2EncodedCharacteristicEvent : HAP2LoggingObject <HAP2EncodedCharacteristicEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *encodedContextData; // ivar: _encodedContextData
@property (readonly, nonatomic) NSObject<HAP2AccessoryCharacteristicEncodedData> *encodedValueData; // ivar: _encodedValueData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (readonly) Class superclass;


+(id)new;
-(id)init;
-(id)initWithInstanceID:(id)arg0 encodedValueData:(id)arg1 encodedContextData:(id)arg2 ;


@end


#endif