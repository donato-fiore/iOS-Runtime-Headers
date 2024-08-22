// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBANALYTICSAGGDINTERFACE_H
#define SBANALYTICSAGGDINTERFACE_H


#import <Foundation/Foundation.h>


@interface SBAnalyticsAggdInterface : NSObject



+(id)sharedInstance;
-(void)addValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
-(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;


@end


#endif