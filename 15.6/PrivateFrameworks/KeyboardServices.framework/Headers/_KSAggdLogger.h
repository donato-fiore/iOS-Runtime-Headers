// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSAGGDLOGGER_H
#define _KSAGGDLOGGER_H


#import <Foundation/Foundation.h>


@interface _KSAggdLogger : NSObject



+(void)addValue:(NSInteger)arg0 forDistributionKey:(id)arg1 ;
+(void)addValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
+(void)clearScalarKey:(id)arg0 ;
+(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;


@end


#endif