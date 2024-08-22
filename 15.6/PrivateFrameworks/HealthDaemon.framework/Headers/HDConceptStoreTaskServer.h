// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONCEPTSTORETASKSERVER_H
#define HDCONCEPTSTORETASKSERVER_H

@class NSString;
@protocol HDConceptIndexManagerObserver, HKConceptStoreServerInterface;


#import "HDStandardTaskServer.h"

@interface HDConceptStoreTaskServer : HDStandardTaskServer <HDConceptIndexManagerObserver, HKConceptStoreServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg0 samplesProcessedCount:(NSInteger)arg1 ;
-(void)conceptIndexManagerDidChangeExecutionState:(NSUInteger)arg0 ;
-(void)connectionInvalidated;
-(void)remote_currentIndexingState:(id)arg0 ;
-(void)remote_ontologyVersionWithCompletion:(id)arg0 ;
-(void)remote_queryConceptByIdentifier:(id)arg0 loadRelationships:(BOOL)arg1 completion:(id)arg2 ;
-(void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(id)arg0 ;
-(void)remote_queryRelationshipsForNodeWithID:(id)arg0 completion:(id)arg1 ;
-(void)remote_resetOntologyUsingAssetAtLocation:(id)arg0 rememberLocation:(BOOL)arg1 completion:(id)arg2 ;
-(void)remote_startTaskServerIfNeeded;
-(void)remote_testTaskServerWithCompletion:(id)arg0 ;


@end


#endif