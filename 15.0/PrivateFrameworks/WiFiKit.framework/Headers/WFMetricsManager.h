// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMETRICSMANAGER_H
#define WFMETRICSMANAGER_H

@class NSString, AWDServerConnection, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFMetricsManager : NSObject

@property (copy, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) AWDServerConnection *server; // ivar: _server
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // ivar: _serverQueue
@property (retain, nonatomic) NSMutableDictionary *ssidHashes; // ivar: _ssidHashes


+(id)sharedManager;
-(id)SHAForSSID:(id)arg0 ;
-(id)init;
-(void)_submitAWDEvent:(id)arg0 ;
-(void)_submitCAEvent:(id)arg0 ;
-(void)processEvent:(id)arg0 ;


@end


#endif