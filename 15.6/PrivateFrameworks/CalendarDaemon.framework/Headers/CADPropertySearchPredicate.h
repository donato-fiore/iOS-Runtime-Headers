// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADPROPERTYSEARCHPREDICATE_H
#define CADPROPERTYSEARCHPREDICATE_H

@class NSArray, NSString, CADObjectID;
@protocol EKCustomPropertiesLoading;


#import "CADPredicate.h"

@interface CADPropertySearchPredicate : CADPredicate <EKCustomPropertiesLoading>

 {
    NSArray *_propertiesToLoad;
}


@property (readonly, nonatomic) NSArray *calendarRowIDs; // ivar: _calendarRowIDs
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CADObjectID *sourceID; // ivar: _sourceID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)shouldLoadDefaultProperties;
-(BOOL)validate;
-(id)buildWhereClauseWithValues:(id)arg0 andTypes:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg0 withValues:(id)arg1 andTypes:(id)arg2 ;
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