// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVMERGEUPLOADTASKGROUP_H
#define CALDAVMERGEUPLOADTASKGROUP_H

@class CoreDAVTaskGroup;
@protocol CalDAVCalendar, CalDAVPrincipal;


#import "CalDAVBulkUploadTaskGroup.h"

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup

@property (retain, nonatomic) NSObject<CalDAVCalendar> *calendar; // ivar: _calendar
@property (retain, nonatomic) NSObject<CalDAVPrincipal> *principal; // ivar: _principal
@property (nonatomic) BOOL shouldTrySyncTokenForBulkUpload; // ivar: _shouldTrySyncTokenForBulkUpload
@property (retain, nonatomic) CalDAVBulkUploadTaskGroup *uploadTaskGroup; // ivar: _uploadTaskGroup


-(id)dataContentType;
-(id)initWithCalendar:(id)arg0 principal:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
-(void)_performBulkUpload;
-(void)_performRegularUpload;
-(void)cancelTaskGroup;
-(void)dealloc;
-(void)startTaskGroup;


@end


#endif