// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXENUMERATOR_H
#define EXENUMERATOR_H

@class NSEnumerator;



@interface EXEnumerator : NSEnumerator



+(id)_extensionLiveEnumerator;
+(id)_extensionPointLiveEnumerator;
+(id)config;
+(id)extensionCacheFileURLs;
+(id)extensionEnumerator;
+(id)extensionInstallDirectoryURLs;
+(id)extensionPointCacheFileURLs;
+(id)extensionPointDefinitionDirectoryURLs;
+(id)extensionPointDefinitionEnumerator;
+(id)extensionPointDefinitionEnumeratorWithSDKDictionary:(id)arg0 ;
+(id)extensionURLEnumerator;


@end


#endif