// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDEVENTSENDERCACHE_H
#define BKHIDEVENTSENDERCACHE_H

@class NSString, NSMutableDictionary;
@protocol BKIOHIDServiceDisappearanceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKHIDEventSenderCache : NSObject <BKIOHIDServiceDisappearanceObserver>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *senderIDToSenderInfo; // ivar: _senderIDToSenderInfo
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(id)senderInfoForSenderID:(NSUInteger)arg0 ;
-(void)addSenderInfo:(id)arg0 ;
-(void)addSenderInfo:(id)arg0 forSenderID:(NSUInteger)arg1 ;
-(void)removeSenderInfo:(id)arg0 ;
-(void)serviceDidDisappear:(id)arg0 ;
-(void)sync;


@end


#endif