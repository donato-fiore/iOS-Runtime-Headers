// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACEREGIONMAP_H
#define VNFACEREGIONMAP_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>


@interface VNFaceRegionMap : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>

 {
    NSUInteger _requestRevision;
    vImage_Buffer _regionMap;
    CGRect _userBBox;
    _Geometry2D_rect2D_ _internalAlignedBBox;
    BOOL _deallocateBuffer;
    NSDictionary *_pixelValueToRegionLabelMap;
}


@property (copy) NSArray *regionLabels; // ivar: _regionLabels
@property (readonly, nonatomic) NSUInteger requestRevision;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getRegionLabels;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 regionMap:(struct vImage_Buffer *)arg1 deallocateBuffer:(BOOL)arg2 userBBox:(struct CGRect )arg3 alignedBBox:(struct _Geometry2D_rect2D_ )arg4 valueToLabelMap:(id)arg5 ;
-(id)regionNameAtImageCoordinate:(struct CGPoint )arg0 imageSize:(struct CGSize )arg1 ;
-(id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint )arg0 ;
-(id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif