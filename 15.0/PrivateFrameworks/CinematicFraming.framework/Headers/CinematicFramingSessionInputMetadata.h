// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CINEMATICFRAMINGSESSIONINPUTMETADATA_H
#define CINEMATICFRAMINGSESSIONINPUTMETADATA_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CinematicFramingSessionInputMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) float aspectRatio; // ivar: _aspectRatio
@property (readonly, nonatomic) NSArray *bodyDetections; // ivar: _bodyDetections
@property (readonly, nonatomic) NSDictionary *calibrationDataDictionary; // ivar: _calibrationDictionary
@property (readonly, nonatomic) NSArray *faceDetections; // ivar: _faceDetections
@property (readonly, nonatomic) float gravityX; // ivar: _gravityX
@property (readonly, nonatomic) float gravityY; // ivar: _gravityY
@property (readonly, nonatomic) float gravityZ; // ivar: _gravityZ
@property (readonly, nonatomic) BOOL hasGravity; // ivar: _hasGravity
@property (readonly, nonatomic) ? timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)_createCalibrationDataDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectedObjectsInfo:(id)arg0 calibrationData:(id)arg1 timestamp:(struct ? )arg2 aspectRatio:(float)arg3 ;
-(void)_parseDetectedObjectsInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif