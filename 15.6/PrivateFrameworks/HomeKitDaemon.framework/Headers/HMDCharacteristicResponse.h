// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHARACTERISTICRESPONSE_H
#define HMDCHARACTERISTICRESPONSE_H

@class HMFObject, NSError, NSData, NSNumber, NSDate;


#import "HMDCharacteristicRequest.h"

@interface HMDCharacteristicResponse : HMFObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSData *notificationContext; // ivar: _notificationContext
@property (readonly, nonatomic) HMDCharacteristicRequest *request; // ivar: _request
@property (readonly, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (retain, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSDate *valueUpdatedTime; // ivar: _valueUpdatedTime


+(id)responseWithRequest:(id)arg0 characteristicUpdateDictionary:(id)arg1 ;
+(id)responseWithRequest:(id)arg0 error:(id)arg1 ;
+(id)responsesWithRequests:(id)arg0 characteristicUpdateDictionary:(id)arg1 ;
+(id)responsesWithRequests:(id)arg0 error:(id)arg1 ;
-(id)attributeDescriptions;
-(id)characteristicUpdateDictionary;
-(id)initWithRequest:(id)arg0 error:(id)arg1 ;


@end


#endif