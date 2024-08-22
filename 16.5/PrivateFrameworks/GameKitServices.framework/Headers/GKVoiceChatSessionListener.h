// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKVOICECHATSESSIONLISTENER_H
#define GKVOICECHATSESSIONLISTENER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "GKSessionInternal.h"
#import "GKRWLock.h"

@interface GKVoiceChatSessionListener : NSObject {
    NSMutableArray *_conferenceList;
    GKSessionInternal *_gkSession;
    GKRWLock *_rwlock;
}




-(id)currentSessions;
-(id)initWithSession:(id)arg0 ;
-(void)dealloc;
-(void)receivedNewVoiceChatOOBMessage:(id)arg0 fromPeerID:(id)arg1 ;
-(void)registerNewGKVoiceChatSession:(id)arg0 ;
-(void)removeSession:(id)arg0 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(unsigned int)arg2 ;


@end


#endif