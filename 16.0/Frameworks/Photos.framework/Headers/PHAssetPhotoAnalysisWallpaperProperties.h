// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETPHOTOANALYSISWALLPAPERPROPERTIES_H
#define PHASSETPHOTOANALYSISWALLPAPERPROPERTIES_H

@class NSData, NSDate;


#import "PHAssetPropertySet.h"

@interface PHAssetPhotoAnalysisWallpaperProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *wallpaperPropertiesData; // ivar: _wallpaperPropertiesData
@property (readonly, nonatomic) NSDate *wallpaperPropertiesTimestamp; // ivar: _wallpaperPropertiesTimestamp
@property (readonly, nonatomic) NSUInteger wallpaperPropertiesVersion; // ivar: _wallpaperPropertiesVersion


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif