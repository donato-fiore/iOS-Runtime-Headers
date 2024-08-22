// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGETEVENTSERVICEPUBLISHER_H
#define CHSWIDGETEVENTSERVICEPUBLISHER_H

@class NSString, BSServiceConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active


-(id)_activeConnection;
-(id)description;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)_invalidateConnection;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)publishOpenEventWithURL:(id)arg0 ;
-(void)publishOpenEventWithUserActivity:(id)arg0 ;


@end


#endif