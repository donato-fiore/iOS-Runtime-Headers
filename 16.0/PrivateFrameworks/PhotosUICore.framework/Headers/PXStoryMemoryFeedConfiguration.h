// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMEMORYFEEDCONFIGURATION_H
#define PXSTORYMEMORYFEEDCONFIGURATION_H

@class PHPhotoLibrary;


#import "PXFeedConfiguration.h"

@interface PXStoryMemoryFeedConfiguration : PXFeedConfiguration

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(id)_photoKitMediaProviderWithPhotoLibrary:(id)arg0 ;
+(void)_handleContentSeenForDataSource:(id)arg0 ;
-(BOOL)_shouldEmbedContentLayoutForLayoutKind:(NSInteger)arg0 ;
-(BOOL)allowsPopOnEmptyBehavior;
-(BOOL)wantsEmbeddedScrollView;
-(BOOL)wantsMultilineGadgetTitle;
-(NSInteger)horizontalGadgetStyle;
-(NSUInteger)gadgetAccessoryButtonType;
-(NSUInteger)gadgetType;
-(id)_defaultSpecManagerWithLayoutKind:(NSInteger)arg0 extendedTraitCollection:(id)arg1 ;
-(id)copyForFullFeed;
-(id)copyWithLayoutKind:(NSInteger)arg0 ;
-(id)createSeeAllViewController;
-(id)gadgetAccessoryButtonLocalizedTitle;
-(id)gadgetLocalizedTitle;
// -(id)initWithDataSourceManagerPromise:(id)arg0 layoutKind:(unk)arg1 photoLibrary:(NSInteger)arg2 viewControllerSetupBlock:(id)arg3  ;
-(id)initWithMemoriesInPhotoLibrary:(id)arg0 layoutKind:(NSInteger)arg1 viewControllerSetupBlock:(id)arg2 ;
-(id)initWithMemoryForYouDataSourceManager:(id)arg0 layoutKind:(NSInteger)arg1 ;
-(id)initWithSyntheticSectionCount:(NSInteger)arg0 numberOfItemsPerSection:(NSInteger)arg1 layoutKind:(NSInteger)arg2 ;
-(id)objectReferenceForDestination:(id)arg0 ;
-(id)viewControllerTitle;
-(void)handleContentSeen;


@end


#endif