// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBJSDATAPROVIDER_H
#define AMSUIWEBJSDATAPROVIDER_H

@class NSString;
@protocol AMSUIWebJSAppQueryManagerDelegate, AMSUIWebJSPropertiesDelegate;

#import <Foundation/Foundation.h>

#import "AMSUIWebJSAppQueryManager.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebJSProperties.h"
#import "AMSUIWebView.h"

@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSAppQueryManagerDelegate, AMSUIWebJSPropertiesDelegate>

 {
    AMSUIWebJSAppQueryManager *_appQueryManager;
}


@property (readonly, nonatomic) AMSUIWebJSAppQueryManager *appQueryManager;
@property (weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *otpIdentifier; // ivar: _otpIdentifier
@property (retain, nonatomic) AMSUIWebJSProperties *properties; // ivar: _properties
@property (readonly) Class superclass;
@property (weak, nonatomic) AMSUIWebView *webView; // ivar: _webView


-(BOOL)_canInteractWithJS;
-(BOOL)startOTPListener;
-(BOOL)stopOTPListener;
-(id)_syncPropertiesScriptWithProperties:(id)arg0 ;
-(id)createWebView;
-(id)initWithContext:(id)arg0 ;
-(id)loadPageModelWithInfo:(id)arg0 ;
-(id)postEvent:(id)arg0 options:(id)arg1 ;
-(id)runJSRequest:(id)arg0 ;
-(id)runSafariCallback:(id)arg0 ;
-(id)syncProperties;
-(void)_observeNotifications;
-(void)_postMediaQueryResultsChangeEventWithApps:(id)arg0 ;
-(void)_postSubscriptionChangedWithType:(NSInteger)arg0 ;
-(void)_purchaseDidSucceed:(id)arg0 ;
-(void)_safariDataUpdate:(id)arg0 ;
-(void)_subscriptionStatusChangeActivity:(id)arg0 ;
-(void)_subscriptionStatusChangeAppStore:(id)arg0 ;
-(void)_subscriptionStatusChangeMusic:(id)arg0 ;
-(void)_subscriptionStatusChangeNews:(id)arg0 ;
-(void)_subscriptionStatusChangeTV:(id)arg0 ;
-(void)_subscriptionStatusChangeiCloud:(id)arg0 ;
-(void)appQueryManager:(id)arg0 didReceiveApps:(id)arg1 ;
-(void)dealloc;
-(void)propertiesDidChange:(id)arg0 ;


@end


#endif