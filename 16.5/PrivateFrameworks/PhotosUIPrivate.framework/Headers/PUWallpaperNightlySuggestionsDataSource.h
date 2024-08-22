// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERNIGHTLYSUGGESTIONSDATASOURCE_H
#define PUWALLPAPERNIGHTLYSUGGESTIONSDATASOURCE_H

@class PHPhotoLibrary, NSDateFormatter, PHFetchResult, NSPointerArray, NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;


#import "PUWallpaperClassDataSource.h"

@interface PUWallpaperNightlySuggestionsDataSource : PUWallpaperClassDataSource {
    PHPhotoLibrary *_photoLibrary;
    NSDateFormatter *_dateFormatter;
    PHFetchResult *_fetchResult;
    NSPointerArray *_delegates;
}


@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSObject<PUWallpaperNightlySuggestionsPosterConfiguration> *posterConfiguration; // ivar: _posterConfiguration


-(id)_dictionaryWithPosterConfiguration:(id)arg0 ;
-(id)delegates;
-(id)fetchResult;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)objectAtIndexPath:(id)arg0 ;
-(id)title;
-(unsigned short)wallpaperSubtype;
-(void)refresh;


@end


#endif