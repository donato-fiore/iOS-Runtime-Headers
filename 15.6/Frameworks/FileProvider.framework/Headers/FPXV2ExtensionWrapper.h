// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPXV2EXTENSIONWRAPPER_H
#define FPXV2EXTENSIONWRAPPER_H

@class NSString;
@protocol NSFileProviderReplicatedExtension, NSFileProviderSearching, NSFileProviderIncrementalContentFetching, NSFileProviderThumbnailing, NSFileProviderCustomAction, NSFileProviderServicing, NSFileProviderUserInteractionSuppressing;

#import <Foundation/Foundation.h>

#import "NSFileProviderExtension.h"

@interface FPXV2ExtensionWrapper : NSObject <NSFileProviderReplicatedExtension, NSFileProviderSearching, NSFileProviderIncrementalContentFetching, NSFileProviderThumbnailing, NSFileProviderCustomAction, NSFileProviderServicing, NSFileProviderUserInteractionSuppressing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderExtension *extension; // ivar: _extension
@property (retain, nonatomic) Class extensionClass; // ivar: _extensionClass
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isInteractionSuppressedForIdentifier:(id)arg0 ;
-(id)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 contents:(id)arg2 options:(NSUInteger)arg3 request:(id)arg4 completionHandler:(id)arg5 ;
-(id)deleteItemWithIdentifier:(id)arg0 baseVersion:(id)arg1 options:(NSUInteger)arg2 request:(id)arg3 completionHandler:(id)arg4 ;
-(id)enumeratorForContainerItemIdentifier:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)enumeratorForSearchQuery:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg0 version:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(id)fetchContentsForItemWithIdentifier:(id)arg0 version:(id)arg1 usingExistingContentsAtURL:(id)arg2 existingVersion:(id)arg3 request:(id)arg4 completionHandler:(id)arg5 ;
// -(id)fetchThumbnailsForItemIdentifiers:(id)arg0 requestedSize:(struct CGSize )arg1 perThumbnailCompletionHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)initWithDomain:(id)arg0 ;
-(id)itemForIdentifier:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(id)modifyItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 options:(NSUInteger)arg4 request:(id)arg5 completionHandler:(id)arg6 ;
-(id)performActionWithIdentifier:(id)arg0 onItemsWithIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
-(id)supportedServiceSourcesForItemIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)importDidFinishWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)materializedItemsDidChangeWithCompletionHandler:(id)arg0 ;
-(void)setInteractionSuppressed:(BOOL)arg0 forIdentifier:(id)arg1 ;


@end


#endif