// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVGETACCOUNTPROPERTIESTASKGROUP_H
#define CALDAVGETACCOUNTPROPERTIESTASKGROUP_H

@class CoreDAVGetAccountPropertiesTaskGroup, NSSet, NSURL;


#import "CalDAVServerVersion.h"

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *calendarHomes; // ivar: _calendarHomes
@property (retain, nonatomic) NSURL *delegatePrincipalURL; // ivar: _delegatePrincipalURL
@property (readonly, nonatomic) NSURL *dropboxURL; // ivar: _dropboxURL
@property (retain, nonatomic) NSURL *homeURL; // ivar: _homeURL
@property (readonly, nonatomic) NSURL *inboxURL; // ivar: _inboxURL
@property (readonly, nonatomic) NSURL *notificationURL; // ivar: _notificationURL
@property (readonly, nonatomic) NSURL *outboxURL; // ivar: _outboxURL
@property (readonly, nonatomic) NSSet *preferredUserAddresses; // ivar: _preferredUserAddresses
@property (readonly, nonatomic) CalDAVServerVersion *serverVersion; // ivar: _serverVersion
@property (readonly, nonatomic) BOOL supportsCalendarUserSearch; // ivar: _supportsCalendarUserSearch
@property (readonly, nonatomic) NSURL *updatedPrincipalURL; // ivar: _updatedPrincipalURL


-(BOOL)forceOptionsRequest;
-(id)_copyAccountPropertiesPropFindElements;
-(id)description;
-(id)homeSet;
-(id)userAddresses;
-(void)_setPropertiesFromParsedResponses:(id)arg0 ;
-(void)processPrincipalHeaders:(id)arg0 ;
-(void)startTaskGroup;


@end


#endif