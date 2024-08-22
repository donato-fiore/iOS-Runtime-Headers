// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECEXPERIMENTCONFIG_H
#define SECEXPERIMENTCONFIG_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SecExperimentConfig : NSObject

@property (retain) NSDictionary *config; // ivar: _config
@property (retain) NSDictionary *configurationData; // ivar: _configurationData
@property unsigned int deviceSampleRate; // ivar: _deviceSampleRate
@property unsigned int fleetSampleRate; // ivar: _fleetSampleRate
@property (retain) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isSampled;


-(BOOL)shouldRunWithSamplingRate:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(unsigned int)hostHash;


@end


#endif