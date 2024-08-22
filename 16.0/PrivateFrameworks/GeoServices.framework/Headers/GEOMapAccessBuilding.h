// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPACCESSBUILDING_H
#define GEOMAPACCESSBUILDING_H

@class NSString, NSArray;
@protocol GEOMapBuilding;

#import <Foundation/Foundation.h>

#import "GEOBuildingFootprintFeature.h"

@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding>

 {
    GEOBuildingFootprintFeature *_buildingFeature;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(id)initWithBuildingFeature:(id)arg0 ;
-(void)dealloc;


@end


#endif