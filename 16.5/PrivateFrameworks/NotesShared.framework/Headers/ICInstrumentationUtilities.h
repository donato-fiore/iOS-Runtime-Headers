// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINSTRUMENTATIONUTILITIES_H
#define ICINSTRUMENTATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICInstrumentationUtilities : NSObject



+(NSInteger)autoSortSelectionChangeCountForState:(BOOL)arg0 ;
+(NSInteger)recentPasswordChangeCountAsReset:(BOOL)arg0 ;
+(id)autoSortSelectionCountUserDefaultsKeyForState:(BOOL)arg0 ;
+(id)passwordChangeCountUserDefaultsKeyAsReset:(BOOL)arg0 ;
+(id)recentPasswordModesForAccount:(id)arg0 ;
+(id)recentPasswordModesKeyForAccount:(id)arg0 ;
+(void)addRecentPasswordMode:(id)arg0 forAccount:(id)arg1 ;
+(void)clearAutoSortSelectionChangeCountForState:(BOOL)arg0 ;
+(void)clearRecentPasswordChangeCountAsReset:(BOOL)arg0 ;
+(void)clearRecentPasswordModesForAccount:(id)arg0 ;
+(void)incrementAutoSortSelectionChangeCountForState:(BOOL)arg0 ;
+(void)incrementRecentPasswordChangeCountAsReset:(BOOL)arg0 ;


@end


#endif