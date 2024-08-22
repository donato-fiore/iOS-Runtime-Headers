// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFACEANCHOR_H
#define VCPFACEANCHOR_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VCPFaceGeometry.h"

@interface VCPFaceAnchor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *blendShapes; // ivar: _blendShapes
@property (readonly, nonatomic) VCPFaceGeometry *geometry; // ivar: _geometry
@property (readonly, nonatomic) ? transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransform:(struct ? )arg0 blendShapes:(id)arg1 geometry:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif