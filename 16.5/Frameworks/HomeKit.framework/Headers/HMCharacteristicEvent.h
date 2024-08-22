// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCHARACTERISTICEVENT_H
#define HMCHARACTERISTICEVENT_H

@class NSString;
@protocol NSSecureCoding, HMCharacteristicEventProtocol, NSCopying, NSMutableCopying;


#import "HMEvent.h"
#import "HMCharacteristic.h"

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding, HMCharacteristicEventProtocol, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<NSCopying> *triggerValue; // ivar: _triggerValue


+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacteristic:(id)arg0 triggerValue:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 characteristic:(id)arg1 triggerValue:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_updateFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateTriggerValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif