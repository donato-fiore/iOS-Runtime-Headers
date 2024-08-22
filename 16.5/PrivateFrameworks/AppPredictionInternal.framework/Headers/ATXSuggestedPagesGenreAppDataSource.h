// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTEDPAGESGENREAPPDATASOURCE_H
#define ATXSUGGESTEDPAGESGENREAPPDATASOURCE_H

@protocol ATXSuggestedPagesAppDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesGenreAppDataSource : NSObject <ATXSuggestedPagesAppDataSource>





-(BOOL)_appLaunchDataPassesThreshold:(id)arg0 forPageType:(NSInteger)arg1 bundleId:(id)arg2 ;
-(BOOL)_pageType:(NSInteger)arg0 matchesGenreId:(NSUInteger)arg1 forBundleId:(id)arg2 ;
-(id)provideAppsForSuggestedPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif