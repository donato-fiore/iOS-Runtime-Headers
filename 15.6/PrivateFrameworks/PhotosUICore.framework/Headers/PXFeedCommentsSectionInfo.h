// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDCOMMENTSSECTIONINFO_H
#define PXFEEDCOMMENTSSECTIONINFO_H



#import "PXFeedSectionInfo.h"

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo

@property (nonatomic, setter=_setHasLikes:) BOOL _hasLikes; // ivar: __hasLikes


-(BOOL)containsAsset:(id)arg0 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)isMine;
-(NSInteger)indexOfItemWithAsset:(id)arg0 ;
-(NSInteger)indexOfItemWithComment:(id)arg0 ;
-(NSInteger)sectionType;
-(NSInteger)typeForItemAtIndex:(NSInteger)arg0 ;
-(NSUInteger)assetsCount;
-(id)assetForItemAtIndex:(NSInteger)arg0 ;
-(id)assets;
-(id)assetsForItemAtIndex:(NSInteger)arg0 maximumCount:(NSInteger)arg1 ;
-(id)cloudFeedCommentsEntry;
-(id)commentForItemAtIndex:(NSInteger)arg0 ;
-(id)commentTextForItemAtIndex:(NSInteger)arg0 ;
-(id)likesForItemAtIndex:(NSInteger)arg0 ;
-(void)getCommentCount:(*NSUInteger)arg0 likeCount:(*NSUInteger)arg1 ;
-(void)updateFromCloudFeedEntry;


@end


#endif