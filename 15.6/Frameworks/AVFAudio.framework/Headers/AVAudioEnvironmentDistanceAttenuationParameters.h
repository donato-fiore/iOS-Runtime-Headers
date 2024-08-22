// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOENVIRONMENTDISTANCEATTENUATIONPARAMETERS_H
#define AVAUDIOENVIRONMENTDISTANCEATTENUATIONPARAMETERS_H


#import <Foundation/Foundation.h>


@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {
    *void _impl;
}


@property (nonatomic) NSInteger distanceAttenuationModel;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float rolloffFactor;


-(id)init;
-(id)initWithEnvironment:(*void)arg0 ;
-(void)dealloc;


@end


#endif