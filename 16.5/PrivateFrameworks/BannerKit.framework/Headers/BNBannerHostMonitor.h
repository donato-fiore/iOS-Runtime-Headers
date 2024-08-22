// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNBANNERHOSTMONITOR_H
#define BNBANNERHOSTMONITOR_H

@class NSString, BSServiceConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BNBannerHostMonitor : NSObject {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (nonatomic, getter=isActive, setter=_setActive:) BOOL active; // ivar: _active
@property (retain, nonatomic, getter=_connection, setter=_setConnection:) BSServiceConnection *connection; // ivar: _connection


+(void)initialize;
-(id)_activeConnection;
-(id)description;
-(id)initWithMachName:(id)arg0 ;
-(void)_invalidateConnection;
-(void)activate;
-(void)deactivate;
-(void)dealloc;


@end


#endif