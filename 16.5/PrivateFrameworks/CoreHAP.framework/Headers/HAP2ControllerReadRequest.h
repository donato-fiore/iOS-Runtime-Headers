// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2CONTROLLERREADREQUEST_H
#define HAP2CONTROLLERREADREQUEST_H

@class NSArray, NSString;
@protocol HAP2EncodedCharacteristicRequest;


#import "HAP2LoggingObject.h"

@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest>



@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *originalCharacteristics; // ivar: _originalCharacteristics
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)initWithCharacteristics:(id)arg0 ;
-(id)serialize;


@end


#endif