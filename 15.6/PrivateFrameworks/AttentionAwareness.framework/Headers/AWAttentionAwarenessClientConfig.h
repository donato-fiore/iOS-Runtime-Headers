// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWATTENTIONAWARENESSCLIENTCONFIG_H
#define AWATTENTIONAWARENESSCLIENTCONFIG_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AWAttentionAwarenessClientConfig : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    NSMutableDictionary *_notifyQueues;
    NSMutableDictionary *_notifyBlocks;
    NSUInteger _supportedEvents;
    BOOL _supportedEventsValid;
    NSUInteger _nextTagIndex;
    NSMutableDictionary *_tagMap;
    NSMutableDictionary *_tagRefCount;
}




+(id)sharedClientConfig;
-(NSUInteger)addTag:(id)arg0 ;
-(NSUInteger)supportedEvents;
-(id)init;
-(id)tagForIndex:(NSUInteger)arg0 ;
-(struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg0 block:(id)arg1 ;
-(void)cancelNotification:(struct AWNotification_s *)arg0 ;
-(void)dealloc;
-(void)decrementTagIndexRefCount:(NSUInteger)arg0 ;
-(void)incrementTagIndexRefCount:(NSUInteger)arg0 ;
-(void)updateState:(BOOL)arg0 ;


@end


#endif