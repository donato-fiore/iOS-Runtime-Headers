// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOLOCATIONS_H
#define MOLOCATIONS_H


#import <Foundation/Foundation.h>


@interface MOLocations : NSObject



+(id)effectiveSettingsDirectory;
+(id)effectiveSettingsPath;
+(id)internalSettingsDirectoryForProcess;
+(id)internalSettingsPathForProcess;
+(id)sharedDirectory;


@end


#endif