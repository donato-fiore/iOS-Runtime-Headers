// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOENVIRONMENTREVERBPARAMETERS_H
#define AVAUDIOENVIRONMENTREVERBPARAMETERS_H


#import <Foundation/Foundation.h>

#import "AVAudioUnitEQFilterParameters.h"

@interface AVAudioEnvironmentReverbParameters : NSObject {
    *void _impl;
}


@property (nonatomic) BOOL enable;
@property (readonly, nonatomic) AVAudioUnitEQFilterParameters *filterParameters;
@property (nonatomic) float level;


-(id)init;
-(id)initWithEnvironment:(*void)arg0 ;
-(void)dealloc;
-(void)loadFactoryReverbPreset:(NSInteger)arg0 ;


@end


#endif