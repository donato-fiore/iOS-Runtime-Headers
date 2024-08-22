// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BUCOALESCINGCALLBLOCK_H
#define BUCOALESCINGCALLBLOCK_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BUCoalescingCallBlock : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks; // ivar: _callbacks
@property (nonatomic) CGFloat coalescingDelay; // ivar: _coalescingDelay
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (nonatomic, getter=isInvoking) BOOL invoking; // ivar: _invoking
@property (nonatomic) CGFloat maximumDelay; // ivar: _maximumDelay
@property (nonatomic) NSUInteger nextCoalescingTime; // ivar: _nextCoalescingTime
@property (nonatomic) NSUInteger nextMaxTime; // ivar: _nextMaxTime
@property (copy, nonatomic) id *notifyBlock; // ivar: _notifyBlock
@property (copy, nonatomic) NSString *notifyBlockDescription; // ivar: _notifyBlockDescription
@property (copy, nonatomic) id *notifyTimeoutBlock; // ivar: _notifyTimeoutBlock
@property (nonatomic) unsigned short notifyTimeoutDurationSeconds; // ivar: _notifyTimeoutDurationSeconds
@property (nonatomic) BOOL pending; // ivar: _pending
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sync; // ivar: _sync


-(id)description;
// -(id)initWithNotifyBlock:(id)arg0 blockDescription:(unk)arg1  ;
// -(id)initWithNotifyBlock:(id)arg0 notifyTimeout:(unk)arg1 blockDescription:(unsigned short)arg2 notifyTimeoutBlock:(id)arg3  ;
-(void)_coalescingTimeExpired:(NSUInteger)arg0 ;
-(void)_invoke;
-(void)_invokeIfNotInProgress;
-(void)_maxTimeExpired:(NSUInteger)arg0 ;
-(void)signalWithCompletion:(id)arg0 ;


@end


#endif