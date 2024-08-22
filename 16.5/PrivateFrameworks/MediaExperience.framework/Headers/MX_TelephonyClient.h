// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MX_TELEPHONYCLIENT_H
#define MX_TELEPHONYCLIENT_H

@class CoreTelephonyClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MX_TelephonyClient : NSObject {
    CoreTelephonyClient *mClient;
    NSObject<OS_dispatch_queue> *mAccessQueue;
}




-(BOOL)getIsInHomeCountry;
-(id)copyCountryNameFromOperatorCountryBundle;
-(id)copyIsoCountryCodeForMCC;
-(id)init;
-(void)dealloc;


@end


#endif