// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSERVERCONNECTION_H
#define WLSERVERCONNECTION_H

@class NSMutableSet;
@protocol WLConnection, OS_dispatch_queue, WLServerConnectionDelegate;

#import <Foundation/Foundation.h>


@interface WLServerConnection : NSObject <WLConnection>

 {
    int _sockfd;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
}


@property (weak, nonatomic) NSObject<WLServerConnectionDelegate> *delegate; // ivar: _delegate


-(BOOL)_isTerminated:(char *)arg0 length:(NSInteger)arg1 ;
-(id)init;
-(int)_listen:(int)arg0 ;
-(void)_accept:(int)arg0 ;
-(void)_read:(int)arg0 ;
-(void)close;
-(void)dealloc;
-(void)listen:(int)arg0 ;


@end


#endif