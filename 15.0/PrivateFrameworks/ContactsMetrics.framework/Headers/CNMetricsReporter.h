// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMETRICSREPORTER_H
#define CNMETRICSREPORTER_H


#import <Foundation/Foundation.h>


@interface CNMetricsReporter : NSObject



+(id)log;
+(void)logDatabaseResolution:(id)arg0 ;
+(void)sendDictionary:(id)arg0 forEvent:(id)arg1 ;
+(void)sendDictionary:(id)arg0 forEvent:(id)arg1 andLog:(BOOL)arg2 ;
-(id)compoundKeyForEvent:(id)arg0 ;
-(id)eventKeyPrefix;
-(void)logSimpleEvent:(id)arg0 forApplication:(id)arg1 andLog:(BOOL)arg2 ;
-(void)sendDictionary:(id)arg0 forEvent:(id)arg1 andLog:(BOOL)arg2 ;


@end


#endif