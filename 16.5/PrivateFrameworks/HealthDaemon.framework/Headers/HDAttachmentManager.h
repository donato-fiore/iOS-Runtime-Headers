// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDATTACHMENTMANAGER_H
#define HDATTACHMENTMANAGER_H

@class NSMutableDictionary, NSString, NSURL;
@protocol HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDAttachmentManager : NSObject <HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate>

 {
    HDProfile *_profile;
    NSMutableDictionary *_schemaProvidersByIdentifier;
    NSString *_filesDirectoryPath;
    NSString *_unconfirmedFilesDirectoryPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *filesDirectoryURL;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *unconfirmedFilesDirectoryURL;
@property (copy, nonatomic) id *unitTestdidCompleteFileCleanup; // ivar: _unitTestdidCompleteFileCleanup


-(BOOL)attachmentReferencesForAttachment:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(BOOL)attachmentReferencesForObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
-(BOOL)insertAttachmentReferences:(id)arg0 attachment:(id)arg1 error:(*id)arg2 ;
-(BOOL)insertAttachmentReferences:(id)arg0 attachment:(id)arg1 fileData:(id)arg2 encrypt:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)insertAttachmentReferences:(id)arg0 attachment:(id)arg1 fileHandle:(id)arg2 encrypt:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)readAuthorizationForObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 client:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeAttachmentReferences:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAttachmentReferencesWithObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAttachmentReferencesWithObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
-(BOOL)replaceReferencesWithObjectIdentifier:(id)arg0 replacementIdentifier:(id)arg1 schemaIdentifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)writeAuthorizationForObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 client:(id)arg2 error:(*id)arg3 ;
-(id)fileHandleForAttachment:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)readerForAttachment:(id)arg0 error:(*id)arg1 ;
-(id)schemaProviderClasses;
-(id)schemaProviderForIdentifier:(id)arg0 ;
-(void)_addReferenceWithAttachment:(id)arg0 toObjectWithIdentifier:(id)arg1 schemaIdentifier:(id)arg2 metadata:(id)arg3 completion:(id)arg4 ;
-(void)_cleanupAttachmentsFolder;
-(void)addAttachmentWithName:(id)arg0 contentTypeIdentifier:(id)arg1 fileHandle:(id)arg2 toObjectWithIdentifier:(id)arg3 schemaIdentifier:(id)arg4 attachmentMetadata:(id)arg5 referenceMetadata:(id)arg6 completion:(id)arg7 ;
-(void)addReferenceWithAttachment:(id)arg0 toObjectWithIdentifier:(id)arg1 schemaIdentifier:(id)arg2 metadata:(id)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeAllReferencesWithAttachmentIdentifier:(id)arg0 objectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg0 completion:(id)arg1 ;
-(void)runMaintenanceOperationIfNeeded;


@end


#endif