// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMAPITEMPHOTO_H
#define MKMAPITEMPHOTO_H

@class NSURL, NSString, NSArray;
@protocol GEOMapItemPhoto;

#import <Foundation/Foundation.h>

#import "_MKMapItemPhotosAttribution.h"

@interface MKMapItemPhoto : NSObject

@property (readonly, nonatomic) _MKMapItemPhotosAttribution *attribution; // ivar: _attribution
@property (readonly, nonatomic) BOOL displayFullScreenPhotoGallery;
@property (readonly, nonatomic) NSInteger format;
@property (readonly, nonatomic) NSObject<GEOMapItemPhoto> *geoMapItemPhoto; // ivar: _geoMapItemPhoto
@property (readonly, nonatomic) NSURL *largestPhotoURL;
@property (readonly, nonatomic) NSString *license;
@property (readonly, nonatomic) NSString *photoID;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSArray *subtitleComponents; // ivar: _subtitleComponents
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) BOOL useGallery;


-(id)initWithGeoMapItemPhoto:(id)arg0 ;
-(id)initWithGeoMapItemPhoto:(id)arg0 fallbackTitle:(id)arg1 ;
-(id)initWithGeoMapItemPhoto:(id)arg0 title:(id)arg1 subtitleComponents:(id)arg2 ;
-(id)initWithPictureItem:(id)arg0 ;
-(id)urlForBestPhotoForSize:(struct CGSize )arg0 ;


@end


#endif