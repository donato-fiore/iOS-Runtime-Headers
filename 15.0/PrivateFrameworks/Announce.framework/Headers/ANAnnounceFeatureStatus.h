// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANANNOUNCEFEATURESTATUS_H
#define ANANNOUNCEFEATURESTATUS_H


#import <Foundation/Foundation.h>


@interface ANAnnounceFeatureStatus : NSObject



+(BOOL)isAnnounceEnabled;
+(BOOL)isEnabled;
+(BOOL)isEnabledForPersonalDevices;
+(BOOL)shouldStopPlaybackOnSiriActivation;


@end


#endif