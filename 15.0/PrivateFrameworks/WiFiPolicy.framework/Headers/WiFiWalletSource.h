// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIWALLETSOURCE_H
#define WIFIWALLETSOURCE_H

@class NSString, NSMutableDictionary, PKPassLibrary, NSMutableSet;
@protocol WiFiAvailabilitySource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource>



@property (copy, nonatomic) id *changeHandler; // ivar: changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *networks; // ivar: _networks
@property (retain, nonatomic) PKPassLibrary *passLibrary; // ivar: _passLibrary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *relevancyHandler; // ivar: relevancyHandler
@property (retain, nonatomic) NSMutableSet *relevantPassIdentifiers; // ivar: _relevantPassIdentifiers
@property (readonly) Class superclass;


-(id)_createWiFiWalletPassFromPass:(id)arg0 ;
-(id)_networksWithIdentifier:(id)arg0 ;
-(id)candidateNetworks;
-(id)init;
-(id)initWithChangeHandler:(id)arg0 ;
-(id)relevantNetworks;
-(void)_addPass:(id)arg0 ;
-(void)_handlePassLibraryChange:(id)arg0 ;
-(void)_handleRelevantPassUpdate:(id)arg0 ;
-(void)_initializeWiFiPasses;
-(void)_issueRelevancyCallbackWithRelevantNetworks:(id)arg0 notRelevantNetworks:(id)arg1 ;
-(void)_passDidBecomeRelevant:(id)arg0 ;
-(void)_passLibraryDidBecomeRelevantNotification:(id)arg0 ;
-(void)_passLibraryDidChange:(id)arg0 ;
-(void)_removeRelevantPasses;
-(void)dealloc;


@end


#endif