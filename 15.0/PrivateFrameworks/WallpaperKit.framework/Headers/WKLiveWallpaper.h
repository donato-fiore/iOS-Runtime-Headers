// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKLIVEWALLPAPER_H
#define WKLIVEWALLPAPER_H

@class NSURL, NSString;
@protocol WKFileBasedWallpaper;


#import "WKAbstractWallpaper.h"

@interface WKLiveWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper>



@property (readonly, nonatomic) NSUInteger backingType;
@property (copy, nonatomic) NSURL *fullsizeImageURL; // ivar: _fullsizeImageURL
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL
@property (readonly, nonatomic) NSUInteger type;
@property (copy, nonatomic) NSURL *videoAssetURL; // ivar: _videoAssetURL


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 thumbnailImageURL:(id)arg2 fullsizeImageURL:(id)arg3 videoAssetURL:(id)arg4 stillTimeInVideo:(CGFloat)arg5 ;


@end


#endif