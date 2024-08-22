// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFAGGREGATEDCHARACTERISTICREADPOLICY_H
#define HFAGGREGATEDCHARACTERISTICREADPOLICY_H

@class NSString, NSArray;
@protocol HFCharacteristicReadPolicy, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *policies; // ivar: _policies
@property (readonly) Class superclass;


-(NSUInteger)evaluateWithCharacteristic:(id)arg0 traits:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPolicies:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif