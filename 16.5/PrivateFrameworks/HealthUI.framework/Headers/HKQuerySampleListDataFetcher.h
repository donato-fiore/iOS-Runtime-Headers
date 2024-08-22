// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKQUERYSAMPLELISTDATAFETCHER_H
#define HKQUERYSAMPLELISTDATAFETCHER_H

@class HKHealthStore, HKQuery, NSString;
@protocol HKSampleListDataFetcher;

#import <Foundation/Foundation.h>


@interface HKQuerySampleListDataFetcher : NSObject <HKSampleListDataFetcher>

 {
    HKHealthStore *_healthStore;
    HKQuery *_query;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHealthStore:(id)arg0 query:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif