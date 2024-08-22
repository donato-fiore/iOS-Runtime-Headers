// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFACELANDMARKREGION3D_H
#define VNFACELANDMARKREGION3D_H



#import "VNFaceLandmarkRegion.h"

@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion {
    ? _points;
}


@property ? points;


+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 faceBoundingBox:(struct CGRect )arg1 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 faceBoundingBox:(struct CGRect )arg1 points:(*NSUInteger)arg2 pointCount;
-(id)pointAtIndex;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif