// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSATTACHMENTSREPOSITORY_H
#define UNSATTACHMENTSREPOSITORY_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "UNSKeyedDictionaryRepository.h"
#import "UNSBundleLibrarian.h"

@interface UNSAttachmentsRepository : NSObject {
    UNSKeyedDictionaryRepository *_referencesRepository;
    NSURL *_directoryURL;
    UNSBundleLibrarian *_librarian;
}




+(id)_sha1HashOfFileAtURL:(id)arg0 ;
-(BOOL)isRepositoryURL:(id)arg0 ;
-(BOOL)isValidRepositoryURL:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(NSUInteger)_addReferencesToRepositoryURL:(id)arg0 forNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSUInteger)_removeReferencesToRepositoryURL:(id)arg0 forNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSUInteger)_transformNotificationIdentifiersForRepositoryURL:(id)arg0 bundleIdentifier:(id)arg1 usingTransformBlock:(id)arg2 ;
-(id)_attachmentDirectoryForBundleIdentifier:(id)arg0 ;
-(id)_claimedRepositoryURLsForBundleIdentifier:(id)arg0 ;
-(id)_fileURLForDigestString:(id)arg0 extension:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(id)bundleIdentifiersClaimingAttachments;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 ;
-(id)moveFileIntoRepositoryFromFileURL:(id)arg0 forNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)referencesForBundleIdentifier:(id)arg0 ;
-(void)_performAttachmentFilesMigration;
-(void)_performAttachmentReferencesMigration;
-(void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)arg0 ;
-(void)_performAttachmentRepositoryKeyMigration;
-(void)_removeAllReferencesForBundleIdentifier:(id)arg0 ;
-(void)_removeRepositoryURL:(id)arg0 ;
-(void)_transformAttachmentsForBundleIdentifier:(id)arg0 usingTransformBlock:(id)arg1 ;
-(void)deleteAllFilesForBundleIdentifier:(id)arg0 ;
-(void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg0 ;
-(void)performMigration;
-(void)removeReferenceToRepositoryURL:(id)arg0 forNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;


@end


#endif