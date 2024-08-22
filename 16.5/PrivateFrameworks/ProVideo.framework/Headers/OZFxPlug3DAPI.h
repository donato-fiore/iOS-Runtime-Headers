// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZFXPLUG3DAPI_H
#define OZFXPLUG3DAPI_H

@class NSString;
@protocol Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject;

#import <Foundation/Foundation.h>


@interface OZFxPlug3DAPI : NSObject <Fx3DAPI, Fx3DAPI_v2, Fx3DAPI_v3, PROAPIObject>

 {
    atomic<bool> _is3D;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)focalLengthAtFxTime;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(BOOL)is3D;
-(BOOL)isUsingCamera;
-(CGFloat)focalLengthAtTime:(CGFloat)arg0 ;
-(id)cameraMatrixAtTime:(CGFloat)arg0 ;
-(id)layerMatrixAtTime:(CGFloat)arg0 ;
-(id)worldToEyeMatrix;
-(id)worldToFilmMatrix;
-(id)worldToLayerMatrix;
-(id)worldToObjectMatrix;
-(void)_setCameraMatrix:(struct PCMatrix44Tmpl<double> )arg0 ;
-(void)_setFocalLength:(CGFloat)arg0 ;
-(void)_setIs3D:(BOOL)arg0 ;
-(void)_setLayerMatrix:(struct PCMatrix44Tmpl<double> )arg0 ;
-(void)_setWorldToEyeMatrix:(struct PCMatrix44Tmpl<double> )arg0 ;
-(void)_setWorldToFilmMatrix:(struct PCMatrix44Tmpl<double> )arg0 ;
-(void)_setWorldToLayerMatrix:(struct PCMatrix44Tmpl<double> )arg0 ;
-(void)_setWorldToObjectMatrix:(struct PCMatrix44Tmpl<double> )arg0 ;


@end


#endif