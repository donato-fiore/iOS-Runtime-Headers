// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMAPITEMPHOTOSATTRIBUTION_H
#define _MKMAPITEMPHOTOSATTRIBUTION_H

@class MKMapItemAttribution, GEOMapItemPhotosAttribution, NSArray;



@interface _MKMapItemPhotosAttribution : MKMapItemAttribution {
    GEOMapItemPhotosAttribution *_geoPhotosAttribution;
}


@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) BOOL isBusinessOwned;
@property (readonly, nonatomic) BOOL requiresAttributionInPhotoViewerHeader;
@property (readonly, nonatomic) BOOL shouldAddPhotosLocally;
@property (readonly, nonatomic) BOOL shouldHandlePhotosLocally;
@property (readonly, nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) BOOL supportsReportingIssue;
@property (readonly, nonatomic, getter=isUserSubmitted) BOOL userSubmitted;


-(id)initWithGEOMapItemAttribution:(id)arg0 ;
-(id)urlsForPhotoWithIdentifier:(id)arg0 ;


@end


#endif