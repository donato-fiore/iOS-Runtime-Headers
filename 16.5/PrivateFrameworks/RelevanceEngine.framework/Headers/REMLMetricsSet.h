// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLMETRICSSET_H
#define REMLMETRICSSET_H

@class NSMutableDictionary, NSMutableSet;
@protocol REMLMetricsProvider;

#import <Foundation/Foundation.h>


@interface REMLMetricsSet : NSObject <REMLMetricsProvider>

 {
    NSMutableDictionary *metricsIndex;
    NSMutableSet *metricsSet;
}




-(BOOL)addMetrics:(id)arg0 ;
-(id)getMetricsByName:(id)arg0 ;
-(id)init;
-(id)name;
-(void)reset;
-(void)updateMetricsFromFeatures:(id)arg0 prediction:(id)arg1 truth:(id)arg2 ;


@end


#endif