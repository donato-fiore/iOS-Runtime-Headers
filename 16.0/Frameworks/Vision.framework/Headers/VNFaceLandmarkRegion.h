// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACELANDMARKREGION_H
#define VNFACELANDMARKREGION_H

@protocol VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNFaceLandmarkRegion : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>



@property (readonly) CGRect faceBoundingBox; // ivar: _faceBoundingBox
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier; // ivar: _originatingRequestSpecifier
@property (readonly) NSUInteger pointCount; // ivar: _pointCount
@property (readonly, nonatomic) NSUInteger requestRevision;


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 faceBoundingBox:(struct CGRect )arg1 pointCount:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif