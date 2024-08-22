// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVACAMERACALIBRATIONDATA_H
#define CVACAMERACALIBRATIONDATA_H

@class AVCameraCalibrationData, NSDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVACameraCalibrationData : NSObject <NSSecureCoding>



@property (retain, nonatomic) AVCameraCalibrationData *calibrationData; // ivar: _calibrationData
@property (retain, nonatomic) NSDictionary *calibrationDictionary; // ivar: _calibrationDictionary
@property (nonatomic) ? extrinsicMatrix; // ivar: _extrinsicMatrix
@property (nonatomic) ? intrinsicMatrix; // ivar: _intrinsicMatrix
@property (nonatomic) CGSize intrinsicMatrixReferenceDimensions; // ivar: _intrinsicMatrixReferenceDimensions
@property (retain, nonatomic) NSData *inverseLensDistortionLookupTable; // ivar: _inverseLensDistortionLookupTable
@property (nonatomic) CGPoint lensDistortionCenter; // ivar: _lensDistortionCenter
@property (retain, nonatomic) NSData *lensDistortionLookupTable; // ivar: _lensDistortionLookupTable
@property (nonatomic) float pixelSize; // ivar: _pixelSize
@property (retain, nonatomic) NSString *streamID; // ivar: _streamID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithAVCameraCalibrationData:(id)arg0 timestamp:(CGFloat)arg1 streamID:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateProperties:(id)arg0 ;


@end


#endif