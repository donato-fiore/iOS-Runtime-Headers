// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUSERMETRICSLOGGERTARGETPET_H
#define ATXUSERMETRICSLOGGERTARGETPET_H

@class NSString;
@protocol ATXUserMetricsLoggerTarget;

#import <Foundation/Foundation.h>


@interface ATXUserMetricsLoggerTargetPET : NSObject <ATXUserMetricsLoggerTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)logMessage:(id)arg0 ;


@end


#endif