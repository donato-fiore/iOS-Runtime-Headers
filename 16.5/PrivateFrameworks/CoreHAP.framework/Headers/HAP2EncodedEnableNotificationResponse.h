// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ENCODEDENABLENOTIFICATIONRESPONSE_H
#define HAP2ENCODEDENABLENOTIFICATIONRESPONSE_H

@class NSSet, NSArray, NSString;
@protocol HAP2EncodedEnableNotificationResponse;


#import "HAP2EncodedCharacteristicResponse.h"

@interface HAP2EncodedEnableNotificationResponse : HAP2EncodedCharacteristicResponse <HAP2EncodedEnableNotificationResponse>

 {
    NSSet *_valueResponses;
}


@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *updatedValues; // ivar: _updatedValues


-(id)initWithNotificationResponses:(id)arg0 ;
-(id)initWithNotificationResponses:(id)arg0 updatedValues:(id)arg1 ;


@end


#endif