// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EAWIFIUNCONFIGUREDACCESSORYBROWSER_H
#define EAWIFIUNCONFIGUREDACCESSORYBROWSER_H

@class NSPredicate, NSSet;
@protocol EAWiFiUnconfiguredAccessoryBrowserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {
    BOOL __debugLog;
}


@property (retain) NSPredicate *accessorySearchPredicate; // ivar: _accessorySearchPredicate
@property (weak, nonatomic) NSObject<EAWiFiUnconfiguredAccessoryBrowserDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSSet *unconfiguredAccessories; // ivar: _unconfiguredAccessories


-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_handleBrowserDidUpdateState:(id)arg0 ;
-(void)_handleBrowserFinishedConfiguring:(id)arg0 ;
-(void)_handleNewAccessoriesNotification:(id)arg0 ;
-(void)_handlePurgeAccessoriesSetNotification:(id)arg0 ;
-(void)_handleRemovedAccessoriesNotification:(id)arg0 ;
-(void)configureAccessory:(id)arg0 withConfigurationUIOnViewController:(id)arg1 ;
-(void)dealloc;
-(void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg0 ;
-(void)stopSearchingForUnconfiguredAccessories;


@end


#endif