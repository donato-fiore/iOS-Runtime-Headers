// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOSINGLETILESETMAPREGIONTILEKEYENUMERATOR_H
#define _GEOSINGLETILESETMAPREGIONTILEKEYENUMERATOR_H

@class NSArray, NSString;
@protocol GEOTileKeyEnumerator;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"

@interface _GEOSingleTileSetMapRegionTileKeyEnumerator : NSObject <GEOTileKeyEnumerator>

 {
    GEOMapRegion *_region;
    int _style;
    int _size;
    int _scale;
    NSArray *_zoomLevels;
    NSInteger _zoomMode;
    NSUInteger _currentZIndex;
    unsigned int _currentOffset;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)continueEnumeratingTileKeysWithBlock:(id)arg0 ;
-(id)initWithMapRegion:(id)arg0 tileSet:(id)arg1 zoomMode:(NSInteger)arg2 ;


@end


#endif