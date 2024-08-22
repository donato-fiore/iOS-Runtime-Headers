// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYSERVERBROWSERRELAY_H
#define HAPACCESSORYSERVERBROWSERRELAY_H

@class NSMutableArray;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;


#import "HAPAccessoryServerBrowser.h"

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser

@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) NSMutableArray *discoveredAccessoryServers; // ivar: _discoveredAccessoryServers


-(NSInteger)linkType;
-(id)initWithQueue:(id)arg0 ;
-(void)addAccessoryServerWithStream:(id)arg0 name:(id)arg1 identifier:(id)arg2 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)removeAccessoryServerWithStream:(id)arg0 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;


@end


#endif