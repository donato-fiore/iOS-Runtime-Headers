// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPTICCOMMANDCONVERTER_H
#define HAPTICCOMMANDCONVERTER_H


#import <Foundation/Foundation.h>

#import "HapticServerConfig.h"

@interface HapticCommandConverter : NSObject

@property (readonly) HapticServerConfig *serverConfig; // ivar: _serverConfig


-(NSUInteger)continuousHapticEventTypeForDefaultSharpness:(BOOL)arg0 ;
-(NSUInteger)continuousHapticEventTypeFromSharpness:(float)arg0 sustained:(BOOL)arg1 ;
-(NSUInteger)transientHapticEventTypeForDefaultSharpness;
-(NSUInteger)transientHapticEventTypeFromSharpness:(float)arg0 ;
-(id)CHtoAVParameterCurve:(id)arg0 ;
-(id)eventForAudioEventType:(NSUInteger)arg0 time:(CGFloat)arg1 eventParams:(id)arg2 duration:(CGFloat)arg3 ;
-(id)eventForContinuousHapticEventType:(int)arg0 time:(CGFloat)arg1 params:(id)arg2 duration:(CGFloat)arg3 ;
-(id)eventForDynamicParameterEntry:(id)arg0 ;
-(id)eventForEventEntry:(id)arg0 engine:(id)arg1 privileged:(BOOL)arg2 ;
-(id)eventForLegacyTransientHapticAtTime:(CGFloat)arg0 params:(id)arg1 duration:(CGFloat)arg2 ;
-(id)eventForParameterCurveEntry:(id)arg0 ;
-(id)eventForSPIEventType:(NSUInteger)arg0 time:(CGFloat)arg1 eventParams:(id)arg2 duration:(CGFloat)arg3 ;
-(id)eventForTransientHapticAtTime:(CGFloat)arg0 params:(id)arg1 duration:(CGFloat)arg2 ;
-(id)initWithServerConfig:(id)arg0 ;


@end


#endif