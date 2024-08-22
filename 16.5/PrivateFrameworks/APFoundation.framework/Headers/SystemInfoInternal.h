// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSTEMINFOINTERNAL_H
#define SYSTEMINFOINTERNAL_H


#import <Foundation/Foundation.h>


@interface SystemInfoInternal : NSObject



+(id)bundleIdentifier;
+(id)deviceModel;
+(id)locale;
+(id)longBuildVersion;
+(id)modelType;
+(id)osIdentifier;
+(id)osName;
+(id)osVersion;
+(id)shortBuildVersion;
+(id)systemDescription;
-(id)init;


@end


#endif