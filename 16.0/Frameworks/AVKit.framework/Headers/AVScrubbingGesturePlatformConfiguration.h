// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSCRUBBINGGESTUREPLATFORMCONFIGURATION_H
#define AVSCRUBBINGGESTUREPLATFORMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AVScrubbingGesturePlatformConfiguration : NSObject

@property (readonly, nonatomic) float magnitude; // ivar: _magnitude
@property (readonly, nonatomic) float nonLinearity; // ivar: _nonLinearity


+(id)configurationWithMagnitude:(float)arg0 nonLinearity:(float)arg1 ;
+(id)defaultConfiguration;


@end


#endif