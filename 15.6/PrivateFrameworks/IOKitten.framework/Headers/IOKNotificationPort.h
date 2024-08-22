// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOKNOTIFICATIONPORT_H
#define IOKNOTIFICATIONPORT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IOKNotificationPort : NSObject

@property (readonly, nonatomic) unsigned int machPort;
@property (readonly, nonatomic) *IONotificationPort port; // ivar: _port
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initOnDispatchQueue:(id)arg0 ;
-(id)initWithMasterPort:(unsigned int)arg0 onDispatchQueue:(id)arg1 ;
-(void)dealloc;


@end


#endif