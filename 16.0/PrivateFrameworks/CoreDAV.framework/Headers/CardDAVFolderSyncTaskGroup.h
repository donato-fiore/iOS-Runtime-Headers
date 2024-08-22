// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARDDAVFOLDERSYNCTASKGROUP_H
#define CARDDAVFOLDERSYNCTASKGROUP_H



#import "CoreDAVContainerSyncTaskGroup.h"

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup

@property (nonatomic) BOOL isInitialSync; // ivar: _isInitialSync


-(Class)bulkChangeTaskClass;
-(id)copyGetTaskWithURL:(id)arg0 ;
-(id)copyMultiGetTaskWithURLs:(id)arg0 ;
-(id)dataContentType;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 context:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificDataItemClass:(Class)arg7 ;
-(id)initWithFolderURL:(id)arg0 previousCTag:(id)arg1 previousSyncToken:(id)arg2 actions:(id)arg3 syncItemOrder:(BOOL)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8 ;


@end


#endif