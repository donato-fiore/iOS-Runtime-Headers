// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBACKGROUNDJOBSYNDICATIONRESOURCEDOWNLOADWORKER_H
#define PLBACKGROUNDJOBSYNDICATIONRESOURCEDOWNLOADWORKER_H



#import "PLBackgroundJobSyndicationResourceSanitizationWorker.h"

@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker



+(NSInteger)syndicationWorkerPriority;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;


@end


#endif