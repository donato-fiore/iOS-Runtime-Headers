// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKMAPITEMPLACEATTRIBUTION_H
#define _MKMAPITEMPLACEATTRIBUTION_H

@class MKMapItemAttribution, GEOMapItemPlaceAttribution, NSArray;



@interface _MKMapItemPlaceAttribution : MKMapItemAttribution {
    GEOMapItemPlaceAttribution *_geoPlaceAttribution;
}


@property (readonly, nonatomic) NSArray *checkInURLs;


-(id)initWithGEOMapItemAttribution:(id)arg0 ;


@end


#endif