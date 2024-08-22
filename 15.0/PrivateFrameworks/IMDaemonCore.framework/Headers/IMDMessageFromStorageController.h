// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDMESSAGEFROMSTORAGECONTROLLER_H
#define IMDMESSAGEFROMSTORAGECONTROLLER_H

@class NSMutableSet, NSString, NSTimer, IMTimingCollection;

#import <Foundation/Foundation.h>

#import "IMDMessageStore.h"

@interface IMDMessageFromStorageController : NSObject

@property (retain, nonatomic) id *_broadcasterForTesting; // ivar: __broadcasterForTesting
@property (nonatomic) CGFloat lastMessageStorageTimerInterval; // ivar: _lastMessageStorageTimerInterval
@property (retain, nonatomic) IMDMessageStore *messageStore; // ivar: _messageStore
@property (nonatomic) NSUInteger messagesProcessedComingBackFromStorage; // ivar: _messagesProcessedComingBackFromStorage
@property (retain, nonatomic) NSMutableSet *messagesReceivedDuringStorage; // ivar: _messagesReceivedDuringStorage
@property (nonatomic) NSUInteger pendingReadReceiptFromStorageCount; // ivar: _pendingReadReceiptFromStorageCount
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSTimer *storageTimer; // ivar: _storageTimer
@property (nonatomic) CGFloat storageTimerInterval; // ivar: _storageTimerInterval
@property (nonatomic) CGFloat storageTimerUpdateInterval; // ivar: _storageTimerUpdateInterval
@property (retain, nonatomic) IMTimingCollection *timingComingBackFromStorage; // ivar: _timingComingBackFromStorage


+(id)SMSStorageController;
+(id)iMessageStorageController;
-(BOOL)isAwaitingStorageTimer;
-(id)broadcaster;
-(id)initWithMessageStore:(id)arg0 ;
-(void)_postMessagesFromStorage:(id)arg0 ;
-(void)_submitStorageMetricsWithError:(NSUInteger)arg0 ;
-(void)_updateStorageTimerWithInterval:(CGFloat)arg0 ;
-(void)decrementPendingReadReceiptFromStorageCount;
-(void)incrementPendingReadReceiptFromStorageCount;
-(void)noteItemFromStorage:(id)arg0 ;
-(void)noteLastItemFromStorage:(id)arg0 ;
-(void)noteLastItemProcessed;
-(void)noteLastItemProcessedWithError:(NSUInteger)arg0 ;
-(void)noteSuppressedMessageUpdate:(id)arg0 ;


@end


#endif