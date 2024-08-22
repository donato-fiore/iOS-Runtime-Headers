// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMPATHS_H
#define REMPATHS_H


#import <Foundation/Foundation.h>


@interface REMPaths : NSObject



+(BOOL)_shouldUseCentralizedDataPath;
+(id)URLForGroupContainerWithIdentifier:(id)arg0 ;
+(id)applicationDocumentsURL;
+(id)attributesForGroupContainerDirectory;
+(id)locationBundleURL;
+(id)mainContainerBackupURL;
+(id)mainContainerURL;
+(id)pptSentinelURLInContainerURL:(id)arg0 ;
+(id)reminderDataURL;
+(id)urlForIsolatedContainerWithIdentifier:(id)arg0 ;
+(void)setApplicationDocumentsURL:(id)arg0 ;


@end


#endif