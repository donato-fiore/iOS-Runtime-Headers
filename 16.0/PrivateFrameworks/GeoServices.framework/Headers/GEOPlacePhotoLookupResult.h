// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEPHOTOLOOKUPRESULT_H
#define GEOPLACEPHOTOLOOKUPRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOMapItemIdentifier.h"

@interface GEOPlacePhotoLookupResult : NSObject {
    _NSRange _originalRange;
}


@property (readonly, nonatomic) GEOMapItemIdentifier *mapItemIdentifier; // ivar: _mapItemIdentifier
@property (readonly, nonatomic) NSArray *photos; // ivar: _photos
@property (readonly, nonatomic) NSUInteger totalPhotoCount; // ivar: _totalPhotoCount


+(void)buildLookupResultForPlaceWithPhotoCategories:(id)arg0 mapItemIdentifier:(id)arg1 originalRange:(struct _NSRange )arg2 completion:(id)arg3 ;
+(void)buildVendorLookupResultForPlaceWithCaptionedPhotos:(id)arg0 mapItemIdentifier:(id)arg1 originalRange:(struct _NSRange )arg2 completion:(id)arg3 ;
-(id)initWithPhotos:(id)arg0 totalPhotoCount:(NSUInteger)arg1 mapItemItemIdentifier:(id)arg2 originalRange:(struct _NSRange )arg3 ;


@end


#endif