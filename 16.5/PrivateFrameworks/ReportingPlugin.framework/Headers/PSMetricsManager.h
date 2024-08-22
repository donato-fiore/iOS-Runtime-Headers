// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSMETRICSMANAGER_H
#define PSMETRICSMANAGER_H


#import <Foundation/Foundation.h>

#import "_PSMetricsManagerInternal.h"

@interface PSMetricsManager : NSObject

@property (readonly) _PSMetricsManagerInternal *underlyingObject; // ivar: _underlyingObject


+(void)recordWithAppInference:(id)arg0 ;
+(void)recordWithFeedback:(id)arg0 ;
+(void)recordWithPeopleInference:(id)arg0 ;


@end


#endif