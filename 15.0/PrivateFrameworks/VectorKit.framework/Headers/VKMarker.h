// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMARKER_H
#define VKMARKER_H

@class GEOFeatureStyleAttributes, NSString;

#import <Foundation/Foundation.h>


@interface VKMarker : NSObject {
    shared_ptr<md::Marker> _actualMarker;
    GEOFeatureStyleAttributes *_styleAttributes;
}


@property (readonly) *void actualMarker;
@property (readonly, nonatomic) NSUInteger featureID;
@property (readonly, nonatomic) int markerType; // ivar: _markerType
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) NSUInteger venueID;


+(id)markerWithFeatureMarker:(*void)arg0 ;
-(id)featureHandles;
-(id)initWithFeatureMarkerPtr:(*void)arg0 markerType:(int)arg1 ;
-(void)dealloc;


@end


#endif