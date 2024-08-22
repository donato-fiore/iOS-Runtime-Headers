// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPMUTABLEALARMCONFIGURATION_H
#define HKSPMUTABLEALARMCONFIGURATION_H

@class NSString, NSDate, NSDictionary, NSSet, NSNumber;
@protocol HKSPMutableObject, HKSPObject;


#import "HKSPAlarmConfiguration.h"
#import "HKSPChangeSet.h"

@interface HKSPMutableAlarmConfiguration : HKSPAlarmConfiguration <HKSPMutableObject>



@property (nonatomic) BOOL allowsSnooze;
@property (readonly, nonatomic) HKSPChangeSet *changeSet; // ivar: _changeSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalObject;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) NSUInteger version;
@property (copy, nonatomic) NSString *vibrationIdentifier;


+(BOOL)supportsSecureCoding;
-(NSUInteger)playOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateAlarmConfiguration:(id)arg0 ;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;
-(void)setPlayOptions:(NSUInteger)arg0 ;


@end


#endif