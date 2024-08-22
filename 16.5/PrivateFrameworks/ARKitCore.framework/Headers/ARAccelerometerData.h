// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARACCELEROMETERDATA_H
#define ARACCELEROMETERDATA_H

@class NSString;
@protocol ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding>



@property (nonatomic) ? acceleration; // ivar: _acceleration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat temperature; // ivar: _temperature
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)grabNextFromReader:(id)arg0 timestamp:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithAccelData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMetadataWrapper:(id)arg0 ;
-(void)appendToWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif