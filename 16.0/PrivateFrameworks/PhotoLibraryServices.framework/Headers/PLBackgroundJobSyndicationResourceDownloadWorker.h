// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBSYNDICATIONRESOURCEDOWNLOADWORKER_H
#define PLBACKGROUNDJOBSYNDICATIONRESOURCEDOWNLOADWORKER_H



#import "PLBackgroundJobSyndicationResourceSanitizationWorker.h"

@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker



+(id)syndicationWorkerCriteria;
-(BOOL)isNetworkAccessAllowed;
-(NSUInteger)batchSize;
-(id)resourceIDsForPrefetchWithLibrary:(id)arg0 ;


@end


#endif