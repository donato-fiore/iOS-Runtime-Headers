// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPSESSIONMODELOGGINGHELPER_H
#define ATXAPPSESSIONMODELOGGINGHELPER_H


#import <Foundation/Foundation.h>


@interface ATXAppSessionModeLoggingHelper : NSObject



-(BOOL)shouldCoalesceLaunch:(id)arg0 nextLaunch:(id)arg1 ;
-(id)appLaunchesSinceDate:(id)arg0 ;
-(id)coalesceAppLaunches:(id)arg0 ;
-(id)stripStoreEvent:(id)arg0 ;


@end


#endif