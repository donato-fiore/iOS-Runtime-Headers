// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESINTENTMETADATAAPPDATASOURCE_H
#define ATXSUGGESTEDPAGESINTENTMETADATAAPPDATASOURCE_H

@protocol ATXSuggestedPagesAppDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesIntentMetadataAppDataSource : NSObject <ATXSuggestedPagesAppDataSource>





-(id)_appsMatchingShortcutAvailability:(NSUInteger)arg0 ;
-(id)provideAppsForSuggestedPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif