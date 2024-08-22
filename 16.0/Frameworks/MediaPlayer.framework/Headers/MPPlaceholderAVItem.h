// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPLACEHOLDERAVITEM_H
#define MPPLACEHOLDERAVITEM_H

@class NSString;


#import "MPAVItem.h"

@interface MPPlaceholderAVItem : MPAVItem

@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (copy, nonatomic) id *artworkCatalogBlock; // ivar: _artworkCatalogBlock
@property (nonatomic) CGFloat durationFromExternalMetadata; // ivar: _durationFromExternalMetadata
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // ivar: _explicitTrack
@property (nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled; // ivar: _likeStateEnabled
@property (retain, nonatomic) NSString *mainTitle; // ivar: _mainTitle
@property (nonatomic) BOOL supportsLikedState; // ivar: _supportsLikedState
@property (nonatomic, getter=isTailPlaceholder) BOOL tailPlaceholder; // ivar: _tailPlaceholder


+(BOOL)isPlaceholder;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg0 ;
-(BOOL)supportsRateChange;
-(id)description;
-(id)init;
-(void)loadAssetAndPlayerItem;


@end


#endif