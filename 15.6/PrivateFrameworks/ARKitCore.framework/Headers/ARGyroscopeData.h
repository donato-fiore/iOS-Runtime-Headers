// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARGYROSCOPEDATA_H
#define ARGYROSCOPEDATA_H

@class NSString;
@protocol ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARGyroscopeData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? rotationRate; // ivar: _rotationRate
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMetadataWrapper:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif