// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPACCESSBUILDINGSECTION_H
#define GEOMAPACCESSBUILDINGSECTION_H

@class NSString;
@protocol GEOMapBuildingSection;

#import <Foundation/Foundation.h>


@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection>

 {
    NSUInteger _sectionIndex;
}


@property (readonly, nonatomic) CGFloat baseHeight; // ivar: _baseHeight
@property (readonly, nonatomic) ? centerCoordinate; // ivar: _centerCoordinate
@property (readonly, nonatomic) NSUInteger coordinateCount; // ivar: _coordinateCount
@property (readonly, nonatomic) *? coordinates; // ivar: _coordinates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly) Class superclass;


-(id)initWithFeature:(id)arg0 sectionIndex:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif