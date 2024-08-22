// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARFACETRACKINGTECHNIQUE_H
#define ARFACETRACKINGTECHNIQUE_H

@class NSUUID;


#import "ARImageBasedTechnique.h"

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {
    NSUUID *_singleUserAnchorIdentifier;
}


@property BOOL isFaceTracked; // ivar: _isFaceTracked
@property (readonly, nonatomic) NSInteger maximumNumberOfTrackedFaces; // ivar: _maximumNumberOfTrackedFaces


+(BOOL)isSupported;
+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)init;
-(id)initWithMaximumNumberOfTrackedFaces:(NSInteger)arg0 ;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;


@end


#endif