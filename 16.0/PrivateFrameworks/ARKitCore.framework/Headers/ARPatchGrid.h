// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPATCHGRID_H
#define ARPATCHGRID_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPatchGrid : NSObject <NSSecureCoding>

 {
    ? _patchesVector;
    float _angle;
}


@property (readonly, nonatomic) *? patches;
@property (readonly, nonatomic) float pivot;
@property (readonly, nonatomic) NSUInteger size;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPatchesVector:(struct vector<ARPatch, std::allocator<ARPatch>> )arg0 pivotAngle:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif