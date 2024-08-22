// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCHARACTERISTICTHRESHOLDRANGEEVENT_H
#define HMCHARACTERISTICTHRESHOLDRANGEEVENT_H

@class NSString;
@protocol HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMEvent.h"
#import "HMCharacteristic.h"
#import "HMNumberRange.h"

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HMNumberRange *thresholdRange; // ivar: _thresholdRange


+(BOOL)isSupportedForHome:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacteristic:(id)arg0 thresholdRange:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 characteristic:(id)arg1 thresholdRange:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_updateFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateThresholdRange:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif