// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKEVENT_H
#define _DKEVENT_H

@class DKObject, NSString, NSDate, NSDictionary, NSTimeZone;
@protocol _DKProtobufConverting, _DKHasComparableValue, _DKHasPrimaryValue;


#import "_DKEventStream.h"
#import "_DKObject.h"

@interface _DKEvent : DKObject <_DKProtobufConverting, _DKHasComparableValue, _DKHasPrimaryValue>



@property NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy) NSDictionary *metadata; // ivar: _metadata
@property BOOL shouldSync; // ivar: _shouldSync
@property (retain) NSDate *startDate; // ivar: _startDate
@property (retain) _DKEventStream *stream; // ivar: _stream
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain) _DKObject *value; // ivar: _value


+(BOOL)copyMetadata:(id)arg0 toManagedObject:(id)arg1 ;
+(BOOL)isValidURL:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)allowedWebpageURLSchemes;
+(id)entityName;
+(id)eventRepresentingUserActivityWithSearchableItem:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)eventStreamFromManagedObject:(id)arg0 forValue:(id)arg1 cache:(id)arg2 ;
+(id)eventValueFromManagedObject:(id)arg0 streamName:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)eventWithInteraction:(id)arg0 bundleIdentifier:(id)arg1 storeKeyImage:(BOOL)arg2 ;
+(id)eventWithRelevantShortcut:(id)arg0 bundleID:(id)arg1 ;
+(id)eventWithSearchableItem:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(NSInteger)arg4 confidence:(CGFloat)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(NSInteger)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 confidence:(CGFloat)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(CGFloat)arg4 confidence:(CGFloat)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(CGFloat)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(CGFloat)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 categoryIntegerValue:(NSInteger)arg3 metadata:(id)arg4 ;
+(id)eventWithStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 identifierStringValue:(id)arg3 metadata:(id)arg4 ;
+(id)eventWithStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 quantityDoubleValue:(CGFloat)arg3 metadata:(id)arg4 ;
+(id)eventWithStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 value:(id)arg3 ;
+(id)eventWithStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 value:(id)arg3 confidence:(CGFloat)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 value:(id)arg3 metadata:(id)arg4 ;
+(id)fetchCustomMetadataWithName:(id)arg0 valueHash:(id)arg1 context:(id)arg2 ;
+(id)fromPBCodable:(id)arg0 ;
+(id)fromPBCodable:(id)arg0 skipMetadata:(BOOL)arg1 ;
+(id)metadataForInteraction:(id)arg0 storeKeyImage:(BOOL)arg1 ;
+(id)objectFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
+(id)relatedContactIdentifiersFromIntent:(id)arg0 ;
+(id)uncachedEventValueFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
-(BOOL)boolValue;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSInteger)compareValue:(id)arg0 ;
-(NSInteger)integerValue;
-(NSUInteger)eventValueClassOf:(id)arg0 ;
-(id)_initWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(CGFloat)arg5 metadata:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStream:(id)arg0 source:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(CGFloat)arg5 metadata:(id)arg6 ;
-(id)interaction;
-(id)metadataFromCustomMetadata:(id)arg0 ;
-(id)metadataFromCustomMetadata:(id)arg0 cache:(id)arg1 ;
-(id)metadataFromStructuredMetadata:(id)arg0 excludedMetadataKeys:(id)arg1 ;
-(id)metadataFromStructuredMetadata:(id)arg0 excludedMetadataKeys:(id)arg1 cache:(id)arg2 ;
-(id)primaryValue;
-(id)relevantShortcut;
-(id)stringValue;
-(id)toPBCodable;
-(id)toPBCodableUseStructuredMetadata:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchInteractionWithPopulatedKeyImage:(id)arg0 ;


@end


#endif