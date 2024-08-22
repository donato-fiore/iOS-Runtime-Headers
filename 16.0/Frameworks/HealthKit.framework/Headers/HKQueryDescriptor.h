// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUERYDESCRIPTOR_H
#define HKQUERYDESCRIPTOR_H

@class NSPredicate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_HKFilter.h"
#import "HKSampleType.h"

@interface HKQueryDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=_filter) _HKFilter *filter; // ivar: _filter
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) HKSampleType *sampleType; // ivar: _sampleType


+(BOOL)supportsSecureCoding;
+(id)allergiesDescriptions;
+(id)allergiesDescriptionsWithPredicate:(id)arg0 ;
+(id)conditionsDescriptions;
+(id)conditionsDescriptionsWithPredicate:(id)arg0 ;
+(id)coverageDescriptions;
+(id)coverageDescriptionsWithPredicate:(id)arg0 ;
+(id)immunizationsDescriptions;
+(id)immunizationsDescriptionsWithPredicate:(id)arg0 ;
+(id)labsDescriptions;
+(id)labsDescriptionsWithPredicate:(id)arg0 ;
+(id)medicalRecordDescriptionsWithPredicate:(id)arg0 futureMigrationsEnabled:(BOOL)arg1 ;
+(id)medicationsDescriptions;
+(id)medicationsDescriptionsWithPredicate:(id)arg0 ;
+(id)proceduresDescriptions;
+(id)proceduresDescriptionsWithPredicate:(id)arg0 ;
+(id)queryDescriptorWithSampleType:(id)arg0 ;
+(id)queryDescriptorWithSampleType:(id)arg0 predicate:(id)arg1 ;
+(id)vitalsDescriptions;
+(id)vitalsDescriptionsWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleType:(id)arg0 predicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif