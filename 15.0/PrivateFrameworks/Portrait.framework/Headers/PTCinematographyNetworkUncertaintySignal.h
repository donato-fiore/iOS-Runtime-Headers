// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYNETWORKUNCERTAINTYSIGNAL_H
#define PTCINEMATOGRAPHYNETWORKUNCERTAINTYSIGNAL_H



#import "PTCinematographyNetworkSignal.h"

@interface PTCinematographyNetworkUncertaintySignal : PTCinematographyNetworkSignal

@property (readonly) float timerSecondsDivisor; // ivar: _timerSecondsDivisor


-(float)_timerUncertaintyForPayload:(id)arg0 ;
-(id)initWithModelDictionary:(id)arg0 ;
-(void)writePayload:(id)arg0 toStream:(id)arg1 ;


@end


#endif