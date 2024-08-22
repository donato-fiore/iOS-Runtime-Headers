// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSETTINGSVIEWPROVIDER_H
#define WFSETTINGSVIEWPROVIDER_H

@class NSMapTable, NSString;
@protocol WFNetworkViewProvider;

#import <Foundation/Foundation.h>

#import "WFSettingsController.h"

@interface WFSettingsViewProvider : NSObject <WFNetworkViewProvider>



@property (retain, nonatomic) NSMapTable *credentialsViewControllerMap; // ivar: _credentialsViewControllerMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFSettingsController *settingsController; // ivar: _settingsController
@property (readonly) Class superclass;


-(id)certificateViewControllerWithContext:(id)arg0 ;
-(id)credentialsViewControllerWithContext:(id)arg0 ;
-(id)init;
-(id)networkDetailsViewControllerWithContext:(id)arg0 ;
-(id)networkErrorViewControllerWithContext:(id)arg0 ;
-(id)otherNetworkViewControllerWithContext:(id)arg0 appearanceProxy:(id)arg1 ;
-(void)didDismissNetworkViewController:(id)arg0 forContext:(id)arg1 ;


@end


#endif