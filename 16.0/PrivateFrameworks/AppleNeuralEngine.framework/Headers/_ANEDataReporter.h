// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANEDATAREPORTER_H
#define _ANEDATAREPORTER_H


#import <Foundation/Foundation.h>


@interface _ANEDataReporter : NSObject



+(id)analyticsKey:(id)arg0 ;
+(id)reportClient:(id)arg0 modelName:(id)arg1 ;
+(void)addValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;


@end


#endif