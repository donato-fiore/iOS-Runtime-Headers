// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCOALESCINGDROPBOX_H
#define SGCOALESCINGDROPBOX_H

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface SGCoalescingDropBox : NSObject {
    char * _name;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    id *_makeEmptyBox;
    id *_handler;
    id *_box;
    _opaque_pthread_mutex_t _handlerLock;
    _opaque_pthread_mutex_t _boxLock;
    int _outstanding;
    _opaque_pthread_cond_t _cond;
    NSObject<OS_os_transaction> *_transaction;
}




-(id)init;
// -(id)initWithName:(char *)arg0 boxMaker:(id)arg1 handler:(unk)arg2 qos:(id)arg3  ;
-(void)dealloc;
-(void)typeCheckingSink:(id)arg0 ;
-(void)updateBox:(id)arg0 ;
// -(void)updateBox:(id)arg0 delay:(unk)arg1  ;
-(void)wait;


@end


#endif