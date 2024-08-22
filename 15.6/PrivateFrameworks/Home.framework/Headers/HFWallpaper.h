// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFWALLPAPER_H
#define HFWALLPAPER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HFCroppedWallpaperInfo.h"

@interface HFWallpaper : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (copy, nonatomic) HFCroppedWallpaperInfo *cropInfo; // ivar: _cropInfo
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)customWallpaperWithAssetIdentifier:(id)arg0 ;
+(struct CGSize )contentSizeForWallpaper;
+(struct CGSize )size;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 assetIdentifier:(id)arg1 cropInfo:(id)arg2 ;
-(id)sliceIdentifierForVariant:(NSInteger)arg0 ;
-(id)wallpaperIdentifier;


@end


#endif