// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNFLOOR_H
#define SCNFLOOR_H



#import "SCNGeometry.h"

@interface SCNFloor : SCNGeometry {
    BOOL _isPresentationInstance;
    BOOL _usesCustomScaleFactor;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    NSUInteger _reflectionCategoryBitMask;
    CGFloat _width;
    CGFloat _length;
    float _reflectionResolutionScaleFactor;
    NSUInteger _reflectionSampleCount;
}


@property (nonatomic) CGFloat length;
@property (nonatomic) NSUInteger reflectionCategoryBitMask;
@property (nonatomic) CGFloat reflectionFalloffEnd;
@property (nonatomic) CGFloat reflectionFalloffStart;
@property (nonatomic) CGFloat reflectionResolutionScaleFactor;
@property (nonatomic) CGFloat reflectivity;
@property (nonatomic) CGFloat width;


+(BOOL)supportsSecureCoding;
+(id)floor;
-(?)__createCFObject;
-(?)floorRef;
-(CGFloat)height;
-(CGFloat)reflectionFallOffEnd;
-(CGFloat)reflectionFallOffStart;
-(NSUInteger)reflectionSampleCount;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFloorGeometryRef:(struct __C3DFloor *)arg0 ;
-(void)_customDecodingOfSCNFloor:(id)arg0 ;
-(void)_syncObjCModel;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setHeight:(CGFloat)arg0 ;
-(void)setReflectionFallOffEnd:(CGFloat)arg0 ;
-(void)setReflectionFallOffStart:(CGFloat)arg0 ;
-(void)setReflectionSampleCount:(NSUInteger)arg0 ;


@end


#endif