// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONRATELIMITER_H
#define WFACTIONRATELIMITER_H

@class NSDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFActionRateLimiter : NSObject

@property (retain, nonatomic) NSDictionary *attempts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedInstance;
+(void)performAction:(id)arg0 onQueue:(id)arg1 withBlock:(id)arg2 ;
-(id)init;
-(id)initWithUserDefaults:(id)arg0 ;
-(void)modify:(id)arg0 ;


@end


#endif