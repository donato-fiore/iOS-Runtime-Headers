// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDAUDIOLEVELSHELPER_H
#define AXSDAUDIOLEVELSHELPER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSDAudioLevelsHelper : NSObject {
    NSMutableDictionary *_listenerHanders;
    NSMutableDictionary *_listenerBucketCounts;
    NSObject<OS_dispatch_queue> *_listenerQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)deregisterListener:(id)arg0 ;
// -(void)registerListener:(id)arg0 forAudioLevelUpdates:(id)arg1 withBucketCount:(unk)arg2  ;
-(void)updateListenersWithBuffer:(id)arg0 ;


@end


#endif