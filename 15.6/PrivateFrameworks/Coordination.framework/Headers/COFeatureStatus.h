// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COFEATURESTATUS_H
#define COFEATURESTATUS_H


#import <Foundation/Foundation.h>


@interface COFeatureStatus : NSObject



+(BOOL)isCapabilityEnabled;
+(BOOL)isCoordinationEnabled;
+(BOOL)isMobileTimerEnabled;
+(BOOL)isStateEnabled;


@end


#endif