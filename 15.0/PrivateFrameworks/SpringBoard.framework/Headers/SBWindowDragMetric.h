// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWDRAGMETRIC_H
#define SBWINDOWDRAGMETRIC_H

@class NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBWindowDragMetric : NSObject <SBFAnalyticsBackendEventHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;


@end


#endif