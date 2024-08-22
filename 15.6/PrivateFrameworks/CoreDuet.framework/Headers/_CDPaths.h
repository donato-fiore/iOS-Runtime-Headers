// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDPATHS_H
#define _CDPATHS_H


#import <Foundation/Foundation.h>


@interface _CDPaths : NSObject



+(id)DKKnowledgeTestDirectoryString;
+(id)bundleBuiltInPlugInsPath;
+(id)bundlePathForResource:(id)arg0 ofType:(id)arg1 ;
+(id)contentProviderBundlePaths;
+(id)contentProvidersPath;
+(id)defaultDirectoryPathForDataCollection;
+(id)defaultSessionPathForDataCollection;
+(id)defaultSleepPath;
+(id)eventPlistPath;
+(id)interactionCopyDirectory;
+(id)interactionTestDirectory;
+(id)knowledgeDirectory;
+(id)knowledgeTestDirectory;
+(id)modelDirectory;
+(id)monitorBundlePath;
+(id)otaSleepPath;
+(id)peopleDirectory;
+(id)policiesConfigPath;
+(id)simulatorHomePathFor:(id)arg0 ;
+(id)simulatorSharedPathFor:(id)arg0 ;
+(id)simulatorSystemPathFor:(id)arg0 withEnvVar:(id)arg1 ;
+(id)userKnowledgeDirectory;


@end


#endif