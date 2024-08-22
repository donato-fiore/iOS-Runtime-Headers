// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDAMAILACCOUNTSYNCCONSUMER_H
#define MFDAMAILACCOUNTSYNCCONSUMER_H

@class NSArray, NSString, NSMutableData, NSMutableDictionary, NSConditionLock;
@protocol DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer;


#import "MFDAMailAccountConsumer.h"
#import "MFActivityMonitor.h"

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer>

 {
    NSArray *_requestPairs;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    NSMutableData *_bodyData;
    BOOL _receivedFirstItem;
    BOOL _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
    NSMutableDictionary *_syncResponseConsumersByMessageId;
    NSConditionLock *_accountHierarchyLock;
}


@property (readonly, nonatomic) BOOL moreAvailable; // ivar: _moreAvailable
@property (retain, nonatomic) NSObject<DAMailboxStreamingContentConsumer> *streamConsumer; // ivar: _streamConsumer
@property (copy, nonatomic) NSString *tag; // ivar: _tag


-(BOOL)refreshFolderHierarchyAndWait:(NSUInteger)arg0 ;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg0 format:(int)arg1 ;
-(id)actionsConsumer;
-(id)initWithCurrentTag:(id)arg0 accountID:(id)arg1 requests:(id)arg2 ;
-(id)originalThreadMonitor;
-(void)accountHierarchyChanged:(id)arg0 ;
-(void)consumeData:(char *)arg0 length:(int)arg1 format:(int)arg2 mailMessage:(id)arg3 ;
-(void)didEndStreamingForMailMessage:(id)arg0 ;
-(void)handleSyncResponses:(id)arg0 ;
-(void)partialResultsForMailbox:(id)arg0 actions:(id)arg1 responses:(id)arg2 percentComplete:(CGFloat)arg3 moreAvailable:(BOOL)arg4 ;
-(void)reset;
-(void)resultsForMailbox:(id)arg0 newTag:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(CGFloat)arg4 moreAvailable:(BOOL)arg5 sentBytesCount:(NSUInteger)arg6 receivedBytesCount:(NSUInteger)arg7 ;
-(void)taskFailed:(id)arg0 statusCode:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif