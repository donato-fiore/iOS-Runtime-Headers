// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVPRINCIPALPROPERTYSEARCHTASK_H
#define CALDAVPRINCIPALPROPERTYSEARCHTASK_H

@class CoreDAVPrincipalPropertySearchTask, NSSet;


#import "CalDAVPrincipalSearchPropertySet.h"

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask

@property (retain, nonatomic) id *searchContext; // ivar: _searchContext
@property (retain, nonatomic) NSSet *searchStrings; // ivar: _searchStrings
@property (retain, nonatomic) NSSet *searchTypes; // ivar: _searchTypes
@property (retain, nonatomic) CalDAVPrincipalSearchPropertySet *serverSupportSet; // ivar: _serverSupportSet


-(id)extraAttributes;
-(id)initWithSearchStrings:(id)arg0 searchTypes:(id)arg1 serverSupportSet:(id)arg2 atURL:(id)arg3 ;
-(id)searchItems;


@end


#endif