// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSPLINEGROUP_H
#define ARCOACHINGSPLINEGROUP_H


#import <Foundation/Foundation.h>


@interface ARCoachingSplineGroup : NSObject {
    vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> _controlPoints;
    vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> _patchData;
    vector<unsigned short, std::allocator<unsigned short>> _indices;
}


@property (readonly, nonatomic) *? controlPoints;
@property (readonly, nonatomic) *unsigned short indices;
@property (readonly, nonatomic) unsigned int numControlPoints;
@property (readonly, nonatomic) unsigned int numIndices;
@property (readonly, nonatomic) *? patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;


-(id)initWithSplines:(id)arg0 ;


@end


#endif