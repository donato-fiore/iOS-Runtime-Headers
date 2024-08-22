// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIVPNSPECIFIERGENERATOR_H
#define PSUIVPNSPECIFIERGENERATOR_H

@class NEVPNConnectivityManager;
@protocol NEVPNConnectivityManagerDelegate, OS_dispatch_queue, PSUIVPNSpecifierGeneratorDelegate;

#import <Foundation/Foundation.h>

#import "PSUIVPNStateSnapshot.h"

@interface PSUIVPNSpecifierGenerator : NSObject <NEVPNConnectivityManagerDelegate>



@property (retain, nonatomic) PSUIVPNStateSnapshot *_currentSnapshot; // ivar: __currentSnapshot
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue; // ivar: __loadingQueue
@property (retain, nonatomic) NEVPNConnectivityManager *_vpnConnectivityManager; // ivar: __vpnConnectivityManager
@property (weak, nonatomic) NSObject<PSUIVPNSpecifierGeneratorDelegate> *delegate; // ivar: _delegate


-(id)_vpnStatus:(id)arg0 ;
-(id)_vpnStatusString:(id)arg0 ;
-(id)initWithLoadingQueue:(id)arg0 ;
-(id)specifier;
-(id)vpnSpecifierForVisibilityStyleLink;
-(id)vpnSpecifierForVisibilityStyleToggle;
-(void)_reloadVPNStateWithCompletion:(id)arg0 ;
-(void)_setVPNStatus:(id)arg0 specifier:(id)arg1 ;
-(void)connectivityManagerDidChange:(id)arg0 ;
-(void)lazyLoadBundle:(id)arg0 ;
-(void)reloadVPNStateWithCompletion:(id)arg0 ;


@end


#endif