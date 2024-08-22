// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDCLOUDKITEXTENSIONSUTIL_H
#define DEDCLOUDKITEXTENSIONSUTIL_H


#import <Foundation/Foundation.h>


@interface DEDCloudKitExtensionsUtil : NSObject



+(id)copyFiles:(id)arg0 toDirectory:(id)arg1 ;
+(id)flattenDirectories:(id)arg0 ;
+(id)flattenDirectories:(id)arg0 progressHandler:(id)arg1 ;
+(id)getAllFilesInSessionDirectoryForSessionID:(id)arg0 ;
+(id)getCompletedExtensionFromAllExtensions:(id)arg0 ;
+(id)getVerifiedExtensionDirectoriesFromCompletedExtensions:(id)arg0 forSession:(id)arg1 ;
+(void)updateELSSnapshotStatus:(NSUInteger)arg0 ;


@end


#endif