// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMEMORYFEEDCONFIGURATION_H
#define PXSTORYMEMORYFEEDCONFIGURATION_H

@class PHPhotoLibrary;


#import "PXStoryFeedConfiguration.h"

@interface PXStoryMemoryFeedConfiguration : PXStoryFeedConfiguration

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(BOOL)_shouldEmbedContentLayoutForLayoutKind:(NSInteger)arg0 ;
-(id)_defaultActionPerformer;
-(id)_defaultItemLayoutFactory;
-(id)_defaultSpecManagerWithLayoutKind:(NSInteger)arg0 extendedTraitCollection:(id)arg1 ;
-(id)_photoKitMediaProviderWithPhotoLibrary:(id)arg0 ;
-(id)_syntheticItemLayoutFactory;
-(id)copyForFullFeed;
-(id)copyWithLayoutKind:(NSInteger)arg0 ;
-(id)fullFeedViewController;
// -(id)initWithDataSourceManagerPromise:(id)arg0 specManagerPromise:(unk)arg1 itemLayoutFactory:(id)arg2 layoutKind:(unk)arg3  ;
// -(id)initWithDataSourceManagerPromise:(id)arg0 specManagerPromise:(unk)arg1 itemLayoutFactory:(id)arg2 layoutKind:(unk)arg3 photoLibrary:(id)arg4  ;
-(id)initWithMemoriesFeedDataSourceManager:(id)arg0 layoutKind:(NSInteger)arg1 ;
-(id)initWithMemoriesInPhotoLibrary:(id)arg0 layoutKind:(NSInteger)arg1 ;
-(id)initWithMemoryForYouDataSourceManager:(id)arg0 layoutKind:(NSInteger)arg1 ;
-(id)initWithSyntheticSectionCount:(NSInteger)arg0 numberOfItemsPerSection:(NSInteger)arg1 layoutKind:(NSInteger)arg2 ;
-(id)objectReferenceForDestination:(id)arg0 ;
-(id)viewControllerTitle;
-(void)handleContentSeen;


@end


#endif