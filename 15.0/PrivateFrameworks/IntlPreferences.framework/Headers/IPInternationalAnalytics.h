// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPINTERNATIONALANALYTICS_H
#define IPINTERNATIONALANALYTICS_H


#import <Foundation/Foundation.h>


@interface IPInternationalAnalytics : NSObject



+(void)reportGeneralStatistics;
+(void)reportPerAppLanguageStatistics;
+(void)reportStatistics;


@end


#endif