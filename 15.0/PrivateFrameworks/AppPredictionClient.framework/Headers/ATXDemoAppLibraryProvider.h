// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDEMOAPPLIBRARYPROVIDER_H
#define ATXDEMOAPPLIBRARYPROVIDER_H


#import <Foundation/Foundation.h>


@interface ATXDemoAppLibraryProvider : NSObject



+(BOOL)isAppLibraryDemoModeEnabled;
+(id)_parseCategory:(id)arg0 realCategories:(id)arg1 ;
+(id)bundleIdsForCategoryWithName:(id)arg0 in:(id)arg1 ;
+(id)demoAppCategoriesForRealAppCategories:(id)arg0 ;
+(id)demoAppLibraryPath;
+(id)demoSuggestionsAndRecents;
+(id)loadCategoriesFromDisk;


@end


#endif