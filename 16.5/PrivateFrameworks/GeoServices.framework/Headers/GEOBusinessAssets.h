// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOBUSINESSASSETS_H
#define GEOBUSINESSASSETS_H

@class NSArray;
@protocol GEOMapItemPhoto;

#import <Foundation/Foundation.h>

#import "GEOPDBusinessAssets.h"

@interface GEOBusinessAssets : NSObject {
    GEOPDBusinessAssets *_businessAssets;
}


@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *coverPhoto;
@property (readonly, nonatomic) NSArray *coverPhotos; // ivar: _coverPhotos
@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *croppedPhoto;
@property (readonly, nonatomic) NSArray *croppedPhotos; // ivar: _croppedPhotos


+(id)businessAssetsWithPlaceData:(id)arg0 ;
-(id)initWithBusinessAssets:(id)arg0 ;


@end


#endif