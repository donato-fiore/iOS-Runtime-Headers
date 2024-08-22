// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAAPPLICATIONDELEGATE_H
#define TSAAPPLICATIONDELEGATE_H



#import "TSABaseApplicationDelegate.h"

@interface TSAApplicationDelegate : TSABaseApplicationDelegate

@property (getter=isActivating) BOOL activating; // ivar: _activating
@property (copy, nonatomic) id *alertCompletionBlock; // ivar: _alertCompletionBlock
@property BOOL hasNotifiedEnterBackground; // ivar: _hasNotifiedEnterBackground
@property (getter=isInBackground) BOOL inBackground; // ivar: _inBackground
@property (getter=isTerminating) BOOL terminating; // ivar: _terminating


+(id)sharedDelegate;
-(BOOL)centerOnInitialSelection;
-(id)image32IconForTXTFiles;
-(id)init;
-(id)noDocumentsImagePath;
-(id)previewImageNameForDocumentType:(id)arg0 ;
-(id)previewImageNameForEncryptedNativeDocument;
-(id)previewImageNameForNativeDocument;
-(id)stringForImportingDocument;
-(void)applicationDidReceiveMemoryWarning:(id)arg0 ;
-(void)dealloc;
-(void)persistenceError:(id)arg0 ;


@end


#endif