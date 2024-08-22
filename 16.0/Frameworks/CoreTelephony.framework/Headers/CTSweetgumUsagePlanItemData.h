// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTSWEETGUMUSAGEPLANITEMDATA_H
#define CTSWEETGUMUSAGEPLANITEMDATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSweetgumUsagePlanItemData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *capacity; // ivar: _capacity
@property (retain, nonatomic) NSString *maxDataBeforeThrottling; // ivar: _maxDataBeforeThrottling
@property (retain, nonatomic) NSString *sharedDataUsed; // ivar: _sharedDataUsed
@property (retain, nonatomic) NSString *sharedPlanIdentifier; // ivar: _sharedPlanIdentifier
@property (retain, nonatomic) NSString *thisDeviceDataUsed; // ivar: _thisDeviceDataUsed
@property (nonatomic) NSInteger units; // ivar: _units


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif