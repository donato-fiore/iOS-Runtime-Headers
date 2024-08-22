// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRNEWSDAEMONBLOOMFILTERINFOSERVICE_H
#define NRNEWSDAEMONBLOOMFILTERINFOSERVICE_H

@class NTPBBloomFilterInfo, FCAsyncOnceOperation;
@protocol NRBloomFilterInfoService;

#import <Foundation/Foundation.h>


@interface NRNewsDaemonBloomFilterInfoService : NSObject <NRBloomFilterInfoService>



@property (copy, nonatomic) NTPBBloomFilterInfo *bloomFilterInfo; // ivar: _bloomFilterInfo
@property (readonly, nonatomic) FCAsyncOnceOperation *fetchOnceOperation; // ivar: _fetchOnceOperation


-(id)init;
-(void)_fetchBloomFilterInfoWithCompletion:(id)arg0 ;
-(void)fetchWebURLBloomFilterInfoWithCompletion:(id)arg0 ;


@end


#endif