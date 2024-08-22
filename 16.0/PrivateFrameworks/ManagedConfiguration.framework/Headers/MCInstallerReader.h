// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCINSTALLERREADER_H
#define MCINSTALLERREADER_H


#import <Foundation/Foundation.h>


@interface MCInstallerReader : NSObject



+(id)sharedReader;
+(void)_setSystemProfileStorageDirectory:(id)arg0 userProfileStorageDirectory:(id)arg1 ;
-(id)pathsToInstalledProfilesWithFilterFlags:(int)arg0 ;


@end


#endif