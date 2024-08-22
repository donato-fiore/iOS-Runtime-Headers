// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WDSAMPLELISTDATAPROVIDERPAGINGCONTEXT_H
#define _WDSAMPLELISTDATAPROVIDERPAGINGCONTEXT_H

@class NSDate;
@protocol HKSampleListDataFetcher;

#import <Foundation/Foundation.h>


@interface _WDSampleListDataProviderPagingContext : NSObject

@property (retain, nonatomic) NSObject<HKSampleListDataFetcher> *currentDataFetcher; // ivar: _currentDataFetcher
@property (retain, nonatomic) NSDate *earliestProcessedSampleDate; // ivar: _earliestProcessedSampleDate
@property (retain, nonatomic) NSDate *fetchUntilDate; // ivar: _fetchUntilDate
@property (nonatomic, getter=isFetchingData) BOOL fetchingData; // ivar: _fetchingData
@property (nonatomic) BOOL requiresPaging; // ivar: _requiresPaging




@end


#endif