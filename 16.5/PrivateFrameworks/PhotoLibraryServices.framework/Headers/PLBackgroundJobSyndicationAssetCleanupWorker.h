// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBSYNDICATIONASSETCLEANUPWORKER_H
#define PLBACKGROUNDJOBSYNDICATIONASSETCLEANUPWORKER_H



#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobSyndicationAssetCleanupWorker : PLBackgroundJobWorker



+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
-(BOOL)isInterruptible;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif