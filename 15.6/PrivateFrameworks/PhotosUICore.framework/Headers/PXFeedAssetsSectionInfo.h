// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDASSETSSECTIONINFO_H
#define PXFEEDASSETSSECTIONINFO_H



#import "PXFeedSectionInfo.h"

@interface PXFeedAssetsSectionInfo : PXFeedSectionInfo



-(BOOL)areAllAssetsLiked;
-(BOOL)containsAsset:(id)arg0 ;
-(BOOL)hasPlayableAssetForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)isMine;
-(NSInteger)indexOfFirstItemFromLastBatch;
-(NSInteger)indexOfItemWithAsset:(id)arg0 ;
-(NSInteger)sectionType;
-(NSInteger)typeForItemAtIndex:(NSInteger)arg0 ;
-(NSUInteger)assetsCount;
-(id)assetForItemAtIndex:(NSInteger)arg0 ;
-(id)assets;
-(id)batchIDForItemAtIndex:(NSInteger)arg0 ;
-(id)captionForItemAtIndex:(NSInteger)arg0 ;
-(id)cloudFeedAssetsEntry;
-(id)commentForItemAtIndex:(NSInteger)arg0 ;
-(id)commentsForItemAtIndex:(NSInteger)arg0 ;
-(id)countsByAssetDisplayType;
-(id)likesForItemAtIndex:(NSInteger)arg0 ;
-(void)getPhotoCount:(*NSUInteger)arg0 videoCount:(*NSUInteger)arg1 ;
-(void)updateFromCloudFeedEntry;


@end


#endif