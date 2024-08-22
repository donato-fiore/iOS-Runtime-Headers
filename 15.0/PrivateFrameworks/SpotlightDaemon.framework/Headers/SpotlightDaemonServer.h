// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPOTLIGHTDAEMONSERVER_H
#define SPOTLIGHTDAEMONSERVER_H


#import <Foundation/Foundation.h>


@interface SpotlightDaemonServer : NSObject



+(id)sharedDaemonServer;
-(BOOL)handleJob:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)haveDaemonForBundleID:(id)arg0 jobType:(NSInteger)arg1 ;
-(NSInteger)clientTypeForBundleID:(id)arg0 jobType:(NSInteger)arg1 ;
-(id)connectionForBundleID:(id)arg0 jobType:(NSInteger)arg1 ;
-(id)connectionForClientType:(NSInteger)arg0 jobType:(NSInteger)arg1 ;
-(void)issueReindexAllItemsForBundleID:(id)arg0 protectionClass:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)issueReindexItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id)arg3 ;
-(void)provideDataForBundleID:(id)arg0 protectionClass:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)provideFileURLForBundleID:(id)arg0 protectionClass:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;


@end


#endif