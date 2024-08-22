// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOBUILDINGFOOTPRINTFEATURE_H
#define GEOBUILDINGFOOTPRINTFEATURE_H


#import <Foundation/Foundation.h>

#import "GEOMultiSectionFeature.h"

@interface GEOBuildingFootprintFeature : NSObject {
    *void _buildingFootprintFeature;
    GEOMultiSectionFeature *_multiSectionFeature;
}




-(*void)get;
-(BOOL)hasLandmark;
-(BOOL)isForTransit;
-(NSUInteger)baseOffset;
-(NSUInteger)extrusionOffset;
-(id)feature;
-(id)init:(*void)arg0 withVectorTile:(id)arg1 ;


@end


#endif