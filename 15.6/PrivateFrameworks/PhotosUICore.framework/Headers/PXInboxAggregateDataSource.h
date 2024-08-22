// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXINBOXAGGREGATEDATASOURCE_H
#define PXINBOXAGGREGATEDATASOURCE_H

@class NSDictionary;


#import "PXInboxModelDataSource.h"

@interface PXInboxAggregateDataSource : PXInboxModelDataSource

@property (readonly, copy, nonatomic) NSDictionary *providerSourceDictionary; // ivar: _providerSourceDictionary


-(id)initWithModels:(id)arg0 providerSourceDictionary:(id)arg1 ;
-(id)providerSourceForModel:(id)arg0 ;


@end


#endif