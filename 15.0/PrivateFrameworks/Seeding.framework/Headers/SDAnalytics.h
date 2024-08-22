// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SDANALYTICS_H
#define SDANALYTICS_H


#import <Foundation/Foundation.h>


@interface SDAnalytics : NSObject



+(void)deviceDidDeclineLegalAgreement;
+(void)deviceDidEnrollInSeeding;
+(void)deviceDidUnenrollFromSeeding;


@end


#endif