// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATABASEPROXY_H
#define WFDATABASEPROXY_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "WFDatabase.h"

@interface WFDatabaseProxy : NSObject

@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSXPCConnection *databaseProxyHostConnection; // ivar: _databaseProxyHostConnection


+(id)defaultDatabase;
+(void)setDefaultDatabase:(id)arg0 ;
-(BOOL)isReference:(id)arg0 allowedToRunOnDomain:(id)arg1 ;
-(id)approvalResultForContentAttributionSet:(id)arg0 contentDestination:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(NSUInteger)arg4 reference:(id)arg5 error:(*id)arg6 ;
-(id)collectionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)configuredTriggersForWorkflowID:(id)arg0 error:(*id)arg1 ;
-(id)createWorkflowWithWorkflowRecord:(id)arg0 nameCollisionBehavior:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg0 actionUUID:(id)arg1 actionIdentifier:(id)arg2 actionIndex:(NSUInteger)arg3 count:(NSUInteger)arg4 reference:(id)arg5 error:(*id)arg6 ;
-(id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg0 forReference:(id)arg1 error:(*id)arg2 ;
-(id)folderForWorkflowReference:(id)arg0 error:(*id)arg1 ;
-(id)hostProxyWithErrorHandler:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 databaseProxyHost:(id)arg1 ;
-(id)initWithDatabaseProxyHost:(id)arg0 ;
-(id)referenceForWorkflowID:(id)arg0 ;
-(id)sortedVisibleFoldersWithError:(*id)arg0 ;
-(id)sortedVisibleWorkflowsByNameWithError:(*id)arg0 ;
-(id)sortedVisibleWorkflowsInCollection:(id)arg0 error:(*id)arg1 ;
-(id)uniqueVisibleReferenceForWorkflowName:(id)arg0 ;
-(id)workflowRecordForWorkflowReference:(id)arg0 error:(*id)arg1 ;
-(void)deleteAllAccessResourceStateDataForReference:(id)arg0 ;
-(void)setTrustedToRunScripts:(BOOL)arg0 forReference:(id)arg1 onDomain:(id)arg2 ;
-(void)updateAppDescriptor:(id)arg0 atKey:(id)arg1 actionUUID:(id)arg2 actionIndex:(id)arg3 actionIdentifier:(id)arg4 workflowID:(id)arg5 error:(*id)arg6 ;


@end


#endif