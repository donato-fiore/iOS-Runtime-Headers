// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYFSSTREAMERSERVICEXPCDISPATCHER_H
#define DYFSSTREAMERSERVICEXPCDISPATCHER_H

@protocol DYFSStreamerServiceXPCDispatcher, DYFSStreamerService;


#import "GTXPCDispatcher.h"

@interface DYFSStreamerServiceXPCDispatcher : GTXPCDispatcher <DYFSStreamerServiceXPCDispatcher>

 {
    id<DYFSStreamerService> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)finishedSending:(id)arg0 replyConnection:(id)arg1 ;
-(void)initializeTransfer:(id)arg0 replyConnection:(id)arg1 ;
-(void)itemData_attributes_:(id)arg0 replyConnection:(id)arg1 ;
-(void)streamAbort:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif