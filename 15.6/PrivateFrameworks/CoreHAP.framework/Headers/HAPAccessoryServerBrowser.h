// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORYSERVERBROWSER_H
#define HAPACCESSORYSERVERBROWSER_H

@class HMFObject, HMFUnfairLock, NSArray, NSString, NSMutableSet;
@protocol HAPAccessoryServerNotification, HAPKeyStore, OS_dispatch_queue;


#import "HAPMetricsDispatcher.h"

@interface HAPAccessoryServerBrowser : HMFObject <HAPAccessoryServerNotification>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HAPKeyStore> *keyStore; // ivar: _keyStore
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (readonly, nonatomic) HAPMetricsDispatcher *logEvent; // ivar: _logEvent
@property (retain, nonatomic) NSMutableSet *pairedAccessoryIdentifiers; // ivar: _pairedAccessoryIdentifiers
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic) BOOL remoteBrowsingEnabled; // ivar: _remoteBrowsingEnabled
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)isPaired:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)deRegisterAccessoryWithIdentifier:(id)arg0 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)indicateNotificationFromServer:(id)arg0 notifyType:(NSUInteger)arg1 withDictionary:(id)arg2 ;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)registerPairedAccessoryWithIdentifier:(id)arg0 ;
-(void)resetPairedAccessories;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)startConfirmingPairedAccessoryReachability;
-(void)startDiscoveringAccessoryServers;
-(void)stopConfirmingPairedAccessoryReachability;
-(void)stopDiscoveringAccessoryServers;


@end


#endif