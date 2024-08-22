// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSAMPLINGUTILITIES_H
#define AFSAMPLINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface AFSamplingUtilities : NSObject



+(id)component;
+(id)createSamplingDirectory;
+(id)deleteItemAtFilePath:(id)arg0 ;
+(id)sampledCachesSubDirectoryPath;
+(id)sampledCurrentSamplingDateKey;
+(id)sampledLibraryDirectoryPath;
+(id)sampledPlistFileName;
+(id)sampledSubDirectoryNameFormat;
+(id)sampledSubDirectoryPath;
+(id)samplingDateAsString;
+(id)timezone;
+(void)deleteAllSamplingData;


@end


#endif