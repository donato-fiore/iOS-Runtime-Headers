// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSUPPORTEDSIRIAUDIOCONFIGURATIONS_H
#define HMDSUPPORTEDSIRIAUDIOCONFIGURATIONS_H

@class HAPAudioStreamCodecConfiguration, NSArray;

#import <Foundation/Foundation.h>


@interface HMDSupportedSiriAudioConfigurations : NSObject

@property (retain, nonatomic) HAPAudioStreamCodecConfiguration *selectedConfiguration; // ivar: _selectedConfiguration
@property (nonatomic) NSInteger siriInputType; // ivar: _siriInputType
@property (retain, nonatomic) NSArray *supportedConfigurations; // ivar: _supportedConfigurations




@end


#endif