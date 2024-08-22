// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIPERSONDETECTOR_H
#define SIPERSONDETECTOR_H



#import "SIBaseNetwork.h"

@interface SIPersonDetector : SIBaseNetwork



-(BOOL)switchNetworkConfiguration:(NSInteger)arg0 ;
-(NSInteger)copyOutput:(id)arg0 ;
-(NSInteger)evaluateImage:(struct __CVBuffer *)arg0 ;
-(id)_configurationToString:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 networkMode:(NSInteger)arg1 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(void)postSetup;
-(void)preSetup;


@end


#endif