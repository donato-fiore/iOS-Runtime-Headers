// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKREMINDERPREDICATE_H
#define EKREMINDERPREDICATE_H

@class NSString, NSArray, NSDate;
@protocol EKDefaultPropertiesLoading;


#import "EKPredicate.h"

@interface EKReminderPredicate : EKPredicate <EKDefaultPropertiesLoading>



@property (nonatomic) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultPropertiesToLoad; // ivar: _defaultPropertiesToLoad
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *dueAfter; // ivar: _dueAfter
@property (retain, nonatomic) NSDate *dueBefore; // ivar: _dueBefore
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL limitToCompletedOrIncomplete; // ivar: _limitToCompletedOrIncomplete
@property (retain, nonatomic) NSString *listTitle; // ivar: _listTitle
@property (nonatomic) NSUInteger maxResults; // ivar: _maxResults
@property (retain, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (nonatomic) BOOL shouldLoadDefaultProperties; // ivar: _shouldLoadDefaultProperties
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompletionDateAsAlternate; // ivar: _useCompletionDateAsAlternate
@property (nonatomic) BOOL useDueDateAsCompletionDate; // ivar: _useDueDateAsCompletionDate


+(BOOL)supportsSecureCoding;
+(id)predicateWithCalendars:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCalendars:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif