// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACELANDMARKS_H
#define VNFACELANDMARKS_H

@class NSData;
@protocol VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNFaceLandmarks : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>



@property (readonly) _Geometry2D_rect2D_ alignedBBox; // ivar: _alignedBBox
@property (readonly) float confidence; // ivar: _confidence
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier; // ivar: _originatingRequestSpecifier
@property (readonly) NSUInteger pointCount; // ivar: _pointCount
@property (readonly, copy) NSData *pointsData; // ivar: _pointsData
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (readonly) CGRect userFacingBBox; // ivar: _userFacingBBox


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(*void)_createPointArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUserFacingBBoxEquivalentToAlignedBBox;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 pointsData:(id)arg1 pointCount:(NSUInteger)arg2 userFacingBBox:(struct CGRect )arg3 alignedBBox:(struct _Geometry2D_rect2D_ )arg4 landmarkScore:(float)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif