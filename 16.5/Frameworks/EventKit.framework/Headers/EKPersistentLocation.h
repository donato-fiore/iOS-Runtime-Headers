// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTLOCATION_H
#define EKPERSISTENTLOCATION_H



#import "EKPersistentObject.h"

@interface EKPersistentLocation : EKPersistentObject



+(Class)alternateUniverseClass;
+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)address;
-(id)alarmOwner;
-(id)calendarItemOwner;
-(id)contactLabel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)derivedFrom;
-(id)description;
-(id)latitude;
-(id)longitude;
-(id)mapKitHandle;
-(id)radius;
-(id)referenceFrame;
-(id)routing;
-(id)title;
-(int)entityType;
-(void)setAddress:(id)arg0 ;
-(void)setAlarmOwner:(id)arg0 ;
-(void)setCalendarItemOwner:(id)arg0 ;
-(void)setContactLabel:(id)arg0 ;
-(void)setDerivedFrom:(id)arg0 ;
-(void)setLatitude:(id)arg0 ;
-(void)setLongitude:(id)arg0 ;
-(void)setMapKitHandle:(id)arg0 ;
-(void)setRadius:(id)arg0 ;
-(void)setReferenceFrame:(id)arg0 ;
-(void)setRouting:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif