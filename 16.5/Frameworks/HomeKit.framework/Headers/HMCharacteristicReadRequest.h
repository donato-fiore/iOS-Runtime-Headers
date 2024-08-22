// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCHARACTERISTICREADREQUEST_H
#define HMCHARACTERISTICREADREQUEST_H

@class NSString;
@protocol HMReadOperation;


#import "HMCharacteristicRequest.h"

@interface HMCharacteristicReadRequest : HMCharacteristicRequest <HMReadOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)readRequestWithCharacteristic:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCharacteristic:(id)arg0 ;


@end


#endif