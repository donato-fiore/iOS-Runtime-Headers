// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNAUDIOPROCESSORCACHE_H
#define SNAUDIOPROCESSORCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SNAudioProcessorCache : NSObject {
    NSMapTable *_activeProcessorsCache;
}




-(id)audioProcessorWithConfiguration:(id)arg0 ;
-(id)createAudioProcessorWithConfiguration:(id)arg0 ;
-(id)init;
-(id)sharedProcessorWithConfiguration:(id)arg0 ;


@end


#endif