// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMGESTUREUSAGEMETRIC_H
#define SBSYSTEMGESTUREUSAGEMETRIC_H

@class NSMutableDictionary, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBSystemGestureUsageMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSMutableDictionary *_typeToMetric;
}


@property (nonatomic) NSUInteger currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif