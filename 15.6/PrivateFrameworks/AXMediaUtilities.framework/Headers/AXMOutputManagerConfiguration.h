// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMOUTPUTMANAGERCONFIGURATION_H
#define AXMOUTPUTMANAGERCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AXMOutputManagerConfiguration : NSObject

@property (nonatomic) NSUInteger components; // ivar: _components
@property (nonatomic) CGFloat hapticEngineAutoShutdownTimeout; // ivar: _hapticEngineAutoShutdownTimeout
@property (nonatomic) BOOL hapticEngineUsesAutoShutdown; // ivar: _hapticEngineUsesAutoShutdown
@property (nonatomic) BOOL hapticEngineUsesHapticsOnly; // ivar: _hapticEngineUsesHapticsOnly
@property (nonatomic) BOOL usesPrivateAudioSession; // ivar: _usesPrivateAudioSession


-(id)description;


@end


#endif