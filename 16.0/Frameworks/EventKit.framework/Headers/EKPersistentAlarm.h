// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTALARM_H
#define EKPERSISTENTALARM_H

@class NSString;


#import "EKPersistentObject.h"

@interface EKPersistentAlarm : EKPersistentObject

@property (readonly, nonatomic) NSString *oldSemanticIdentifier;


+(Class)alternateUniverseClass;
+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)propertyKeyForUniqueIdentifier;
+(id)relations;
-(BOOL)isDefaultAlarm;
-(NSInteger)proximity;
-(NSInteger)type;
-(id)UUID;
-(id)absoluteDate;
-(id)acknowledgedDate;
-(id)calendarItemOwner;
-(id)calendarOwner;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)emailAddress;
-(id)externalData;
-(id)originalAlarm;
-(id)relativeOffset;
-(id)snoozedAlarmsSet;
-(id)structuredLocation;
-(id)urlWrapper;
-(int)entityType;
-(void)setAbsoluteDate:(id)arg0 ;
-(void)setAcknowledgedDate:(id)arg0 ;
-(void)setCalendarItemOwner:(id)arg0 ;
-(void)setCalendarOwner:(id)arg0 ;
-(void)setEmailAddress:(id)arg0 ;
-(void)setExternalData:(id)arg0 ;
-(void)setIsDefaultAlarm:(BOOL)arg0 ;
-(void)setOriginalAlarm:(id)arg0 ;
-(void)setProximity:(NSInteger)arg0 ;
-(void)setRelativeOffset:(id)arg0 ;
-(void)setSnoozedAlarmsSet:(id)arg0 ;
-(void)setStructuredLocation:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;
-(void)setUUID:(id)arg0 ;
-(void)setUrlWrapper:(id)arg0 ;


@end


#endif