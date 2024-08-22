// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTAGGREGATION_H
#define SIGNPOSTAGGREGATION_H

@class NSMutableDictionary, NSString, NSDate, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SignpostAggregation : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToDuration; // ivar: __groupToTypeToDuration
@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToMaxDuration; // ivar: __groupToTypeToMaxDuration
@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToMinDuration; // ivar: __groupToTypeToMinDuration
@property (readonly, nonatomic) NSString *aggregationDescription; // ivar: _aggregationDescription
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) CGFloat durationMs;
@property (readonly, nonatomic) NSUInteger durationNs; // ivar: _durationNs
@property (readonly, nonatomic) CGFloat durationSeconds;
@property (readonly, nonatomic) NSDate *earliestDate; // ivar: _earliestDate
@property (readonly, nonatomic) NSDictionary *groupNameToGroupDict; // ivar: _groupNameToGroupDict
@property (readonly, nonatomic) NSDate *latestDate; // ivar: _latestDate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *rawIntervals; // ivar: _rawIntervals
@property (readonly, nonatomic) NSString *signatureString;
@property (readonly, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (readonly, nonatomic) BOOL telemetryEnabled;


+(id)_aggregationDescriptionStringForInterval:(id)arg0 ;
+(id)_signatureForSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 aggregationDescription:(id)arg3 ;
+(id)_timeRangeDictForInterval:(id)arg0 ;
+(id)sumOfAggregation1:(id)arg0 aggregation2:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_canAdd:(id)arg0 ;
-(id)_coreAnalyticsEventName;
-(id)_coreAnalyticsEventPayloadDictionary;
-(id)_dictionaryRepresentation;
-(id)_handleCountSegment:(id)arg0 ;
-(id)_handleDurationSegment:(id)arg0 placeholderType:(unsigned char)arg1 ;
-(id)_handleMaxDurationSegment:(id)arg0 ;
-(id)_handleMinDurationSegment:(id)arg0 ;
-(id)_handleTotalDurationSegment:(id)arg0 ;
-(id)_initWithSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 rawIntervals:(id)arg3 durationNs:(NSUInteger)arg4 ;
-(id)_processDescription:(id)arg0 ;
-(id)_processInterval:(id)arg0 ;
-(id)_processMetadataSegment:(id)arg0 ;
-(id)_updateDict:(id)arg0 withGroup:(id)arg1 type:(id)arg2 durationNs:(id)arg3 namespaceType:(id)arg4 ;
-(id)addAggregation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithInterval:(id)arg0 errorsOut:(*id)arg1 ;
-(id)jsonDescription:(NSUInteger)arg0 ;
-(void)_checkGroupTypeTuplesForPlaceholderType:(unsigned char)arg0 errors:(id)arg1 ;
-(void)_fixupGroupsAndDurationsWithErrors:(id)arg0 ;
-(void)_sortRawIntervals;
-(void)dropRawIntervals;


@end


#endif