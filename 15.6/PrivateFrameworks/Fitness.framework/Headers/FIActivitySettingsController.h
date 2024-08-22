// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIACTIVITYSETTINGSCONTROLLER_H
#define FIACTIVITYSETTINGSCONTROLLER_H

@class HKHealthStore, NSMutableDictionary, NSDate, HKQuantity;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FIActivitySettingsController : NSObject <NSCopying>

 {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_dirtyPropertiesMap;
}


@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (copy, nonatomic) NSDate *dateOfBirth; // ivar: _dateOfBirth
@property (readonly) NSUInteger experienceType;
@property (retain, nonatomic) HKQuantity *height; // ivar: _height
@property (readonly, nonatomic) HKQuantity *leanBodyMass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (retain, nonatomic) HKQuantity *weight; // ivar: _weight
@property (nonatomic) NSInteger wheelchairUse; // ivar: _wheelchairUse


-(BOOL)_commitValue:(id)arg0 forPropertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)_hasDirtyPropertyForPropertyKey:(id)arg0 ;
-(BOOL)_logAndNilError:(*id)arg0 operationDescription:(id)arg1 ;
-(BOOL)commmitWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_setUncommitedValue:(id)arg0 forPropertyKey:(id)arg1 ;
-(void)populateExistingCharacteristics;


@end


#endif