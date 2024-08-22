// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSXPCSTORESERVERREQUESTHANDLINGPOLICY_H
#define NSXPCSTORESERVERREQUESTHANDLINGPOLICY_H


#import <Foundation/Foundation.h>


@interface NSXPCStoreServerRequestHandlingPolicy : NSObject



+(void)initialize;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg0 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg0 ;
-(id)allowableClassesForClientWithContext:(id)arg0 ;
-(id)processFaultForObjectWithID:(id)arg0 fromClientWithContext:(id)arg1 error:(*id)arg2 ;
-(id)processFaultForRelationshipWithName:(id)arg0 onObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(*id)arg3 ;
-(id)processRequest:(id)arg0 fromClientWithContext:(id)arg1 error:(*id)arg2 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg0 fromClientWithContext:(id)arg1 ;
-(id)restrictingReadPredicateForEntity:(id)arg0 fromClientWithContext:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg0 fromClientWithContext:(id)arg1 ;


@end


#endif