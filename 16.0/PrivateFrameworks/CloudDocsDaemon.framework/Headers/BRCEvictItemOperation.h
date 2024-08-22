// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCEVICTITEMOPERATION_H
#define BRCEVICTITEMOPERATION_H

@class BRCFrameworkOperation, NSURL, NSString;
@protocol BRItemNotificationReceiving, BRCOperationSubclass;


#import "BRCAccountSession.h"
#import "brc_task_tracker.h"
#import "BRCNotificationPipe.h"

@interface BRCEvictItemOperation : BRCFrameworkOperation <BRItemNotificationReceiving, BRCOperationSubclass>

 {
    BRCAccountSession *_session;
    NSUInteger _section;
    NSURL *_url;
    brc_task_tracker *_tracker;
    BRCNotificationPipe *_pipe;
    BOOL _isFinished;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *evictionCompletionBlock; // ivar: _evictionCompletionBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSession:(id)arg0 url:(id)arg1 ;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)main;
-(void)receiveProgressUpdates:(id)arg0 reply:(id)arg1 ;
-(void)receiveUpdates:(id)arg0 logicalExtensions:(id)arg1 physicalExtensions:(id)arg2 reply:(id)arg3 ;


@end


#endif