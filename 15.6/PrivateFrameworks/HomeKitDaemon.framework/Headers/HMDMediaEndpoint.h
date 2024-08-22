// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAENDPOINT_H
#define HMDMEDIAENDPOINT_H

@class HMFObject, NSArray, NSString, NSSet, NSMutableArray;
@protocol HMFLogging, HMFLocking, OS_dispatch_queue;


#import "HMDMediaBrowser.h"

@interface HMDMediaEndpoint : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, nonatomic) NSArray *advertisements;
@property (weak) HMDMediaBrowser *browser; // ivar: _browser
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) unsigned int connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *void externalDevice;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *logID; // ivar: _logID
@property (retain, nonatomic) NSSet *outputDeviceIdentifiers; // ivar: _outputDeviceIdentifiers
@property (retain, nonatomic) NSMutableArray *pendingBlocks; // ivar: _pendingBlocks
@property (readonly) *void retainedEndpoint; // ivar: _retainedEndpoint
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(*void)copyOrigin;
-(BOOL)doesContainAnyAccessory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpoint:(*void)arg0 ;
-(id)initWithEndpoint:(*void)arg0 ;
-(id)logIdentifier;
-(void)_connectWithCompletionHandler:(id)arg0 ;
-(void)_getPlaybackStateWithCompletionHandler:(id)arg0 ;
-(void)_notifyPendingBlocksOfError:(id)arg0 ;
-(void)_setPlaybackState:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)_updateOutputDeviceIdentifiers;
-(void)_updateOutputDevicesAndConnectWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromEndpoint:(*void)arg0 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg0 withCompletion:(id)arg1 ;
-(void)getPlaybackStateWithCompletionHandler:(id)arg0 ;
-(void)registerForNowPlayingUpdates:(BOOL)arg0 ;
-(void)setPlaybackState:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)updateOutputDevicesAndConnectWithCompletionHandler:(id)arg0 ;
-(void)updateWithEndpoint:(id)arg0 ;


@end


#endif