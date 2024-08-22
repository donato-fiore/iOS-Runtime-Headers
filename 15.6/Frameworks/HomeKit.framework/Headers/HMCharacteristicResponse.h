// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHARACTERISTICRESPONSE_H
#define HMCHARACTERISTICRESPONSE_H



#import "HMResponseBase.h"
#import "HMCharacteristicRequest.h"

@interface HMCharacteristicResponse : HMResponseBase

@property (readonly, nonatomic) HMCharacteristicRequest *request;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRequest:(id)arg0 error:(id)arg1 ;
-(id)initWithRequest:(id)arg0 value:(id)arg1 error:(id)arg2 ;


@end


#endif