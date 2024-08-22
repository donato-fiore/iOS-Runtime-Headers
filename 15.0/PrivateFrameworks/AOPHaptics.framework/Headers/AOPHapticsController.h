// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AOPHAPTICSCONTROLLER_H
#define AOPHAPTICSCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AOPHapticsController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    *IONotificationPort _notificationPort;
    unsigned int _arrivalNotification;
    id *_cancelHandler;
    id *_readyHandler;
    atomic_flag _activated;
    atomic_flag _cancelled;
}


@property (nonatomic) unsigned int connect; // ivar: _connect
@property (nonatomic) unsigned int service; // ivar: _service


+(int)AHtoHMOutputType:(unsigned char)arg0 ;
-(BOOL)playSlotIndices:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMappings:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_findService;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setReadyHandler:(id)arg0 ;
-(void)signalReady;


@end


#endif