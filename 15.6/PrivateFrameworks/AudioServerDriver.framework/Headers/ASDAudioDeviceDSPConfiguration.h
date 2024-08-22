// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDAUDIODEVICEDSPCONFIGURATION_H
#define ASDAUDIODEVICEDSPCONFIGURATION_H

@class NSSet, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface ASDAudioDeviceDSPConfiguration : NSObject

@property (readonly, nonatomic) NSSet *dspDeviceProperties; // ivar: _dspDeviceProperties
@property (readonly, nonatomic) NSArray *inputDSP; // ivar: _inputDSP
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *outputDSP; // ivar: _outputDSP
@property (readonly, nonatomic) NSSet *underlyingDeviceProperties; // ivar: _underlyingDeviceProperties


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 name:(id)arg2 ;


@end


#endif