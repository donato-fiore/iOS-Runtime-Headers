// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXCHRONOSERVICESPROVIDERGUARDEDDATA_H
#define _ATXCHRONOSERVICESPROVIDERGUARDEDDATA_H

@class ATXHomeScreenCachedSuggestions, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ATXChronoServicesProviderGuardedData : NSObject {
    ATXHomeScreenCachedSuggestions *_currentCachedSuggestions;
    NSDictionary *_currentWidgetRecords;
    NSMutableDictionary *_failureWidgetLastReloadDates;
}






@end


#endif