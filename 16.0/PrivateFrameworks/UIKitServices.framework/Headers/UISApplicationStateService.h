// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISAPPLICATIONSTATESERVICE_H
#define UISAPPLICATIONSTATESERVICE_H

@class BSServiceConnectionListener, FBSSerialQueue, NSString;
@protocol BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface, UISApplicationStateServiceDelegate;

#import <Foundation/Foundation.h>


@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface>

 {
    BSServiceConnectionListener *_listener;
    FBSSerialQueue *_calloutQueue;
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISApplicationStateServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg0 description:(id)arg1 ;
-(BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg0 description:(id)arg1 legacyEntitlement:(id)arg2 ;
-(id)_dataSourceForApplicationBundleIdentifier:(id)arg0 ;
-(id)_operatingBundleIdentifier;
-(id)init;
-(id)initWithCalloutQueue:(id)arg0 ;
-(void)badgeValueWithCompletion:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)nextWakeIntervalSinceReferenceDateWithCompletion:(id)arg0 ;
-(void)setBadgeNumber:(id)arg0 ;
-(void)setBadgeString:(id)arg0 ;
-(void)setBadgeValue:(id)arg0 ;
-(void)setMinimumBackgroundFetchInterval:(id)arg0 ;
-(void)setNextWakeIntervalSinceReferenceDate:(id)arg0 ;
-(void)setUsesBackgroundNetwork:(id)arg0 ;
-(void)usesBackgroundNetworkWithCompletion:(id)arg0 ;


@end


#endif