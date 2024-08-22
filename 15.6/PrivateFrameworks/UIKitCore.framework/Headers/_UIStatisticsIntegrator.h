// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATISTICSINTEGRATOR_H
#define _UISTATISTICSINTEGRATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIStatisticsIntegrator : NSObject {
    NSObject<OS_dispatch_queue> *_reportingQueue;
}




+(id)sharedInstance;
+(void)createSharedInstanceIfNecessary;
+(void)setSharedInstance:(id)arg0 ;
-(id)init;
-(void)batchRecord:(id)arg0 ;
-(void)incrementValueBy:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)recordDistributionTime:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)recordDistributionValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)resetDistributionForKey:(id)arg0 ;
-(void)resetDistributionToValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)resetValueForKey:(id)arg0 ;
-(void)setValue:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif