// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSTRIDECALIBRATIONHISTORY_H
#define CMSTRIDECALIBRATIONHISTORY_H

@class NSArray, NSString;
@protocol SRSampling, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMStrideCalibrationHistory : NSObject <SRSampling, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *calibrationTracks; // ivar: _calibrationTracks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *rawSpeedToKValueBins; // ivar: _rawSpeedToKValueBins
@property (retain, nonatomic) NSArray *stepCadenceToStrideLengthBins; // ivar: _stepCadenceToStrideLengthBins
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCalibrationTracks:(id)arg0 rawSpeedToKValueBins:(id)arg1 stepCadenceToStrideLengthBins:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif