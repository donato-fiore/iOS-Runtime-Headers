// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NW_LISTENER_INBOX_H
#define NW_LISTENER_INBOX_H

@class NSString;
@protocol nw_listener_inbox_delegate, OS_nw_parameters, OS_nw_interface, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface nw_listener_inbox : NSObject {
    NSObject<nw_listener_inbox_delegate> *_delegate;
    os_unfair_lock_s _lock;
    NSString *_description;
    NSObject<OS_nw_parameters> *_parameters;
    int _level;
    BOOL _suspended;
}


@property (readonly, nonatomic) NSObject<OS_nw_interface> *interface; // ivar: _interface
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *local_endpoint; // ivar: _local_endpoint
@property (nonatomic) BOOL multicast; // ivar: _multicast


-(BOOL)cancel;
-(BOOL)isSuspended;
-(BOOL)resume;
-(BOOL)suspend;
-(id)initWithDelegate:(id)arg0 ;
-(id)start;


@end


#endif