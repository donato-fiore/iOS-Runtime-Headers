// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCARRIERSPACEDATAPLANMETRICSITEM_H
#define CTCARRIERSPACEDATAPLANMETRICSITEM_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger capacity; // ivar: _capacity
@property (retain, nonatomic) NSNumber *capacityBytes; // ivar: _capacityBytes
@property (nonatomic) BOOL capacityValid; // ivar: _capacityValid
@property (nonatomic) NSInteger units; // ivar: _units


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif