// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARDEVICEORIENTATIONDATA_H
#define ARDEVICEORIENTATIONDATA_H

@class NSString, CMDeviceMotion;
@protocol ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CMDeviceMotion *deviceMotion; // ivar: _deviceMotion
@property (readonly) NSUInteger hash;
@property (nonatomic) ? rotationMatrix; // ivar: _rotationMatrix
@property (readonly, nonatomic) ? rotationMatrixENU;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)grabNextFromReader:(id)arg0 timestamp:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMetadataWrapper:(id)arg0 ;
-(id)initWithMotionData:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 rotationMatrix:(struct ? )arg1 ;
-(void)appendToWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif