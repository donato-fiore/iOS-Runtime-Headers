// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POANALYTICS_H
#define POANALYTICS_H


#import <Foundation/Foundation.h>


@interface POAnalytics : NSObject



+(void)analyticsForLoginConfiguration:(id)arg0 ;
+(void)analyticsForLoginManager:(id)arg0 ;
+(void)analyticsForLoginType:(id)arg0 result:(id)arg1 ;
+(void)analyticsForPasswordChange:(BOOL)arg0 credentialNeeded:(BOOL)arg1 result:(BOOL)arg2 ;
+(void)analyticsForRegistrationType:(id)arg0 options:(NSUInteger)arg1 result:(NSInteger)arg2 ;
+(void)analyticsForStatus;
+(void)analyticsForTestMessages;


@end


#endif