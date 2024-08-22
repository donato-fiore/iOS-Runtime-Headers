// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPNAMEDENTITYREADONLYSERVERREQUESTHANDLER_H
#define PPNAMEDENTITYREADONLYSERVERREQUESTHANDLER_H

@class _PASBundleIdResolver, NSString;
@protocol PPNamedEntityReadOnlyServerProtocol, PPNamedEntityClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject <PPNamedEntityReadOnlyServerProtocol>

 {
    id<PPNamedEntityClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
}


@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // ivar: _bundleIdResolver
@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(void)mapItemForPlaceName:(id)arg0 completion:(id)arg1 ;
-(void)namedEntityRecordsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)rankedNamedEntitiesWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;


@end


#endif