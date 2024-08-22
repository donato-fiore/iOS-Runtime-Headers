// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDGENERICINTERACTIONRANKER_H
#define _CDGENERICINTERACTIONRANKER_H

@class NSSet, NSString, NSDate, NSArray;
@protocol _CDInteractionRanking;

#import <Foundation/Foundation.h>


@interface _CDGenericInteractionRanker : NSObject <_CDInteractionRanking>



@property (retain) NSSet *allowedIdentifiers; // ivar: _allowedIdentifiers
@property (retain) NSSet *allowedPersonIdType; // ivar: _allowedPersonIdType
@property (retain) NSSet *allowedPersonIds; // ivar: _allowedPersonIds
@property CGFloat c; // ivar: _c
@property CGFloat contactNameKeywordMatchWeight; // ivar: _contactNameKeywordMatchWeight
@property (retain) NSString *contactPrefix; // ivar: _contactPrefix
@property CGFloat diffWeekPeriodWeight; // ivar: _diffWeekPeriodWeight
@property CGFloat keywordWeight; // ivar: _keywordWeight
@property CGFloat locationWeight; // ivar: _locationWeight
@property CGFloat outgoingWeight; // ivar: _outgoingWeight
@property (nonatomic) NSUInteger rankAggregationMethod; // ivar: _rankAggregationMethod
@property (retain) NSDate *referenceDate; // ivar: _referenceDate
@property (retain) NSSet *referenceKeywords; // ivar: _referenceKeywords
@property (retain) NSString *referenceLocationUUID; // ivar: _referenceLocationUUID
@property BOOL requireAllSeedContacts; // ivar: _requireAllSeedContacts
@property CGFloat sameWeekPeriodWeight; // ivar: _sameWeekPeriodWeight
@property (retain) NSArray *seedContacts; // ivar: _seedContacts
@property CGFloat socialWeight; // ivar: _socialWeight
@property CGFloat timeHalfLife; // ivar: _timeHalfLife
@property CGFloat timeOfDayHalfLife; // ivar: _timeOfDayHalfLife
@property CGFloat timeOfDayWeight; // ivar: _timeOfDayWeight
@property CGFloat timeOfWeekHalfLife; // ivar: _timeOfWeekHalfLife
@property CGFloat timeOfWeekWeight; // ivar: _timeOfWeekWeight
@property CGFloat timeWeight; // ivar: _timeWeight


+(BOOL)isDateInWeekend:(id)arg0 ;
-(BOOL)contactIsAllowed:(id)arg0 ;
-(CGFloat)rankContact:(id)arg0 ;
-(id)init;
-(id)rankInteraction:(id)arg0 ;


@end


#endif