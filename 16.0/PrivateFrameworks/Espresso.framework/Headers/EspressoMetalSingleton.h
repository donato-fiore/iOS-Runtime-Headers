// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSOMETALSINGLETON_H
#define ESPRESSOMETALSINGLETON_H


#import <Foundation/Foundation.h>


@interface EspressoMetalSingleton : NSObject

@property int is_memory_tight; // ivar: _is_memory_tight


+(id)shared;


@end


#endif