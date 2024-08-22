// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYBROWSINGMANAGER_H
#define HFACCESSORYBROWSINGMANAGER_H

@class HMAccessoryBrowser, NSString, NSArray, NSMutableSet, NSHashTable, SFDeviceDiscovery;
@protocol HMAccessoryBrowserDelegate;

#import <Foundation/Foundation.h>


@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate>



@property (retain, nonatomic) HMAccessoryBrowser *accessoryBrowser; // ivar: _accessoryBrowser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *discoveredHMAccessories;
@property (readonly, nonatomic) NSArray *discoveredSharingDevices;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBrowsing; // ivar: _isBrowsing
@property (retain, nonatomic) NSMutableSet *mutableDiscoveredSharingDevices; // ivar: _mutableDiscoveredSharingDevices
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) SFDeviceDiscovery *sharingDeviceBrowser; // ivar: _sharingDeviceBrowser
@property (readonly) Class superclass;


-(id)init;
-(void)accessoryBrowser:(id)arg0 didFindNewAccessory:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didRemoveNewAccessory:(id)arg1 ;
-(void)addBrowsingObserver:(id)arg0 ;
-(void)removeBrowsingObserver:(id)arg0 ;
-(void)startSearchingForNewAccessories;
-(void)stopSearchingForNewAccessoriesWithError:(id)arg0 ;


@end


#endif