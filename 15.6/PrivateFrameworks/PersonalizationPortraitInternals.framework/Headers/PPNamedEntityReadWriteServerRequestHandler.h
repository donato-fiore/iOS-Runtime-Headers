// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPNAMEDENTITYREADWRITESERVERREQUESTHANDLER_H
#define PPNAMEDENTITYREADWRITESERVERREQUESTHANDLER_H

@protocol PPNamedEntityReadWriteServerProtocol;

#import <Foundation/Foundation.h>


@interface PPNamedEntityReadWriteServerRequestHandler : NSObject <PPNamedEntityReadWriteServerProtocol>





-(void)clearWithCompletion:(id)arg0 ;
-(void)cloudSyncWithCompletion:(id)arg0 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 documentIds:(id)arg1 completion:(id)arg2 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupId:(id)arg1 olderThanDate:(id)arg2 completion:(id)arg3 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg0 groupIds:(id)arg1 completion:(id)arg2 ;
-(void)donateLocationNamedEntities:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 completion:(id)arg3 ;
-(void)donateMapItem:(id)arg0 forPlaceName:(id)arg1 completion:(id)arg2 ;
-(void)donateNamedEntities:(id)arg0 source:(id)arg1 algorithm:(NSUInteger)arg2 cloudSync:(BOOL)arg3 sentimentScore:(CGFloat)arg4 completion:(id)arg5 ;
-(void)flushDonationsWithCompletion:(id)arg0 ;
-(void)removeMapItemForPlaceName:(id)arg0 completion:(id)arg1 ;
-(void)removeMapItemsBeforeCutoffDate:(id)arg0 completion:(id)arg1 ;


@end


#endif