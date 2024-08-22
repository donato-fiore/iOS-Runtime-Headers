// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIMEDIAUTILITIES_H
#define SEARCHUIMEDIAUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUIMediaUtilities : NSObject



+(BOOL)bundleIdentifierSupportsOpenIntent:(id)arg0 ;
+(BOOL)bundleIdentifierSupportsPlayIntent:(id)arg0 ;
+(id)applicationNameForBundleIdentifier:(id)arg0 ;
+(id)appsThatSupportSearchIntents;
+(id)cardSectionsForListenToCardSection:(id)arg0 ;
+(id)fallbackPunchoutWithMetadata:(id)arg0 forBundleIdentifier:(id)arg1 ;
+(id)generateAppsThatSupportSearchIntents;
+(id)mediaSearchForMetadata:(id)arg0 ;
+(id)supportedIntentsForApp:(id)arg0 ;
+(void)initializeQueuesAndNotifications;
+(void)predictionForMediaMetadata:(id)arg0 completion:(id)arg1 ;
+(void)prewarmMediaLibrary;
+(void)resetMediaApps;


@end


#endif