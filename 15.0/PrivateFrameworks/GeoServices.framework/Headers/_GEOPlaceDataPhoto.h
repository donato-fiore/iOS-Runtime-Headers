// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOPLACEDATAPHOTO_H
#define _GEOPLACEDATAPHOTO_H

@class NSString, NSDate, NSURL;
@protocol GEOMapItemPhoto, GEOPhotoInfoSource;

#import <Foundation/Foundation.h>

#import "GEOPDPhoto.h"
#import "GEOPDCaptionedPhoto.h"
#import "GEOMapItemPhotosAttribution.h"

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto>

 {
    GEOPDPhoto *_photo;
    GEOPDCaptionedPhoto *_captionedPhoto;
    id<GEOPhotoInfoSource> *_photoInfoSource;
    GEOMapItemPhotosAttribution *_attribution;
}


@property (readonly, nonatomic) GEOMapItemPhotosAttribution *attribution;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *backgroundJoeColor;
@property (readonly, nonatomic) BOOL businessProvided;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displayFullScreenPhotoGallery;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL highQuality;
@property (readonly, nonatomic) BOOL isBackgroundJoeColorCurated;
@property (readonly, nonatomic) NSString *licenseDescription;
@property (readonly, nonatomic) NSURL *licenseURL;
@property (readonly, nonatomic) CGFloat sizeRatio;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) BOOL useGallery;


-(id)bestPhotoForFrameSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 options:(id)arg2 ;
-(id)bestPhotoForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)bestPhotoForSize:(struct CGSize )arg0 options:(id)arg1 ;
-(id)initWithCaptionedPhoto:(id)arg0 ;
-(id)initWithCaptionedPhoto:(id)arg0 attribution:(id)arg1 ;
-(id)initWithPhoto:(id)arg0 ;
-(id)initWithPhoto:(id)arg0 attribution:(id)arg1 ;
-(id)largestPhoto;


@end


#endif