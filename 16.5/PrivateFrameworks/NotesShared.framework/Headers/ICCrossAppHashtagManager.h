// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCROSSAPPHASHTAGMANAGER_H
#define ICCROSSAPPHASHTAGMANAGER_H


#import <Foundation/Foundation.h>


@interface ICCrossAppHashtagManager : NSObject



+(id)bundleIDsForHashtagSupportingAppsOtherThanNotes;
+(id)hashtagDisplayTextsFromOtherApps;
+(void)prefetchHashtagDisplayTextsFromOtherApps;
+(void)updateUserDefaultsCacheIfNecessaryWithNewlyFetchedHastags:(id)arg0 ;


@end


#endif