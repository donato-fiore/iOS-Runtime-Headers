// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDDIAGNOSTICDATAREPORTER_H
#define _CDDIAGNOSTICDATAREPORTER_H


#import <Foundation/Foundation.h>


@interface _CDDiagnosticDataReporter : NSObject



+(void)addValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
+(void)clearDistributionKey:(id)arg0 ;
+(void)clearScalarKey:(id)arg0 ;
+(void)pushValue:(CGFloat)arg0 forDistributionKey:(id)arg1 ;
+(void)setValue:(CGFloat)arg0 forDistributionKey:(id)arg1 ;
+(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
+(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 limitingSigDigs:(NSUInteger)arg2 ;


@end


#endif