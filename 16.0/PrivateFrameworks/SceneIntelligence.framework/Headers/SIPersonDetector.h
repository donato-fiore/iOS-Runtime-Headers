// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIPERSONDETECTOR_H
#define SIPERSONDETECTOR_H

@protocol SINetworkProtocol;

#import <Foundation/Foundation.h>

#import "SIPersonDetectorNetworkConfiguration.h"

@interface SIPersonDetector : NSObject {
    id<SINetworkProtocol> *_personDetectorNetwork;
    SIPersonDetectorNetworkConfiguration *_configuration;
}




-(BOOL)switchNetworkConfiguration:(NSInteger)arg0 ;
-(NSInteger)copyOutput:(id)arg0 ;
-(NSInteger)evaluateImage:(struct __CVBuffer *)arg0 ;
-(id)getConfiguration;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(id)networkVersion;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;


@end


#endif