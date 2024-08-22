// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARUSERSEARCHTASK_H
#define CALDAVCALENDARUSERSEARCHTASK_H

@class CoreDAVPropertyFindBaseTask, NSSet;



@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask

@property (nonatomic) BOOL findAttendees; // ivar: _findAttendees
@property BOOL findGroups; // ivar: _findGroups
@property (nonatomic) BOOL findLocations; // ivar: _findLocations
@property BOOL findResources; // ivar: _findResources
@property BOOL findUsers; // ivar: _findUsers
@property (nonatomic) NSUInteger resultLimit; // ivar: _resultLimit
@property (retain, nonatomic) NSSet *searchStrings; // ivar: _searchStrings
@property (nonatomic) NSInteger searchType; // ivar: _searchType


+(BOOL)tokensAreLegal:(id)arg0 ;
-(id)extraAttributes;
-(id)httpMethod;
-(id)initWithSearchStrings:(id)arg0 atURL:(id)arg1 ;
-(id)requestBody;
-(id)searchItems;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif