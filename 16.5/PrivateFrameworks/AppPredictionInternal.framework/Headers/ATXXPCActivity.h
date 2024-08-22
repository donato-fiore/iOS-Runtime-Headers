// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXXPCACTIVITY_H
#define ATXXPCACTIVITY_H

@class NSString;
@protocol ATXActivityDeferrableProtocol, ATXActivityContinuousProtocol, OS_xpc_object, OS_os_log;

#import <Foundation/Foundation.h>


@interface ATXXPCActivity : NSObject <ATXActivityDeferrableProtocol, ATXActivityContinuousProtocol>

 {
    NSObject<OS_xpc_object> *_activity;
    NSString *_name;
    NSObject<OS_os_log> *_handle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)didDefer;
-(BOOL)setContinue;
-(BOOL)setDone;
-(BOOL)shouldDefer;
-(id)init;
-(id)initWithActivity:(id)arg0 name:(id)arg1 ;
-(id)initWithActivity:(id)arg0 name:(id)arg1 logHandle:(id)arg2 ;


@end


#endif