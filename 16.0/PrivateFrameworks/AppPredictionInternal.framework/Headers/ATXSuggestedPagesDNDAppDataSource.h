// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESDNDAPPDATASOURCE_H
#define ATXSUGGESTEDPAGESDNDAPPDATASOURCE_H

@protocol ATXSuggestedPagesAppDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesDNDAppDataSource : NSObject <ATXSuggestedPagesAppDataSource>





-(id)provideAppsForSuggestedPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif