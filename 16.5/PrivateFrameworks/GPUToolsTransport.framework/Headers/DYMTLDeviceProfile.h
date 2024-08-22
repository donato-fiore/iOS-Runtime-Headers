// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYMTLDEVICEPROFILE_H
#define DYMTLDEVICEPROFILE_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding, MTLDevice;

#import <Foundation/Foundation.h>


@interface DYMTLDeviceProfile : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *defaultSamplePositions; // ivar: _defaultSamplePositions
@property (nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger streamRef; // ivar: _streamRef
@property (copy, nonatomic) NSArray *supportedFeatureSets; // ivar: _supportedFeatureSets
@property (copy, nonatomic) NSArray *supportedGPUFamilies; // ivar: _supportedGPUFamilies


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif