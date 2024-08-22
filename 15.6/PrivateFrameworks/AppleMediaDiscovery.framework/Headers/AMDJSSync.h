// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDJSSYNC_H
#define AMDJSSYNC_H


#import <Foundation/Foundation.h>


@interface AMDJSSync : NSObject



+(id)dailyDataUpdate:(id)arg0 forStoreFrontId:(unsigned int)arg1 error:(*id)arg2 ;
+(id)runSync:(id)arg0 withCallUUID:(id)arg1 error:(*id)arg2 ;
+(void)updateArcadeUsageFeature:(*id)arg0 ;


@end


#endif