// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADXTHETADISTORTIONMODEL_H
#define ADXTHETADISTORTIONMODEL_H

@class NSString;
@protocol ADLensDistortionModel;

#import <Foundation/Foundation.h>


@interface ADXThetaDistortionModel : NSObject <ADLensDistortionModel>



@property (readonly, nonatomic) NSUInteger XThetaType; // ivar: _XThetaType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint distortionCenter; // ivar: _distortionCenter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation:(BOOL)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDistortionCenter:(struct CGPoint )arg0 XThetaType:(NSUInteger)arg1 ;
-(void)adjustForImageRotation:(NSInteger)arg0 forDimensions:(struct CGSize )arg1 ;
-(void)applyDistortionModelToPixels:(NSUInteger)arg0 inPixels:(struct CGPoint *)arg1 intrinsicsMatrix:(struct ? )arg2 pixelSize:(CGFloat)arg3 distort:(BOOL)arg4 outPixels:(struct CGPoint *)arg5 ;
-(void)crop:(struct CGRect )arg0 fromDimensions:(struct CGSize )arg1 ;
-(void)distortPixels:(NSUInteger)arg0 undistortedPixels:(struct CGPoint *)arg1 withCameraCalibration:(id)arg2 outDistortedPixels:(struct CGPoint *)arg3 ;
-(void)scale:(float)arg0 ;
-(void)undistortPixels:(NSUInteger)arg0 distortedPixels:(struct CGPoint *)arg1 withCameraCalibration:(id)arg2 outUndistortedPixels:(struct CGPoint *)arg3 ;


@end


#endif