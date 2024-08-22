// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAUDIOPROCESSORCACHE_H
#define SNAUDIOPROCESSORCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SNAudioProcessorCache : NSObject {
    NSMapTable *_activeProcessorsCache;
}




-(id)init;


@end


#endif