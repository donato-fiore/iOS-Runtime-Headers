// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRECENTRESULTSMANAGER_H
#define SSRECENTRESULTSMANAGER_H


#import <Foundation/Foundation.h>


@interface SSRecentResultsManager : NSObject



+(id)updateResult:(id)arg0 topic:(id)arg1 ;
+(void)cacheResult:(id)arg0 searchString:(id)arg1 ;
+(void)cacheSearchString:(id)arg0 ;
+(void)deleteAllRecents;
+(void)deleteResult:(id)arg0 ;
+(void)preheat;


@end


#endif