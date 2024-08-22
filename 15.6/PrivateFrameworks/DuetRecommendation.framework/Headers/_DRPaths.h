// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DRPATHS_H
#define _DRPATHS_H


#import <Foundation/Foundation.h>


@interface _DRPaths : NSObject



+(id)kNewsStorageDirectory;
+(id)kTmpDirectory;
+(id)simulatorHomePathFor:(id)arg0 ;
+(id)simulatorSystemPathFor:(id)arg0 withEnvVar:(id)arg1 ;


@end


#endif