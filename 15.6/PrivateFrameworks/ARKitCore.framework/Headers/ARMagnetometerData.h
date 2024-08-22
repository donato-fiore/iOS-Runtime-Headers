// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMAGNETOMETERDATA_H
#define ARMAGNETOMETERDATA_H

@class NSString;
@protocol ARMutableSensorData, ARMetadataWrapperCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARMagnetometerData : NSObject <ARMutableSensorData, ARMetadataWrapperCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? magneticField; // ivar: _magneticField
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeToMetadataWrapper;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadataWrapper:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif