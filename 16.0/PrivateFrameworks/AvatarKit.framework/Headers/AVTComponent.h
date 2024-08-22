// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOMPONENT_H
#define AVTCOMPONENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AVTComponent : NSObject {
    NSInteger _type;
    AVTMaterial" _materials;
}


@property (readonly) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSString *bodyPoseVariant; // ivar: _bodyPoseVariant
@property (readonly, nonatomic) float bodyPoseVariantIntensity; // ivar: _bodyPoseVariantIntensity
@property (readonly, nonatomic) NSString *imageVariant; // ivar: _imageVariant
@property (readonly, nonatomic) NSString *materialVariant; // ivar: _materialVariant
@property (readonly, nonatomic) BOOL mirrored; // ivar: _mirrored
@property (readonly, nonatomic) NSString *morphVariant; // ivar: _morphVariant
@property (readonly, nonatomic) float morphVariantIntensity; // ivar: _morphVariantIntensity
@property (readonly, nonatomic) float textureAssetPresence; // ivar: _textureAssetPresence
@property (readonly) NSInteger type;


-(id)description;
-(id)initWithType:(NSInteger)arg0 assets:(id)arg1 morphVariant:(id)arg2 imageVariant:(id)arg3 materialVariant:(id)arg4 bodyPoseVariant:(id)arg5 morphVariantIntensity:(float)arg6 bodyPoseVariantIntensity:(float)arg7 textureAssetPresence:(float)arg8 mirrored:(BOOL)arg9 ;
-(id)materialAtIndex:(NSUInteger)arg0 ;
-(void)setMaterial:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif