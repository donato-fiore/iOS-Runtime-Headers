// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRITETHER_H
#define AFSIRITETHER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"

@interface AFSiriTether : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    AFInstanceContext *_instanceContext;
    BOOL _isAttached;
    id *_attachmentStatusChangedHandler;
    NSMutableArray *_pendingEvents;
    int _notifyToken;
}




-(id)_connection;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_attach:(id)arg0 ;
-(void)_attachmentStatusUpdate:(BOOL)arg0 ;
-(void)_connectionInterrupted:(id)arg0 ;
-(void)_connectionInvalid:(id)arg0 ;
-(void)_listenForLaunchNotification;
-(void)_logEvent:(id)arg0 ;
-(void)attach:(id)arg0 ;
-(void)dealloc;
-(void)setAttachmentStatusChangedHandler:(id)arg0 ;
-(void)waitForAttachment:(CGFloat)arg0 ;


@end


#endif