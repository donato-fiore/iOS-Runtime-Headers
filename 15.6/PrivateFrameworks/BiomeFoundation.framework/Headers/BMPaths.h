// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPATHS_H
#define BMPATHS_H


#import <Foundation/Foundation.h>


@interface BMPaths : NSObject



+(BOOL)isTestPathOverridden;
+(id)_simRootDirectory;
+(id)_unitTestsRootDirectory;
+(id)basePathForTesting;
+(id)localDSLDirectory;
+(id)localFlexibleStorageDirectory;
+(id)pathForStreamIdentifier:(id)arg0 streamType:(NSUInteger)arg1 ;
+(id)pathForStreamType:(NSUInteger)arg0 ;
+(id)privacyPathname:(id)arg0 ;
+(id)privacyURLToString:(id)arg0 ;
+(id)rootBiomeDirectory;
+(id)rootLibraryDirectory;
+(id)syncDirectory;
+(void)setBasePathForTestingWithPath:(id)arg0 ;
+(void)unsetBasePathForTesting;


@end


#endif