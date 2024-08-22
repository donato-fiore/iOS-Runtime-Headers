// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHARACTERISTICWRITEREQUEST_H
#define HMCHARACTERISTICWRITEREQUEST_H

@class NSString;
@protocol HMWriteOperation, NSCopying><NSObject;


#import "HMCharacteristicRequest.h"

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest <HMWriteOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NSCopying><NSObject> *value; // ivar: _value


+(id)writeRequestWithCharacteristic:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCharacteristic:(id)arg0 value:(id)arg1 ;


@end


#endif