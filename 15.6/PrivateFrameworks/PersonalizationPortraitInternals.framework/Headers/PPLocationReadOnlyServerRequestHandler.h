// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLOCATIONREADONLYSERVERREQUESTHANDLER_H
#define PPLOCATIONREADONLYSERVERREQUESTHANDLER_H

@class _PASBundleIdResolver, NSString;
@protocol PPLocationReadOnlyServerProtocol, PPLocationClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol>

 {
    id<PPLocationClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // ivar: _bundleIdResolver
@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(void)locationRecordsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)rankedLocationsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;


@end


#endif