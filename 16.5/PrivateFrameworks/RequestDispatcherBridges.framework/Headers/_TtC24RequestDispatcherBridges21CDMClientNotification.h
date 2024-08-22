// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES21CDMCLIENTNOTIFICATION_H
#define _TTC24REQUESTDISPATCHERBRIDGES21CDMCLIENTNOTIFICATION_H

@protocol CDMClientDelegate, CDMTrialAssetsDelegate;

#import <Foundation/Foundation.h>


@interface _TtC24RequestDispatcherBridges21CDMClientNotification : NSObject <CDMClientDelegate, CDMTrialAssetsDelegate>

 {
    ? cdmProxy;
}




-(id)init;
-(void)assetsAvailable;
-(void)assetsAvailableForLocale:(id)arg0 ;
-(void)assetsUnavailable;
-(void)processCDMNluRequestCallback:(id)arg0 ;
-(void)processCDMNluRequestErrorCallback:(id)arg0 error:(id)arg1 ;


@end


#endif