// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPLACEHOLDERAVITEM_H
#define MPPLACEHOLDERAVITEM_H

@class NSString;
@protocol NSCopying;


#import "MPAVItem.h"

@interface MPPlaceholderAVItem : MPAVItem <NSCopying>



@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (copy, nonatomic) id *artworkCatalogBlock; // ivar: _artworkCatalogBlock
@property (nonatomic) CGFloat durationFromExternalMetadata; // ivar: _durationFromExternalMetadata
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // ivar: _explicitTrack
@property (nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled; // ivar: _likeStateEnabled
@property (retain, nonatomic) NSString *mainTitle; // ivar: _mainTitle
@property (nonatomic) NSInteger storeItemInt64ID; // ivar: _storeItemInt64ID
@property (nonatomic) BOOL supportsLikedState; // ivar: _supportsLikedState


+(BOOL)isPlaceholder;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg0 ;
-(BOOL)supportsRateChange;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)loadAssetAndPlayerItem;


@end


#endif