// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIADOCUMENT_H
#define TIADOCUMENT_H

@class UIDocument, NSString, TIADocumentInfo, SFUCryptoKey, NSURL;
@protocol TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate, OS_dispatch_queue, NSFilePresenter, TIADocumentPassphraseDelegate;


#import "TSADocumentRoot.h"
#import "TSPObjectContext.h"

@interface TIADocument : UIDocument <TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate>

 {
    int _hasPersistenceErrors;
    TSADocumentRoot *_documentRootForDocumentDidLoad;
    TSADocumentRoot *_suspendedDocumentRoot;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioOperationQueue;
    id *_documentStateChangedObserver;
}


@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (retain, nonatomic) TSPObjectContext *context; // ivar: _context
@property (retain, nonatomic) TSPObjectContext *contextForRevert; // ivar: _contextForRevert
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentCachePath;
@property (retain, nonatomic) TIADocumentInfo *documentInfo; // ivar: _documentInfo
@property (readonly) BOOL documentNeedsDownloadOnRevert; // ivar: _documentNeedsDownloadOnRevert
@property (copy, nonatomic) NSString *documentPasswordHint;
@property (readonly) BOOL documentRevertWasAbandoned; // ivar: _documentRevertWasAbandoned
@property (readonly, retain, nonatomic) TSADocumentRoot *documentRoot;
@property (retain, nonatomic) SFUCryptoKey *encryptionKey; // ivar: _encryptionKey
@property (readonly, nonatomic) NSObject<NSFilePresenter> *filePresenter;
@property (readonly) BOOL hasPersistenceErrors;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isClosed;
@property BOOL isClosingWithoutSaving; // ivar: _isClosingWithoutSaving
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property BOOL isReadOnly; // ivar: _isReadOnly
@property (readonly) BOOL isShowingConflictResolutionSheet; // ivar: _isShowingConflictResolutionSheet
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) NSObject<TIADocumentPassphraseDelegate> *passphraseDelegate; // ivar: _passphraseDelegate
@property (readonly) BOOL passwordEntryWasAbandoned; // ivar: _passwordEntryWasAbandoned
@property (readonly) BOOL shouldHideForSnapshots;
@property (retain, nonatomic) NSString *sourcePathForNondestructiveImport; // ivar: _sourcePathForNondestructiveImport
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *templateURL; // ivar: _templateURL


-(BOOL)_shouldPreventFileProtectionUpgradeToLevel:(id)arg0 ;
-(BOOL)hasUnsavedChanges;
-(BOOL)shouldAbandonDocumentRevert;
-(BOOL)validatePassphrase:(id)arg0 ;
-(id)additionalDocumentPropertiesForWrite;
-(id)contentsForType:(id)arg0 error:(*id)arg1 ;
-(id)documentUUID;
-(id)initWithTemporaryFileURL:(id)arg0 ;
-(id)newExporterForType:(id)arg0 options:(id)arg1 preferredType:(*id)arg2 ;
-(id)packageDataForWrite;
-(id)persistenceWarningsForData:(id)arg0 isReadable:(BOOL)arg1 isExternal:(BOOL)arg2 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)context:(id)arg0 didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3 ;
-(void)coordinatedReadUsingAccessor:(id)arg0 ;
-(void)dealloc;
-(void)decryptedDocumentWithKey:(id)arg0 ;
-(void)documentDidLoad;
-(void)p_performSynchronousBlockOnMainThread:(id)arg0 ;
-(void)passwordStateDidChange;
-(void)setDocumentFileProtectionTo:(id)arg0 ;
-(void)setFileProtectionTo:(id)arg0 atPath:(id)arg1 ;


@end


#endif