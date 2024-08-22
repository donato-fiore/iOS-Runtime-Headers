// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACONTACTSSEARCHQUERY_H
#define DACONTACTSSEARCHQUERY_H

@class NSString;


#import "DASearchQuery.h"

@interface DAContactsSearchQuery : DASearchQuery

@property (nonatomic) BOOL calendarInitiated; // ivar: _calendarInitiated
@property (nonatomic) BOOL includePhotos; // ivar: _includePhotos
@property (copy, nonatomic) NSString *searchBase; // ivar: _searchBase
@property (copy, nonatomic) NSString *searchScope; // ivar: _searchScope


+(id)contactsSearchQueryWithSearchString:(id)arg0 searchBase:(id)arg1 searchScope:(id)arg2 consumer:(id)arg3 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 consumer:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 searchBase:(id)arg1 searchScope:(id)arg2 consumer:(id)arg3 ;


@end


#endif