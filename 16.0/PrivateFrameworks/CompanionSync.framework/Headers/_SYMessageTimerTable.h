// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SYMESSAGETIMERTABLE_H
#define _SYMESSAGETIMERTABLE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _SYMessageTimerTable : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_callback;
    NSObject<OS_dispatch_queue> *_rwlock;
    NSMutableDictionary *_bySeqno;
    NSMutableDictionary *_byIdent;
}


@property (readonly, nonatomic) NSUInteger timerCount;


-(id)init;
-(id)initWithQueue:(id)arg0 timerCallback:(id)arg1 ;
-(void)_cleanupTimerForSeqno:(NSUInteger)arg0 ;
-(void)_fireCallbackForSeqno:(NSUInteger)arg0 ;
-(void)addTimerWithFireDate:(id)arg0 forSequenceNumber:(NSUInteger)arg1 ;
-(void)cancelAllTimers;
-(void)cancelTimerForIdentifier:(id)arg0 ;
-(void)cancelTimerForSequenceNumber:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setIdentifier:(id)arg0 forSequenceNumber:(NSUInteger)arg1 ;


@end


#endif