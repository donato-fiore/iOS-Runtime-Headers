// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDAEMONHANDLER_H
#define SBDAEMONHANDLER_H


#import <Foundation/Foundation.h>


@interface SBDaemonHandler : NSObject



+(BOOL)addRequest:(id)arg0 forKey:(id)arg1 forDaemonPid:(int)arg2 ;
+(id)stateDescription;
+(void)initialize;
+(void)noteDaemonCanceled:(id)arg0 ;
+(void)removeRequestForKey:(id)arg0 forDaemonPid:(int)arg1 ;


@end


#endif