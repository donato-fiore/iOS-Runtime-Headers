// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCHARACTERISTICREQUEST_H
#define HMCHARACTERISTICREQUEST_H



#import "HMRequestBase.h"
#import "HMCharacteristic.h"

@interface HMCharacteristicRequest : HMRequestBase

@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic


-(id)initWithCharacteristic:(id)arg0 ;


@end


#endif