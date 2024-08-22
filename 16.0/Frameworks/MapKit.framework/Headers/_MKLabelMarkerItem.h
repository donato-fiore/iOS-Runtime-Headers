// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKLABELMARKERITEM_H
#define _MKLABELMARKERITEM_H

@class GEOBaseMapItem, VKLabelMarker;



@interface _MKLabelMarkerItem : GEOBaseMapItem {
    VKLabelMarker *_labelMarker;
}




+(id)labelMarkerItemWithLabelMarker:(id)arg0 ;
-(BOOL)_hasMUID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasVenueFeatureType;
-(BOOL)_isTransitDisplayFeature;
-(BOOL)isValid;
-(NSUInteger)_muid;
-(id)_identifier;
-(id)_labelMarker;
-(id)_place;
-(id)_styleAttributes;
-(id)_venueInfo;
-(id)initWithLabelMarker:(id)arg0 ;
-(id)name;
-(int)_venueFeatureType;
-(int)referenceFrame;
-(struct ? )coordinate;


@end


#endif