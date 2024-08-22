// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBUSERALERTSERVER_H
#define DBUSERALERTSERVER_H

@class NSString, NSMutableArray, NSMutableDictionary, URTAlertService;
@protocol URTAlertServiceDelegate, BSInvalidatable, DBAppAlertPresenting, DBSystemAlertPresenting;

#import <Foundation/Foundation.h>

#import "DBEnvironmentConfiguration.h"

@interface DBUserAlertServer : NSObject <URTAlertServiceDelegate, BSInvalidatable>



@property (weak, nonatomic) NSObject<DBAppAlertPresenting> *appPresenter; // ivar: _appPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *pendingSystemViewControllers; // ivar: _pendingSystemViewControllers
@property (readonly, nonatomic) NSMutableDictionary *pendingViewControllersForAppBundleID; // ivar: _pendingViewControllersForAppBundleID
@property (readonly, nonatomic) URTAlertService *service; // ivar: _service
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<DBSystemAlertPresenting> *systemPresenter; // ivar: _systemPresenter


-(id)alertViewControllerForBundleID:(id)arg0 ;
-(id)initWithEnvironmentConfiguration:(id)arg0 ;
-(void)_dismissSystemViewController:(id)arg0 ;
-(void)_dismissViewController:(id)arg0 overApplication:(id)arg1 ;
-(void)_presentSystemViewController:(id)arg0 ;
-(void)_presentViewController:(id)arg0 overApplication:(id)arg1 ;
-(void)alertService:(id)arg0 wantsDismissalForAlert:(id)arg1 ;
-(void)alertService:(id)arg0 wantsPresentationForAlert:(id)arg1 ;
-(void)invalidate;


@end


#endif