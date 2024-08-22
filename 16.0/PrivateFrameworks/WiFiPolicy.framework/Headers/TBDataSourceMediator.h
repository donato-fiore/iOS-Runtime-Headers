// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBDATASOURCEMEDIATOR_H
#define TBDATASOURCEMEDIATOR_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>

#import "TBCoreDataSource.h"
#import "TBDataSource.h"

@interface TBDataSourceMediator : NSObject

@property (retain, nonatomic) NSOperationQueue *fetchQueue; // ivar: _fetchQueue
@property (retain, nonatomic) TBCoreDataSource *local; // ivar: _local
@property (retain, nonatomic) TBDataSource *remote; // ivar: _remote


-(id)initWithLocalStoreDescriptor:(id)arg0 ;
-(id)initWithLocalStoreDescriptor:(id)arg0 remoteStore:(id)arg1 ;
-(void)executeFetchRequest:(id)arg0 ;
-(void)prune3BarsNetworks:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeAllWithCompletionHandler:(id)arg0 ;
-(void)removeWithFetchRequest:(id)arg0 ;


@end


#endif