// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERCLASSDATASOURCE_H
#define PUWALLPAPERCLASSDATASOURCE_H

@class NSMutableArray, NSString, NSPointerArray, PHFetchResult;
@protocol PHPhotoLibraryChangeObserver;

#import <Foundation/Foundation.h>


@interface PUWallpaperClassDataSource : NSObject <PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) NSMutableArray *contextDataSources; // ivar: _contextDataSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSPointerArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned short wallpaperSubtype; // ivar: _wallpaperSubtype


+(id)wallpaperSubtypeTitleFromSubtype:(unsigned short)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countInSection:(NSUInteger)arg0 ;
-(NSUInteger)sectionCount;
-(id)indexPathForSuggestionUUID:(id)arg0 ;
-(id)initWithWallpaperSubtype:(unsigned short)arg0 ;
-(id)objectAtIndexPath:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(void)_setupContextDataSourcesIfNeeded;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif