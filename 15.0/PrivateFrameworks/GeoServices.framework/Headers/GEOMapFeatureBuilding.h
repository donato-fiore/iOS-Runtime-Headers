// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPFEATUREBUILDING_H
#define GEOMAPFEATUREBUILDING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOBuildingFootprintFeature.h"

@interface GEOMapFeatureBuilding : NSObject {
    GEOBuildingFootprintFeature *_feature;
}


@property (readonly, nonatomic) NSArray *sections; // ivar: _sections


-(id)initWithFeature:(id)arg0 ;
-(void)dealloc;


@end


#endif