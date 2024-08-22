// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVBULKUPLOADTASKGROUP_H
#define CALDAVBULKUPLOADTASKGROUP_H

@class CoreDAVBulkUploadTaskGroup;



@interface CalDAVBulkUploadTaskGroup : CoreDAVBulkUploadTaskGroup



-(Class)multiPutTaskClass;
-(id)initWithFolderURL:(id)arg0 checkCTag:(id)arg1 uuidsToAddActions:(id)arg2 hrefsToModDeleteActions:(id)arg3 context:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;


@end


#endif