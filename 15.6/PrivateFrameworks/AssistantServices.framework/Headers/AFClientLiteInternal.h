// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCLIENTLITEINTERNAL_H
#define AFCLIENTLITEINTERNAL_H

@protocol AFClientLiteClientCommandHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id *_commandHandler;
}




// -(id)initAndHandleCommand:(id)arg0 afterCurrentRequest:(BOOL)arg1 isOneWay:(BOOL)arg2 commandHandler:(id)arg3 completion:(unk)arg4  ;
-(void)_handleCommand:(id)arg0 afterCurrentRequest:(BOOL)arg1 isOneWay:(BOOL)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)handleCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif