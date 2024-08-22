// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPUSHCONNECTION_H
#define CKDPUSHCONNECTION_H

@class APSConnection, NSString, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPushConnection : NSObject

@property (retain, nonatomic) APSConnection *apsConnection; // ivar: _apsConnection
@property (retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString; // ivar: _apsEnvironmentString
@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedConnectionForAPSEnvironmentString:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connectionDidReconnect:(id)arg0 ;
-(void)dealloc;
-(void)getToken:(id)arg0 ;


@end


#endif