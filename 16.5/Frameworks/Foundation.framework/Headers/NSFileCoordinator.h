// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILECOORDINATOR_H
#define NSFILECOORDINATOR_H

@class NSURL, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileCoordinator : NSObject {
    id *_accessArbiter;
    id *_fileReactor;
    id *_purposeID;
    NSURL *_recentFilePresenterURL;
    id *_accessClaimIDOrIDs;
    NSMutableDictionary *_movedItems;
    BOOL _isCancelled;
}


@property (copy) NSString *purposeIdentifier;


+(BOOL)_itemHasPresentersAtURL:(id)arg0 ;
+(BOOL)_provideRecursively;
+(BOOL)_skipCoordinationWork;
+(NSUInteger)_providedItemGenerationCount;
+(NSUInteger)_readingOptions;
+(NSUInteger)_responsesForPresenter:(id)arg0 ;
+(id)_canonicalURLForURL:(id)arg0 ;
+(id)_createConnectionToFileAccessArbiterForQueue:(id)arg0 ;
+(id)_createConnectionToProgressRegistrar;
+(id)_createIdentifierForNewClaim;
+(id)_currentClaimPurposeIdentifier;
+(id)_currentFileCoordinator;
+(id)_endpointForInProcessFileCoordinationServer;
+(id)_fileAccessArbiterInterface;
+(id)_filePresenterInterface;
+(id)_fileProviderInterface;
+(id)_fileProviders;
+(id)_inProcessFileAccessArbiter;
+(id)_kernelMaterializationInfo;
+(id)_nextClaimIdentifier;
+(id)_observedUbiquityAttributesForPresenterWithID:(id)arg0 ;
+(id)filePresenters;
+(int)_processIdentifierForID:(id)arg0 ;
+(unsigned int)_kernelMaterializationOperation;
+(void)__itemAtURL:(id)arg0 didChangeUbiquityWithPurposeID:(id)arg1 ;
+(void)__itemAtURL:(id)arg0 didChangeWithPurposeID:(id)arg1 ;
+(void)__itemAtURL:(id)arg0 didDisappearWithPurposeID:(id)arg1 ;
+(void)__itemAtURL:(id)arg0 didDisconnectWithPurposeID:(id)arg1 ;
+(void)__itemAtURL:(id)arg0 didGainVersionWithClientID:(id)arg1 name:(id)arg2 purposeID:(id)arg3 ;
+(void)__itemAtURL:(id)arg0 didLoseVersionWithClientID:(id)arg1 name:(id)arg2 purposeID:(id)arg3 ;
+(void)__itemAtURL:(id)arg0 didMoveToURL:(id)arg1 purposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg0 didReconnectWithPurposeID:(id)arg1 ;
+(void)__itemAtURL:(id)arg0 didResolveConflictVersionWithClientID:(id)arg1 name:(id)arg2 purposeID:(id)arg3 ;
+(void)_accessPresenterInfoUsingBlock:(id)arg0 ;
+(void)_addFileProvider:(id)arg0 ;
+(void)_addFileProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)_addProcessIdentifier:(int)arg0 observedUbiquityAttributes:(id)arg1 forID:(id)arg2 ;
+(void)_adoptFCDEndpointForTest:(id)arg0 ;
+(void)_getDebugInfoWithCompletionHandler:(id)arg0 ;
+(void)_performBarrier;
+(void)_performBarrierAsync:(id)arg0 ;
+(void)_printDebugInfo;
+(void)_removeFileProvider:(id)arg0 ;
+(void)_removeInfoForID:(id)arg0 ;
+(void)_setAutomaticFileProviderReregistrationDisabled:(BOOL)arg0 ;
+(void)_setCurrentClaimPurposeIdentifier:(id)arg0 ;
+(void)_setKernelMaterializationInfo:(id)arg0 ;
+(void)_setNextClaimIdentifier:(id)arg0 ;
+(void)_setProvidedItemRecursiveGenerationCount:(NSUInteger)arg0 ;
+(void)_setReadingOptions:(NSUInteger)arg0 ;
+(void)_startInProcessFileCoordinationAndProgressServers;
+(void)_stopInProcessFileCoordinationAndProgressServers;
+(void)addFilePresenter:(id)arg0 ;
+(void)removeFilePresenter:(id)arg0 ;
-(BOOL)_isValidUbiquityAttribute:(id)arg0 ;
-(id)_willStartWriteWithIntents:(id)arg0 async:(BOOL)arg1 ;
-(id)init;
-(id)initWithFilePresenter:(id)arg0 ;
-(id)retainAccess;
-(void)__coordinateReadingItemAtURL:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 byAccessor:(id)arg3 ;
-(void)__coordinateReadingItemAtURL:(id)arg0 options:(NSUInteger)arg1 writingItemAtURL:(id)arg2 options:(NSUInteger)arg3 purposeID:(id)arg4 byAccessor:(id)arg5 ;
-(void)__coordinateWritingItemAtURL:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 byAccessor:(id)arg3 ;
-(void)__coordinateWritingItemAtURL:(id)arg0 options:(NSUInteger)arg1 writingItemAtURL:(id)arg2 options:(NSUInteger)arg3 purposeID:(id)arg4 byAccessor:(id)arg5 ;
-(void)__prepareForReadingItemsAtURLs:(id)arg0 options:(NSUInteger)arg1 writingItemsAtURLs:(id)arg2 options:(NSUInteger)arg3 byAccessor:(id)arg4 ;
-(void)_blockOnAccessClaim:(id)arg0 withAccessArbiter:(id)arg1 ;
-(void)_cancelClaimWithIdentifier:(id)arg0 ;
-(void)_coordinateAccessWithIntents:(id)arg0 queue:(id)arg1 byAccessor:(id)arg2 ;
-(void)_coordinateReadingItemAtURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 byAccessor:(id)arg3 ;
-(void)_coordinateReadingItemAtURL:(id)arg0 options:(NSUInteger)arg1 writingItemAtURL:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 byAccessor:(id)arg5 ;
-(void)_coordinateWritingItemAtURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 byAccessor:(id)arg3 ;
-(void)_coordinateWritingItemAtURL:(id)arg0 options:(NSUInteger)arg1 writingItemAtURL:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 byAccessor:(id)arg5 ;
-(void)_didEndWrite:(id)arg0 ;
-(void)_forgetAccessClaimForID:(id)arg0 ;
// -(void)_invokeAccessor:(id)arg0 thenCompletionHandler:(unk)arg1  ;
-(void)_itemAtURL:(id)arg0 didMoveToURL:(id)arg1 ;
-(void)_itemAtURL:(id)arg0 willMoveToURL:(id)arg1 ;
-(void)_itemDidChangeAtURL:(id)arg0 ;
-(void)_itemDidDisappearAtURL:(id)arg0 ;
-(void)_lockdownPurposeIdentifier;
-(void)_requestAccessClaim:(id)arg0 withProcedure:(id)arg1 ;
-(void)_setFileProvider:(id)arg0 ;
-(void)_ubiquityDidChangeForItemAtURL:(id)arg0 ;
// -(void)_withAccessArbiter:(id)arg0 invokeAccessor:(id)arg1 orDont:(unk)arg2 andRelinquishAccessClaim:(BOOL)arg3  ;
-(void)cancel;
-(void)coordinateAccessWithIntents:(id)arg0 queue:(id)arg1 byAccessor:(id)arg2 ;
-(void)coordinateReadingItemAtURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 byAccessor:(id)arg3 ;
-(void)coordinateReadingItemAtURL:(id)arg0 options:(NSUInteger)arg1 writingItemAtURL:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 byAccessor:(id)arg5 ;
-(void)coordinateWritingItemAtURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 byAccessor:(id)arg3 ;
-(void)coordinateWritingItemAtURL:(id)arg0 options:(NSUInteger)arg1 writingItemAtURL:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 byAccessor:(id)arg5 ;
-(void)dealloc;
-(void)itemAtURL:(id)arg0 didChangeUbiquityAttributes:(id)arg1 ;
-(void)itemAtURL:(id)arg0 didMoveToURL:(id)arg1 ;
-(void)itemAtURL:(id)arg0 willMoveToURL:(id)arg1 ;
-(void)prepareForReadingItemsAtURLs:(id)arg0 options:(NSUInteger)arg1 writingItemsAtURLs:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 byAccessor:(id)arg5 ;
-(void)releaseAccess:(id)arg0 ;
-(void)sharingDidChangeForItemAtURL:(id)arg0 ;


@end


#endif