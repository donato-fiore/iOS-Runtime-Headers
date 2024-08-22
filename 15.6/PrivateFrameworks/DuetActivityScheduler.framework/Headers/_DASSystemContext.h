// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DASSYSTEMCONTEXT_H
#define _DASSYSTEMCONTEXT_H

@protocol _CDLocalContext, OS_os_log;

#import <Foundation/Foundation.h>


@interface _DASSystemContext : NSObject

@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (retain, nonatomic) NSObject<OS_os_log> *dasSystemContextLog; // ivar: _dasSystemContextLog
@property (nonatomic) NSInteger inexpensiveNetworkPathStatus; // ivar: _inexpensiveNetworkPathStatus
@property (nonatomic) NSInteger networkPathStatus; // ivar: _networkPathStatus


+(id)defaultInexpensivePathEvaluator;
+(id)defaultPathEvaluator;
+(id)initWithContext:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)allowDiscretionaryWorkForBackgroundTask:(id)arg0 withParameters:(id)arg1 ;
-(BOOL)allowDiscretionaryWorkForUtilityTask:(id)arg0 withParameters:(id)arg1 ;
-(BOOL)allowsDiscretionaryWorkForTask:(id)arg0 withPriority:(NSUInteger)arg1 withParameters:(id)arg2 ;
-(BOOL)isApplicationFocalForPushTask:(id)arg0 ;
-(BOOL)isInexpensiveNetworkAvailable;
-(BOOL)isNetworkAvailable;
-(id)init;
-(id)keyPathForPriority:(NSUInteger)arg0 ;
-(void)addNotificationHandlerForTaskName:(id)arg0 withPriority:(NSUInteger)arg1 withParameters:(id)arg2 withHandler:(id)arg3 ;
-(void)updateSystemConstraintsWithParameters:(id)arg0 ;


@end


#endif