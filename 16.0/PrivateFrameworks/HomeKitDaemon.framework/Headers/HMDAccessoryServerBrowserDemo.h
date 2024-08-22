// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSERVERBROWSERDEMO_H
#define HMDACCESSORYSERVERBROWSERDEMO_H

@class HAPAccessoryServerBrowser, NSDictionary, NSMutableArray;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;



@interface HMDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser

@property (nonatomic) BOOL accessoryPaired; // ivar: _accessoryPaired
@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) NSDictionary *demoData; // ivar: _demoData
@property (retain, nonatomic) NSMutableArray *servers; // ivar: _servers


-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(NSInteger)linkType;
-(id)_handleTestAccessoryGenerateNotification:(id)arg0 ;
-(id)_handleTestAccessoryReadValue:(id)arg0 ;
-(id)_handleTestAccessorySetReachability:(id)arg0 ;
-(id)_handleTestAccessorySetValue:(id)arg0 ;
-(id)_handleTestModeConfigRequest:(id)arg0 ;
-(void)appendDemoData:(id)arg0 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)discoverServer;
-(void)loadDemoData:(id)arg0 finalized:(BOOL)arg1 ;
-(void)resetDemoAccessory:(id)arg0 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;


@end


#endif