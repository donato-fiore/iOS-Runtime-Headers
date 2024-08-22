// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROBUNDLEHANDLER_H
#define PROBUNDLEHANDLER_H

@class NSBundle, NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing, PROPlugInRegistering, PROBundleHandlerDelegate, PROVersionedAPIAccess, PKPlugIn, PROPluginDynamicRegCompletion;

#import <Foundation/Foundation.h>

#import "PROPlugInFirewall.h"

@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing>

 {
    NSBundle *bundle;
    NSMutableArray *plugIns;
    NSMutableDictionary *groups;
    id<PROPlugInRegistering> *principalClassInstance;
    ? bundleFlags;
    NSArray *requestedProtocols;
    id<PROBundleHandlerDelegate> *delegate;
    id<PROVersionedAPIAccess> *apiManager;
    PROPlugInFirewall *apiAccessPoint;
    id<PKPlugIn> *pluginKitPlug;
    id<PROPluginDynamicRegCompletion> *setupCallbackObject;
    id *deferralCompletionBlock;
    BOOL deferred;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_plugInHasReservedUUID:(id)arg0 ;
-(BOOL)dynamicPluginRequestedProtocolArray:(*id)arg0 groupArray:(*id)arg1 plugInArray:(*id)arg2 ;
-(BOOL)isDeferred;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBundleHandler:(id)arg0 ;
-(BOOL)isPrincipalClassAvailable;
-(BOOL)loadingInProMSRendererTool;
-(BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg0 ;
-(BOOL)shouldDeferLoading;
-(id)apiForProtocol:(id)arg0 ;
-(id)apiManager;
-(id)apiManagerForPlugInInstances;
-(id)delegate;
-(id)getBundle;
-(id)groupsDictionary;
-(id)initWithBundle:(id)arg0 ;
-(id)plugInGroupWithUUID:(struct __CFUUID *)arg0 ;
-(id)plugIns;
-(id)pluginKitPlug;
-(id)principalClassInstance;
-(void)addPlugIn:(id)arg0 ;
-(void)completeRegistrationWithGroups:(*id)arg0 plugIns:(*id)arg1 requestedProtocols:(*id)arg2 ;
-(void)dealloc;
-(void)finishRegisteringPlugIns;
-(void)loadDeferredPlugins;
-(void)notifyDeferralComplete;
-(void)plugIn:(id)arg0 didError:(id)arg1 ;
-(void)plugInCouldNotInitialize:(id)arg0 ;
-(void)plugInFirewall:(id)arg0 receivedBadMessage:(SEL)arg1 ;
-(void)registerDynamicPlugInsAsynch:(id)arg0 ;
-(void)registerPlugIns;
-(void)reportError:(id)arg0 ;
-(void)setAPIManager:(id)arg0 ;
-(void)setDeferralNotification:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPluginKitPlug:(id)arg0 ;
-(void)setRegistrationCallbackObject:(id)arg0 ;


@end


#endif