// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVACAMERACALIBRATION_H
#define CVACAMERACALIBRATION_H

@class NSArray, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVACameraCalibration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *cameraToIMURotation; // ivar: _cameraToIMURotation
@property (retain, nonatomic) NSArray *cameraToIMUTranslation; // ivar: _cameraToIMUTranslation
@property (retain, nonatomic) NSArray *chipOffset; // ivar: _chipOffset
@property (nonatomic) CGFloat focalLengthX; // ivar: _focalLengthX
@property (nonatomic) CGFloat focalLengthY; // ivar: _focalLengthY
@property (nonatomic) unsigned int imageHeight; // ivar: _imageHeight
@property (nonatomic) unsigned int imageWidth; // ivar: _imageWidth
@property (nonatomic) NSInteger lensDistortionModel; // ivar: _lensDistortionModel
@property (retain, nonatomic) NSArray *lensOffset; // ivar: _lensOffset
@property (retain, nonatomic) NSString *metadataID; // ivar: _metadataID
@property (nonatomic) CGFloat principalPointX; // ivar: _principalPointX
@property (nonatomic) CGFloat principalPointY; // ivar: _principalPointY
@property (retain, nonatomic) NSArray *radialDistortion; // ivar: _radialDistortion
@property (retain, nonatomic) NSNumber *readoutTime; // ivar: _readoutTime
@property (retain, nonatomic) NSArray *tangentialDistortion; // ivar: _tangentialDistortion
@property (nonatomic) CGFloat timestampCorrection; // ivar: _timestampCorrection


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif