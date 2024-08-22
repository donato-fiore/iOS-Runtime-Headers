// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _STKUSSDRESPONSEPROVIDER_H
#define _STKUSSDRESPONSEPROVIDER_H

@class CoreTelephonyClient, NSDictionary, NSString;
@protocol STKAlertSessionResponseProvider, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
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


-(id)initWithQueue:(id)arg0 telephonyClient:(id)arg1 options:(id)arg2 logger:(id)arg3 ;
-(void)dealloc;
-(void)sendResponse:(NSInteger)arg0 ;
-(void)sendResponse:(NSInteger)arg0 withStringResult:(id)arg1 ;


@end


#endif