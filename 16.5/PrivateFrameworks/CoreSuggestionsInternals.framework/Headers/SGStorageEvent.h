// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSTORAGEEVENT_H
#define SGSTORAGEEVENT_H

@class NSString, NSArray, SGRecordId, NSData, NSSet, SGSimpleTimeRange;
@protocol SGEventForGeocode;

#import <Foundation/Foundation.h>

#import "SGDuplicateKey.h"

@interface SGStorageEvent : NSObject <SGEventForGeocode>



@property (readonly, nonatomic) NSString *content; // ivar: _content
@property (readonly, nonatomic) SGUnixTimestamp_ creationTimestamp; // ivar: _creationTimestamp
@property (readonly, nonatomic) BOOL curated; // ivar: _curated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey; // ivar: _duplicateKey
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SGUnixTimestamp_ lastModifiedTimestamp; // ivar: _lastModifiedTimestamp
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) NSString *opaqueKey;
@property (readonly, nonatomic) SGRecordId *recordId; // ivar: _recordId
@property (readonly, nonatomic) NSString *sourceKey; // ivar: _sourceKey
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly, nonatomic) NSData *structuredData; // ivar: _structuredData
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *tags; // ivar: _tags
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) SGSimpleTimeRange *when; // ivar: _when


+(id)storageEventFromEntity:(id)arg0 ;
-(BOOL)isAllDay;
-(BOOL)isCancelled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStorageEvent:(id)arg0 ;
-(BOOL)isFromDataDetectors;
-(BOOL)isFromSuggestions;
-(NSUInteger)geocodingMode;
-(id)convertToEvent:(id)arg0 ;
-(id)convertToEventWithOrigin:(id)arg0 ;
-(id)extraKeyTag;
-(id)fieldsToSaveOnConfirmation;
-(id)geocodeEndDate;
-(id)geocodeEndTimeZone;
-(id)geocodeLocations;
-(id)geocodeStartDate;
-(id)geocodeStartTimeZone;
-(id)geocodedEventWithStartDate:(id)arg0 startTimeZone:(id)arg1 endDate:(id)arg2 endTimeZone:(id)arg3 locations:(id)arg4 ;
-(id)initWithRecordId:(id)arg0 duplicateKey:(id)arg1 sourceKey:(id)arg2 content:(id)arg3 title:(id)arg4 creationTimestamp:(struct SGUnixTimestamp_ )arg5 lastModifiedTimestamp:(struct SGUnixTimestamp_ )arg6 tags:(id)arg7 when:(id)arg8 locations:(id)arg9 structuredData:(id)arg10 state:(unsigned int)arg11 curated:(BOOL)arg12 ;
-(id)loggingIdentifier;
-(id)poiFilters;
-(id)urlFromTags;


@end


#endif