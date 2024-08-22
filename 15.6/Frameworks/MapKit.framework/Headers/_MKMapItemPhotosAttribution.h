// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKMAPITEMPHOTOSATTRIBUTION_H
#define _MKMAPITEMPHOTOSATTRIBUTION_H

@class MKMapItemAttribution, GEOMapItemPhotosAttribution, NSArray;



@interface _MKMapItemPhotosAttribution : MKMapItemAttribution {
    GEOMapItemPhotosAttribution *_geoPhotosAttribution;
}


@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) BOOL shouldAddPhotosLocally;
@property (readonly, nonatomic) BOOL shouldHandlePhotosLocally;
@property (readonly, nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) BOOL supportsReportingIssue;
@property (readonly, nonatomic, getter=isUserSubmitted) BOOL userSubmitted; // ivar: _userSubmitted


-(id)initWithGEOMapItemAttribution:(id)arg0 ;
-(id)urlsForPhotoWithIdentifier:(id)arg0 ;


@end


#endif