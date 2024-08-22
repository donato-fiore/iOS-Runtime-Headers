// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCURATIONUTILITIES_H
#define CLSCURATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CLSCurationUtilities : NSObject



+(BOOL)isBlockedForMemoriesWithImportedByBundleIdentifier:(id)arg0 ;
+(BOOL)isBlocklistedImportedByBundleIdentifier:(id)arg0 ;
+(BOOL)isRiskyFileFormatWithAsset:(id)arg0 ;
+(id)blockedImportedByBundleIdentifiers;
+(id)importedByBundleIdentifiersForBlockedForMemories;


@end


#endif