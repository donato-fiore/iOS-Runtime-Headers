// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCORRELATION_H
#define HKCORRELATION_H

@class NSMutableDictionary, NSUUID, NSSet;


#import "HKSample.h"
#import "HKCorrelationType.h"

@interface HKCorrelation : HKSample {
    NSMutableDictionary *_objects;
}


@property (readonly, getter=_UUID) NSUUID *UUID;
@property (readonly) HKCorrelationType *correlationType;
@property (readonly, copy) NSSet *objects;


+(BOOL)_allowEmptyCorrelations;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)correlationWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 objects:(id)arg3 ;
+(id)correlationWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 objects:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
+(id)correlationWithType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 objects:(id)arg3 metadata:(id)arg4 ;
-(BOOL)_containsObjects;
-(BOOL)_correlatedObjectsMatchFilterDictionary:(id)arg0 ;
-(id)_allTypes;
-(id)_init;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)objectsForType:(id)arg0 ;
-(void)_addCorrelatedObject:(id)arg0 ;
-(void)_addCorrelatedObjects:(id)arg0 ;
-(void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg0 ;
-(void)_removeAllCorrelatedObjects;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif