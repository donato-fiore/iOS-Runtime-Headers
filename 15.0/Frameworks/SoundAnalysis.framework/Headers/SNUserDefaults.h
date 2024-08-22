// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNUSERDEFAULTS_H
#define SNUSERDEFAULTS_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface SNUserDefaults : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(BOOL)deleteRecordingsWithoutDetection;
+(BOOL)enableFileServer;
+(BOOL)enableSecondPassRecordingInDaemon;
+(BOOL)enableVerboseLogging;
+(CGFloat)recordingTimeToLiveSeconds;
+(NSInteger)recordingDirectoryMaximumSizeBytes;
+(id)builtInMicrophoneAnalysisChannelNumber;
+(id)daemonRecordingPath;
+(id)fileServerRootDirectory;
+(id)instance;
+(unsigned int)builtInMicrophoneAnalysisChannelNumberOrDefault:(unsigned int)arg0 ;
-(id)init;


@end


#endif