// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDAPPLICATIONINFORMER_H
#define SBDASHBOARDAPPLICATIONINFORMER_H

@class NSHashTable, NSString;
@protocol CSApplicationInforming;

#import <Foundation/Foundation.h>


@interface SBDashBoardApplicationInformer : NSObject <CSApplicationInforming>

 {
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg0 ;
-(BOOL)isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg0 ;
-(BOOL)isBundleIdentifierClock:(id)arg0 ;
-(BOOL)isBundleIdentifierUserVisible:(id)arg0 ;
-(BOOL)isBundleIdentifierWallet:(id)arg0 ;
-(BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_screenTimeNotificationPolicyDidChange:(id)arg0 ;
-(void)addApplicationInformationObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeApplicationInformationObserver:(id)arg0 ;


@end


#endif