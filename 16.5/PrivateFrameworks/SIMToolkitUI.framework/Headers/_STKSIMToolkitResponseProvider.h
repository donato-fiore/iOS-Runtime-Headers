// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _STKSIMTOOLKITRESPONSEPROVIDER_H
#define _STKSIMTOOLKITRESPONSEPROVIDER_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSDictionary, NSString;
@protocol STKAlertSessionResponseProvider, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface _STKSIMToolkitResponseProvider : NSObject <STKAlertSessionResponseProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_context;
    NSDictionary *_options;
    BOOL _hasSentResponse;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSentResponse;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 telephonyClient:(id)arg1 context:(id)arg2 options:(id)arg3 logger:(id)arg4 ;
-(struct __CFString *)_responseFromResponseType:(NSInteger)arg0 ;
-(void)sendResponse:(NSInteger)arg0 ;
-(void)sendResponse:(NSInteger)arg0 withBOOLResult:(BOOL)arg1 ;
-(void)sendResponse:(NSInteger)arg0 withStringResult:(id)arg1 ;
-(void)sendSuccessWithSelectedIndex:(NSUInteger)arg0 ;


@end


#endif