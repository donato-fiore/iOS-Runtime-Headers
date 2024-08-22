// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCONTOURSOBSERVATION_H
#define VNCONTOURSOBSERVATION_H

@class NSData, NSArray;


#import "VNObservation.h"

@interface VNContoursObservation : VNObservation {
    NSData *_compressedPoints;
    CGSize _imageSize;
    os_unfair_lock_s _pathLock;
    *CGPath _normalizedPath;
    shared_ptr<apple::vision::libraries::autotrace::EPolygonList> _polygonList;
    vector<unsigned int, std::allocator<unsigned int>> _topLevelContoursIndices;
    vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> _contourChildrenIndices;
}


@property (readonly) NSInteger contourCount;
@property (readonly) *CGPath normalizedPath;
@property (readonly) NSInteger topLevelContourCount;
@property (readonly) NSArray *topLevelContours;


+(BOOL)supportsSecureCoding;
-(*void)childContourIndicesAtIndex:(NSInteger)arg0 ;
-(BOOL)_initializePolygonContainers;
-(BOOL)isEqual:(id)arg0 ;
-(id)contourAtIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(id)contourAtIndexPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 compressedPoints:(id)arg1 imageSize:(struct CGSize )arg2 ;
-(id)vn_cloneObject;
-(struct EPolygonList *)polygonList;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif