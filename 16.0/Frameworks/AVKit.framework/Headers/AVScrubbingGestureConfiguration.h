// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSCRUBBINGGESTURECONFIGURATION_H
#define AVSCRUBBINGGESTURECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "AVScrubbingGesturePlatformConfiguration.h"

@interface AVScrubbingGestureConfiguration : NSObject

@property (readonly, nonatomic) AVScrubbingGesturePlatformConfiguration *platformConfiguration; // ivar: _platformConfiguration
@property (readonly, nonatomic) float syntheticFriction; // ivar: _syntheticFriction
@property (readonly, nonatomic) BOOL usesNaturalDirection; // ivar: _usesNaturalDirection


+(id)configurationWithSyntheticFriction:(float)arg0 usesNaturalDirection:(BOOL)arg1 platformConfiguration:(id)arg2 ;
+(id)defaultConfiguration;


@end


#endif