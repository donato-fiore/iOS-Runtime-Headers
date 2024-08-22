// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTFILETRANSFERSERVICE_H
#define DTFILETRANSFERSERVICE_H

@class DTXService, NSMutableArray, NSString;
@protocol DTFileTransferServiceDebugInboxAuthorizedAPI, OS_dispatch_queue;



@interface DTFileTransferService : DTXService <DTFileTransferServiceDebugInboxAuthorizedAPI>

 {
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSMutableArray *_activeFileTransfers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(BOOL)_fileTransfer:(id)arg0 isValidForApplication:(id)arg1 ;
-(BOOL)_unarchivePackageIfNecessary:(id)arg0 ;
-(id)_beginTransferOfFileNamed:(id)arg0 outError:(*id)arg1 ;
-(id)_moveFileTransfer:(id)arg0 inDataContainerOfApplicationBundleIdentifier:(id)arg1 withError:(*id)arg2 ;
-(id)_moveFileTransfer:(id)arg0 toDebugInboxOfApplicationWithBundleIdentifier:(id)arg1 outError:(*id)arg2 ;
-(id)initWithChannel:(id)arg0 ;
-(id)openFileInDocumentDebugInbox:(id)arg0 forApplicationWithBundleIdentifier:(id)arg1 withAnnotation:(id)arg2 ;
-(id)transferData:(id)arg0 intoAppContainerForBundleIdentifier:(id)arg1 filename:(id)arg2 ;
-(id)transferFile:(id)arg0 toDebugInboxOfApplicationWithBundleIdentifier:(id)arg1 destinationFilename:(id)arg2 ;


@end


#endif