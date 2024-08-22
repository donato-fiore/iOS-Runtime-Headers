// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADPROPERTYSEARCHPREDICATE_H
#define CADPROPERTYSEARCHPREDICATE_H

@class NSDictionary, NSArray, CADObjectID;


#import "CADPredicate.h"

@interface CADPropertySearchPredicate : CADPredicate {
    NSDictionary *_calendarRowIDsByDatabaseID;
}


@property (readonly, nonatomic) NSArray *calendarIDs; // ivar: _calendarIDs
@property (readonly, nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, nonatomic) CADObjectID *sourceID; // ivar: _sourceID


+(BOOL)supportsSecureCoding;
-(?)copyMatchingItemsWithDatabase;
-(BOOL)validate;
-(id)buildWhereClauseWithValues:(id)arg0 andTypes:(id)arg1 forDatabase:(int)arg2 ;
-(id)calendarRowIDsByDatabaseID;
-(id)databasesToQuery;
-(id)defaultPropertiesToLoad;
-(id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg0 withValues:(id)arg1 andTypes:(id)arg2 forDatabase:(int)arg3 ;
-(id)extendWhereClauseWithEntityTypeLimitation:(id)arg0 withValues:(id)arg1 andTypes:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityType:(int)arg0 filters:(id)arg1 calendar:(id)arg2 ;
-(id)initWithEntityType:(int)arg0 filters:(id)arg1 calendars:(id)arg2 ;
-(id)initWithEntityType:(int)arg0 filters:(id)arg1 calendars:(id)arg2 source:(id)arg3 ;
-(id)initWithEntityType:(int)arg0 filters:(id)arg1 source:(id)arg2 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif