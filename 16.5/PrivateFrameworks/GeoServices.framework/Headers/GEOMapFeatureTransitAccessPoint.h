// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATURETRANSITACCESSPOINT_H
#define GEOMAPFEATURETRANSITACCESSPOINT_H


#import <Foundation/Foundation.h>


@interface GEOMapFeatureTransitAccessPoint : NSObject {
    *void _feature;
    ? _retainedTile;
}


@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic) *void feature;
@property (readonly, nonatomic) BOOL isEntrance;
@property (readonly, nonatomic) BOOL isExit;
@property (readonly, nonatomic) CGFloat radiusMeters;


-(id)initWithFeature:(*void)arg0 ;
-(void)dealloc;


@end


#endif