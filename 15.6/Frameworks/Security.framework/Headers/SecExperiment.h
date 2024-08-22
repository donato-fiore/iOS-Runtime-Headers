// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECEXPERIMENT_H
#define SECEXPERIMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SecExperimentConfig.h"

@interface SecExperiment : NSObject

@property (retain) SecExperimentConfig *cachedConfig; // ivar: _cachedConfig
@property (readonly) NSString *identifier;
@property (retain) NSString *name; // ivar: _name
@property (nonatomic) BOOL samplingDisabled; // ivar: _samplingDisabled


-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabled;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg0 ;
-(id)copyExperimentConfiguration;
-(id)copyExperimentConfigurationFromUserDefaults;
-(id)copyRandomExperimentConfigurationFromAsset:(id)arg0 ;
-(id)copyRemoteExperimentAsset;
-(id)initWithName:(char *)arg0 ;


@end


#endif