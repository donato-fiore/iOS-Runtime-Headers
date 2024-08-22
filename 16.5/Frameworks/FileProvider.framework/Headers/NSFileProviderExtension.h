// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDEREXTENSION_H
#define NSFILEPROVIDEREXTENSION_H

@class NSString, NSURL;
@protocol NSExtensionRequestHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPXExtensionContext.h"
#import "NSFileProviderRequest.h"
#import "NSFileProviderDomain.h"

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling>

 {
    NSObject<OS_dispatch_queue> *_extensionDispatchQueue;
    FPXExtensionContext *_extensionContext;
    NSFileProviderRequest *_currentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSURL *memberQueueDocumentStorageURL; // ivar: _memberQueueDocumentStorageURL
@property (copy, nonatomic) NSString *memberQueueProviderIdentifier; // ivar: _memberQueueProviderIdentifier
@property (readonly) Class superclass;


+(BOOL)_initializedByViewServices;
+(BOOL)writePlaceholderAtURL:(id)arg0 withMetadata:(id)arg1 error:(*id)arg2 ;
+(id)_relativeComponentsOfURL:(id)arg0 fromBaseURL:(id)arg1 ;
+(id)_resourceIDOfURL:(id)arg0 outError:(*id)arg1 ;
+(id)placeholderURLForURL:(id)arg0 ;
-(BOOL)_fp_itemsMightBeTheSame:(id)arg0 otherItem:(id)arg1 url:(id)arg2 ;
-(id)URLForItemWithPersistentIdentifier:(id)arg0 ;
-(id)currentRequest;
-(id)disconnectWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(id)documentStorageURL;
-(id)enumeratorForContainerItemIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)enumeratorForSearchQuery:(id)arg0 error:(*id)arg1 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg0 version:(id)arg1 completionHandler:(id)arg2 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg0 version:(id)arg1 usingExistingContentsAtURL:(id)arg2 existingVersion:(id)arg3 completionHandler:(id)arg4 ;
-(id)fetchPublishingURLForItemIdentifier:(id)arg0 completionHandler:(id)arg1 ;
// -(id)fetchThumbnailsForItemIdentifiers:(id)arg0 requestedSize:(struct CGSize )arg1 perThumbnailCompletionHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)init;
-(id)itemForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)performActionWithIdentifier:(id)arg0 onItemsWithIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
-(id)persistentIdentifierForItemAtURL:(id)arg0 ;
-(id)providerIdentifier;
-(id)supportedServiceSourcesForItemIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)_withRequest:(id)arg0 execute:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)changeItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 options:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)createDirectoryWithName:(id)arg0 inParentItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 contents:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)deleteItemWithIdentifier:(id)arg0 baseVersion:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)evictItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleEventsForBackgroundURLSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)importDidFinishWithCompletionHandler:(id)arg0 ;
-(void)importDocumentAtURL:(id)arg0 toParentItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)itemChanged:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 completionHandler:(id)arg4 ;
-(void)itemChangedAtURL:(id)arg0 ;
-(void)materializedItemsDidChangeWithCompletionHandler:(id)arg0 ;
-(void)providePlaceholderAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerUpdateHandlerForPersistentIdentifier:(id)arg0 updateHandler:(id)arg1 ;
-(void)renameItemWithIdentifier:(id)arg0 toName:(id)arg1 completionHandler:(id)arg2 ;
-(void)reparentItemWithIdentifier:(id)arg0 toParentItemWithIdentifier:(id)arg1 newName:(id)arg2 completionHandler:(id)arg3 ;
-(void)setFavoriteRank:(id)arg0 forItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setLastUsedDate:(id)arg0 forItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTagData:(id)arg0 forItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)startProvidingItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopProvidingItemAtURL:(id)arg0 ;
-(void)trashItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterUpdateHandlerForPersistentIdentifier:(id)arg0 ;
-(void)untrashItemWithIdentifier:(id)arg0 toParentItemIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif