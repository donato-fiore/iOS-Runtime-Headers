// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARDEPTHDATA_H
#define ARDEPTHDATA_H

@class ADCameraCalibration, NSString;
@protocol NSSecureCoding, ARResultData;

#import <Foundation/Foundation.h>


@interface ARDepthData : NSObject <NSSecureCoding, ARResultData>



@property (retain, nonatomic) ADCameraCalibration *adCameraCalibration; // ivar: _adCameraCalibration
@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (nonatomic) *__CVBuffer confidenceBuffer; // ivar: _confidenceBuffer
@property (nonatomic) *__CVBuffer confidenceMap; // ivar: _confidenceMap
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) *__CVBuffer depthMap; // ivar: _depthMap
@property (readonly, copy) NSString *description;
@property (nonatomic) ? deviceTransform; // ivar: _deviceTransform
@property (nonatomic) ? extrinsicsToAppNode; // ivar: _extrinsicsToAppNode
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (nonatomic) *__CVBuffer normalsBuffer; // ivar: _normalsBuffer
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDepthMap:(struct __CVBuffer *)arg0 confidenceMap:(struct __CVBuffer *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif