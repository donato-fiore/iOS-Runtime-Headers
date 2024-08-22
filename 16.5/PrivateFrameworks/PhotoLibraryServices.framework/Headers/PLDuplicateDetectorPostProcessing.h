// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEDETECTORPOSTPROCESSING_H
#define PLDUPLICATEDETECTORPOSTPROCESSING_H


#import <Foundation/Foundation.h>


@interface PLDuplicateDetectorPostProcessing : NSObject



+(id)_postProcessSortOIDs:(id)arg0 oidMetadataMap:(id)arg1 sortKey:(id)arg2 secondarySortKey:(id)arg3 ;
+(id)sharedLibraryLivePhotoPostProcessDuplicateSubGroupSplitDecisionBlockWithMetadataMap:(SEL)arg0 ;
+(id)sharedLibraryRawPlusJPEGPostProcessDuplicateSubGroupSplitDecisionBlockWithMetadataMap:(SEL)arg0 ;
+(void)postProcessDuplicateSubGroupWithResult:(id)arg0 metadataMap:(id)arg1 metadataKey:(id)arg2 secondarySortKey:(id)arg3 subGroupSplitDecisionBlock:(id)arg4 ;


@end


#endif