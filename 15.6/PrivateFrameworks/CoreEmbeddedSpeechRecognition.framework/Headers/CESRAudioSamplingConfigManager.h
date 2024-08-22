// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CESRAUDIOSAMPLINGCONFIGMANAGER_H
#define CESRAUDIOSAMPLINGCONFIGMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CESRAudioSamplingConfigManager : NSObject {
    NSMutableDictionary *_audioSamplingConfigDict;
}




+(id)sharedManager;
-(BOOL)shouldSampleFromConfigForProductType:(NSInteger)arg0 language:(id)arg1 ;
-(id)_createConfigFromProductType:(NSInteger)arg0 ;
-(id)audioSamplingConfigDict;
-(id)init;
-(id)initWithAudioSamplingConfigDict:(id)arg0 ;
-(void)loadConfigs;


@end


#endif