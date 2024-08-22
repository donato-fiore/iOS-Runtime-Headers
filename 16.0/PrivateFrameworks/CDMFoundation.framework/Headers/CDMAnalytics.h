// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMANALYTICS_H
#define CDMANALYTICS_H


#import <Foundation/Foundation.h>


@interface CDMAnalytics : NSObject



+(id)constructContextUpdateOutcome:(int)arg0 numTurnsRollback:(int)arg1 success:(BOOL)arg2 locale:(id)arg3 ;
+(void)recordCDMSetupFailureEvent:(id)arg0 withError:(id)arg1 ;
+(void)recordCDMSetupSuccessEvent:(id)arg0 ;
+(void)recordContextUpdateOutcome:(int)arg0 numTurnsRollback:(int)arg1 success:(BOOL)arg2 locale:(id)arg3 ;
+(void)recordGraphFailureEvent:(id)arg0 withError:(id)arg1 ;
+(void)recordGraphSuccessEvent:(id)arg0 withTopParserId:(id)arg1 ;
+(void)recordReceivedNluRequestEvent:(id)arg0 withNluRequest:(id)arg1 ;


@end


#endif