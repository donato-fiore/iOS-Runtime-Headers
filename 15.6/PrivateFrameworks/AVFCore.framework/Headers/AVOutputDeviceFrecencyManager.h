// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOUTPUTDEVICEFRECENCYMANAGER_H
#define AVOUTPUTDEVICEFRECENCYMANAGER_H


#import <Foundation/Foundation.h>


@interface AVOutputDeviceFrecencyManager : NSObject



+(BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)arg0 ;
+(CGFloat)frecencyScoreForDeviceID:(id)arg0 ;
+(id)_applicationSupportPath;
+(id)_frecentsContainerPath;
+(id)_frecentsFilePath;
+(id)_frecentsReaderAfterMigrationIfNecessary;
+(id)_frecentsWriter;
+(void)updateFrecencyListForDeviceID:(id)arg0 ;


@end


#endif