// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXIMPORTMANAGER_H
#define PXIMPORTMANAGER_H

@class NSMapTable, NSProgress;

#import <Foundation/Foundation.h>


@interface PXImportManager : NSObject {
    NSMapTable *_progressToProvidersMapping;
    NSMapTable *_progressToCompletionHandlerMapping;
    NSMapTable *_progressToSharedSourcesCompletionHandlerMapping;
    NSMapTable *_progressToErrorsMapping;
    NSMapTable *_providersToImportedResultObjectMapping;
}


@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress


+(id)defaultManager;
+(id)supportedTypeIdentifiers;
-(id)_assetsForImportedItemProviders:(id)arg0 ;
-(id)_sourcesForItemProviders:(id)arg0 ;
-(id)importDragItems:(id)arg0 completionHandler:(id)arg1 ;
-(id)importSharedSourcesForDragItems:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(void)_addProgress:(id)arg0 forItemProviders:(id)arg1 ;
-(void)_addProgress:(id)arg0 forItemProviders:(id)arg1 assetCreationCompletionHandler:(id)arg2 ;
-(void)_addProgress:(id)arg0 forItemProviders:(id)arg1 sharedSourceCompletionHandler:(id)arg2 ;
-(void)_handleCompletionOfImportForItemProvider:(id)arg0 resultObject:(id)arg1 progress:(id)arg2 error:(id)arg3 ;
-(void)_removeObserverFromProgress:(id)arg0 ;
-(void)fetchAssetsFromDrop:(id)arg0 importIfNeeded:(BOOL)arg1 completion:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif