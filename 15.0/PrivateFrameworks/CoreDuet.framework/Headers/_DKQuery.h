// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKQUERY_H
#define _DKQUERY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DKQuery : NSObject <NSSecureCoding>



@property (nonatomic) BOOL executeConcurrently; // ivar: _executeConcurrently


+(BOOL)supportsSecureCoding;
+(id)endDateSortDescriptorAscending:(BOOL)arg0 ;
+(id)executableQueryForQuery:(id)arg0 ;
+(id)localCreationDateSortDescriptorAscending:(BOOL)arg0 ;
+(id)predicateForEventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)predicateForEventsBetweenStartSecondOfDay:(NSUInteger)arg0 endSecondOfDay:(NSUInteger)arg1 ;
+(id)predicateForEventsContainingDateRangeFrom:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsExcludingIntegerValue:(NSInteger)arg0 ;
+(id)predicateForEventsIntersectingDateRangeFrom:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithBundleID:(id)arg0 ;
+(id)predicateForEventsWithCategoryValue:(id)arg0 ;
+(id)predicateForEventsWithCreationInDateRangeFrom:(id)arg0 toBefore:(id)arg1 ;
+(id)predicateForEventsWithCreationInDateRangeFromAfter:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithDayOfWeek:(NSUInteger)arg0 ;
+(id)predicateForEventsWithDoubleValue:(CGFloat)arg0 ;
+(id)predicateForEventsWithDoubleValueBetween:(CGFloat)arg0 and:(CGFloat)arg1 ;
+(id)predicateForEventsWithEndInDateRangeFrom:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithIdentifierValue:(id)arg0 ;
+(id)predicateForEventsWithIntegerValue:(NSInteger)arg0 ;
+(id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)arg0 toBefore:(id)arg1 ;
+(id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithMinimumDuration:(CGFloat)arg0 ;
+(id)predicateForEventsWithMinumumDuration:(CGFloat)arg0 ;
+(id)predicateForEventsWithNoSource;
+(id)predicateForEventsWithNullSourceDeviceID;
+(id)predicateForEventsWithQuantityValue:(id)arg0 ;
+(id)predicateForEventsWithSourceDeviceIDs:(id)arg0 ;
+(id)predicateForEventsWithSourceGroupIDs:(id)arg0 ;
+(id)predicateForEventsWithSourceID:(id)arg0 ;
+(id)predicateForEventsWithSourceID:(id)arg0 bundleID:(id)arg1 ;
+(id)predicateForEventsWithSourceID:(id)arg0 bundleID:(id)arg1 groupIDs:(id)arg2 ;
+(id)predicateForEventsWithSourceID:(id)arg0 bundleID:(id)arg1 itemIDs:(id)arg2 ;
+(id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithStartDateAfter:(id)arg0 ;
+(id)predicateForEventsWithStartDateOrCreationDateBefore:(id)arg0 ;
+(id)predicateForEventsWithStartInDateRangeFrom:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFromAfter:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg0 to:(id)arg1 ;
+(id)predicateForEventsWithStreamName:(id)arg0 ;
+(id)predicateForEventsWithStreamNames:(id)arg0 ;
+(id)predicateForEventsWithStringValue:(id)arg0 ;
+(id)predicateForEventsWithStringValueInValues:(id)arg0 ;
+(id)predicateForObjectWithUUID:(id)arg0 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 andDoubleValue:(CGFloat)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 andDoubleValueBetween:(CGFloat)arg1 andValue:(CGFloat)arg2 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 andIntegerValue:(NSInteger)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 andStringValue:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 andValue:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 inValues:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 likeStringValue:(id)arg1 ;
+(id)predicateForObjectsWithUUIDs:(id)arg0 ;
+(id)queryNotExecutableError;
+(id)startDateSortDescriptorAscending:(BOOL)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif