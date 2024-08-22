// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOCUSAPPCONFIGURATIONCONTEXTMONITOR_H
#define SBFOCUSAPPCONFIGURATIONCONTEXTMONITOR_H

@class NSDictionary, DNDModeConfigurationService, NSString;
@protocol DNDModeConfigurationServiceListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBFocusAppConfigurationContextMonitor : NSObject <DNDModeConfigurationServiceListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    NSDictionary *_lock_prefixes;
    DNDModeConfigurationService *_configurationService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)targetContentIdentifierPrefixForBundleIdentifier:(id)arg0 ;
-(void)_updatePrefixes:(id)arg0 ;
-(void)modeConfigurationService:(id)arg0 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)arg1 ;


@end


#endif