// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONLAUNCHALERTEVALUATORFORNETWORKBASEDALERTITEMS_H
#define SBAPPLICATIONLAUNCHALERTEVALUATORFORNETWORKBASEDALERTITEMS_H

@class NSString;
@protocol SBApplicationLaunchAlertEvaluator;

#import <Foundation/Foundation.h>

#import "SBAirplaneModeController.h"
#import "SBTelephonyManager.h"

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator>

 {
    SBAirplaneModeController *_airplaneModeController;
    SBTelephonyManager *_telephonyManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)shouldShowLaunchAlertForApplication:(id)arg0 ;
-(id)_airplaneModeController;
-(id)_telephonyManager;
-(id)init;
-(id)initWithAirplaneModeController:(id)arg0 telephonyManager:(id)arg1 ;


@end


#endif