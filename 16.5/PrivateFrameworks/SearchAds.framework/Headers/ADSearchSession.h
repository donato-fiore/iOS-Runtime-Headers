// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADSEARCHSESSION_H
#define ADSEARCHSESSION_H

@class NSString, APOdmlSettings;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ADCapService.h"
#import "ADParameterFactory.h"

@interface ADSearchSession : NSObject {
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
}


@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (nonatomic) int appsRank; // ivar: _appsRank
@property (retain, nonatomic) NSString *campaignNamespace; // ivar: _campaignNamespace
@property (retain, nonatomic) ADCapService *capService; // ivar: _capService
@property (retain, nonatomic) NSString *clientRequestID; // ivar: _clientRequestID
@property (retain, nonatomic) NSObject *notificationObserver; // ivar: _notificationObserver
@property (nonatomic) BOOL notificationReceivedAndWaiting; // ivar: _notificationReceivedAndWaiting
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *odmlQueue; // ivar: _odmlQueue
@property (retain) APOdmlSettings *odmlSettings; // ivar: _odmlSettings
@property (retain, nonatomic) ADParameterFactory *parameterFactory; // ivar: _parameterFactory


-(BOOL)startUpdatingIDs;
-(id)adParameters;
-(id)initWithAppID:(id)arg0 appVersion:(id)arg1 appsRank:(int)arg2 ;
-(id)initWithAppID:(id)arg0 appVersion:(id)arg1 appsRank:(int)arg2 storeFront:(id)arg3 ;
-(id)populateStoreFrontLanguageLocale:(id)arg0 ;
-(id)sponsoredSearchRequestForLanguageLocale:(id)arg0 ;
-(id)userTargetingProperties;
-(void)_setODMLProperties:(id)arg0 withSettings:(id)arg1 ;
-(void)dealloc;
-(void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestSponsoredSearchURL:(id)arg0 ;
-(void)requestUserTargetingIdentifier:(id)arg0 ;
-(void)searchObjectForCriteria:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif