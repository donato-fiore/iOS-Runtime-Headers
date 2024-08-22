// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ARSESSIONMETRICSDEFAULTREPORTER_H
#define _ARSESSIONMETRICSDEFAULTREPORTER_H

@class NSString;
@protocol ARSessionMetricsReporting;

#import <Foundation/Foundation.h>


@interface _ARSessionMetricsDefaultReporter : NSObject <ARSessionMetricsReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)postDarwinNotification:(id)arg0 ;
-(void)sendEvent:(id)arg0 dictionary:(id)arg1 ;


@end


#endif