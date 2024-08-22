// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNASNAPSHOTREPORTER_H
#define ICNASNAPSHOTREPORTER_H

@class NSManagedObjectContext;
@protocol ICLegacyContext;


#import "ICNAEventReporter.h"
#import "ICNAHistogramManager.h"

@interface ICNASnapshotReporter : ICNAEventReporter

@property (retain, nonatomic) ICNAHistogramManager *accountHistogramManager; // ivar: _accountHistogramManager
@property NSInteger contextHolderCount; // ivar: _contextHolderCount
@property (retain, nonatomic) NSObject<ICLegacyContext> *htmlContext; // ivar: _htmlContext
@property BOOL isPerformingSnapshot; // ivar: _isPerformingSnapshot
@property (retain, nonatomic) NSManagedObjectContext *modernContext; // ivar: _modernContext


+(id)sharedReporter;
-(BOOL)shouldRunSnapshotManually;
-(BOOL)shouldScheduleSnapshot;
-(BOOL)shouldSnapshot;
-(CGFloat)timeStampOfDate:(id)arg0 ;
-(NSUInteger)pageCountForDocScanAttachment:(id)arg0 ;
-(id)accountPurposeForHTMLAccount;
-(id)accountPurposeForModernAccount:(id)arg0 ;
-(id)deviceSnapshotSummaryForDataType:(Class)arg0 ;
-(id)drawingSnapshotItemDataForDrawingAttachment:(id)arg0 ;
-(id)lastSnapshotRunningTimeStamp;
-(id)lastSnapshotScheduleTimeStamp;
-(id)snapshotItemDataForHTMLAccount:(id)arg0 ;
-(id)snapshotItemDataForModernAccount:(id)arg0 ;
-(id)sortedFoldersForAccount:(id)arg0 ;
-(id)tableSnapshotItemDataForTableAttachment:(id)arg0 ;
-(id)userSnapshotSummaryForDataType:(Class)arg0 ;
-(void)checkIfSnapshotNotFiredForALongTime;
-(void)performBlockForHTMLManagedObjectContext:(id)arg0 ;
-(void)performBlockForModernManagedObjectContext:(id)arg0 ;
-(void)reallyPerformSnapshotAndFlushWithCompletionHandler:(id)arg0 ;
-(void)scheduleSnapshotIfNecessary;
-(void)setupContextsIfNecessary;
-(void)snapshotAttachment:(id)arg0 reportedDataToNote:(id)arg1 reportedDataToAccount:(id)arg2 ;
-(void)snapshotDevice;
-(void)snapshotHTMLAccount:(id)arg0 reportedDataToDevice:(id)arg1 reportedDataFromFolderToDevice:(id)arg2 reportedDataFromNoteToDevice:(id)arg3 ;
-(void)snapshotHTMLFolder:(id)arg0 reportedDataToAccount:(id)arg1 reportedDataToDevice:(id)arg2 noteReportToAccount:(id)arg3 reportedDataFromNoteToDevice:(id)arg4 ;
-(void)snapshotHTMLNote:(id)arg0 reportedDataToAccount:(id)arg1 reportedDataToDevice:(id)arg2 ;
-(void)snapshotModernAccount:(id)arg0 reportedDataToDevice:(id)arg1 reportedDataFromFolderToDevice:(id)arg2 reportedDataFromNoteToDevice:(id)arg3 ;
-(void)snapshotModernFolder:(id)arg0 reportedDataToParentFolder:(id)arg1 reportedDataToAccount:(id)arg2 reportedDataToDevice:(id)arg3 reportedDataFromNotesToAccount:(id)arg4 reportedDataFromAttachmentToAccount:(id)arg5 reportedDataFromNoteToDevice:(id)arg6 ;
-(void)snapshotModernNote:(id)arg0 reportedDataToAccount:(id)arg1 reportToDevice:(id)arg2 reportedDataFromAttachmentToAccount:(id)arg3 ;
-(void)submitMiniSnapshot;
-(void)submitSnapshotScheduleEventWithResult:(NSInteger)arg0 error:(id)arg1 lastScheduledTime:(id)arg2 ;
-(void)tearDownContextsIfNecessary;


@end


#endif