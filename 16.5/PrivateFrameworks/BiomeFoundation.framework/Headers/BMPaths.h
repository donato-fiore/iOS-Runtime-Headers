// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPATHS_H
#define BMPATHS_H


#import <Foundation/Foundation.h>


@interface BMPaths : NSObject



+(BOOL)getServiceDomain:(*NSUInteger)arg0 subpath:(*id)arg1 forPath:(id)arg2 ;
+(BOOL)isTestPathOverridden;
+(BOOL)pathIsManaged:(id)arg0 domain:(*NSUInteger)arg1 ;
+(id)_biomeDirectoryForDomain:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
+(id)_biomeSystemDataDirectory;
+(id)_biomeUserDataDirectory:(NSUInteger)arg0 ;
+(id)_pathForTesting;
+(id)_systemRoot;
+(id)_userHome;
+(id)basePathForTesting;
+(id)biomeDirectoryForDomain:(NSUInteger)arg0 ;
+(id)biomeTemporaryDirectoryForDomain:(NSUInteger)arg0 ;
+(id)localComputeDirectory;
+(id)localFlexibleStorageDirectory;
+(id)optionalBiomeDirectoryForDomainUser;
+(id)pathForStreamIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
+(id)pathForStreamType:(NSUInteger)arg0 domain:(NSUInteger)arg1 ;
+(id)privacyPathname:(id)arg0 ;
+(id)privacyURLToString:(id)arg0 ;
+(id)syncDirectory;
+(void)setBasePathForTestingWithPath:(id)arg0 ;
+(void)unsetBasePathForTesting;


@end


#endif