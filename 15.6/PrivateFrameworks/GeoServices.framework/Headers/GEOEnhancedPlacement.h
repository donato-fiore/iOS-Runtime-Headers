// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOENHANCEDPLACEMENT_H
#define GEOENHANCEDPLACEMENT_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface GEOEnhancedPlacement : NSObject

@property (readonly, nonatomic) NSNumber *buildingFaceAzimuth; // ivar: _buildingFaceAzimuth
@property (readonly, nonatomic) NSNumber *buildingHeightInMeters; // ivar: _buildingHeightInMeters
@property (readonly, nonatomic) NSArray *buildingIds; // ivar: _buildingIds
@property (readonly, nonatomic) NSNumber *elevationInMeters; // ivar: _elevationInMeters


-(id)initWithBuildingIds:(id)arg0 elevationInMeters:(id)arg1 buildingHeightInMeters:(id)arg2 buildingFaceAzimuth:(id)arg3 ;
-(id)initWithGEOPDEnhancedPlacement:(id)arg0 ;


@end


#endif