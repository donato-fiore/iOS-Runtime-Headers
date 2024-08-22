// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDOPERATIONDELETE_H
#define MCMCOMMANDOPERATIONDELETE_H

@class NSArray, NSMutableDictionary;
@protocol MCMParametersWithConcreteContainersArray, MCMParametersOperationDelete;


#import "MCMCommand.h"
#import "MCMXPCMessageOperationDelete.h"

@interface MCMCommandOperationDelete : MCMCommand <MCMParametersWithConcreteContainersArray, MCMParametersOperationDelete>



@property (readonly, nonatomic) NSArray *concreteContainerIdentities; // ivar: _concreteContainerIdentities
@property (readonly, nonatomic) NSArray *containerIdentities; // ivar: _containerIdentities
@property (readonly, nonatomic) MCMXPCMessageOperationDelete *message; // ivar: _message
@property (copy, nonatomic) id *onError; // ivar: _onError
@property (readonly, nonatomic) NSMutableDictionary *referenceCounts; // ivar: _referenceCounts
@property (readonly, nonatomic) BOOL removeAllCodeSignInfo; // ivar: _removeAllCodeSignInfo
@property (readonly, nonatomic) BOOL runFromManifests; // ivar: _runFromManifests
@property (readonly, nonatomic) BOOL traverseLinks; // ivar: _traverseLinks
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim; // ivar: _waitForDiskSpaceReclaim


+(Class)incomingMessageClass;
+(NSUInteger)command;
+(id)_materializeContainerIdentityFromManifestAtURL:(id)arg0 userIdentityCache:(id)arg1 error:(*id)arg2 ;
+(id)_materializeContainerIdentityFromManifestPlist:(id)arg0 userIdentityCache:(id)arg1 error:(*id)arg2 ;
+(id)_materializeContainerIdentityFromManifestPlistV1:(id)arg0 userIdentityCache:(id)arg1 error:(*id)arg2 ;
+(id)commandForOperationDeleteFromManifestsRemoveAllCodeSignInfo:(BOOL)arg0 context:(id)arg1 resultPromise:(id)arg2 onError:(id)arg3 ;
+(id)commandForOperationDeleteWithContainerIdentities:(id)arg0 removeAllCodeSignInfo:(BOOL)arg1 context:(id)arg2 resultPromise:(id)arg3 onError:(id)arg4 ;
-(BOOL)_removeDeleteManifestIfExistsForContainerIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeDeleteManifestForItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeDeleteManifestsForItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)preflightClientAllowed;
-(NSUInteger)_preflightReferenceCountAfterRemovingRefererenceToIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 ;
-(id)_containerIdentitiesToDeleteTransitivelyFromMetadata:(id)arg0 ;
-(id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)arg0 error:(*id)arg1 ;
-(id)_deleteItems:(id)arg0 directDelete:(BOOL)arg1 error:(*id)arg2 ;
-(id)_groupContainersToDeleteWhenReconcilingRemovalOfContainer:(id)arg0 ;
-(id)_preflightReferenceCountsForContainerClass:(NSUInteger)arg0 ;
-(id)_replyFromRelayToDaemonWithContainerIdentities:(id)arg0 ;
-(id)_stableFileNameForDataOperationPlistWithContainerIdentity:(id)arg0 ;
-(id)_urlForDeleteManifestWithContainerIdentity:(id)arg0 ;
-(id)initWithContainerIdentities:(id)arg0 traverseLinks:(BOOL)arg1 waitForDiskSpaceReclaim:(BOOL)arg2 removeAllCodeSignInfo:(BOOL)arg3 runFromManifests:(BOOL)arg4 context:(id)arg5 resultPromise:(id)arg6 onError:(id)arg7 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)_removeLinksTargetingItems:(id)arg0 ;
-(void)_setManifestURLsForItems:(id)arg0 ;
-(void)execute;


@end


#endif