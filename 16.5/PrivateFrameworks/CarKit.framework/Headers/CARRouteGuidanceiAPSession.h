// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARROUTEGUIDANCEIAPSESSION_H
#define CARROUTEGUIDANCEIAPSESSION_H

@class NSString, IAPNavigation, NSMapTable;
@protocol IAPNavigationDelegate;

#import <Foundation/Foundation.h>


@interface CARRouteGuidanceiAPSession : NSObject <IAPNavigationDelegate>



@property (retain, nonatomic) NSString *currentNavigationOwnerIdentifier; // ivar: _currentNavigationOwnerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IAPNavigation *iapNavigation; // ivar: _iapNavigation
@property (retain, nonatomic) NSMapTable *navigationAccessories; // ivar: _navigationAccessories
@property (readonly) Class superclass;


+(id)localizedNameForIdentifier:(id)arg0 ;
-(id)init;
-(void)IAPNavigationAccessory:(id)arg0 didDisableNavigationUpdatesForComponent:(id)arg1 ;
-(void)IAPNavigationAccessory:(id)arg0 didEnableNavigationUpdatesForComponent:(id)arg1 ;
-(void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg0 ;
-(void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg0 ;
-(void)_setupiAPNavigation;
-(void)_updateAccessoryComponentsWithGuidanceInfo:(id)arg0 ;
-(void)updateNavigationGuidanceInfo;


@end


#endif