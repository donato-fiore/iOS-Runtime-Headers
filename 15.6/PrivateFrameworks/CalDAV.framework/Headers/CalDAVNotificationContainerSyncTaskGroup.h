// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVNOTIFICATIONCONTAINERSYNCTASKGROUP_H
#define CALDAVNOTIFICATIONCONTAINERSYNCTASKGROUP_H

@class CoreDAVContainerSyncTaskGroup, NSSet;



@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup

@property (retain, nonatomic) NSSet *notificationTypeNamesToFetch; // ivar: _notificationTypeNamesToFetch


-(BOOL)shouldFetchResourceWithEtag:(id)arg0 propertiesToValues:(id)arg1 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetTaskWithURL:(id)arg0 ;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;


@end


#endif