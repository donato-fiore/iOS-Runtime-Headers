// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTSOURCESMANAGER_H
#define PXIMPORTSOURCESMANAGER_H

@class NSMutableArray, PHImportSource, NSString, PHImportController, NSArray;
@protocol PHImportControllerObserver, PHImportSourceObserver;


#import "PXObservable.h"

@interface PXImportSourcesManager : PXObservable <PHImportControllerObserver, PHImportSourceObserver>

 {
    NSMutableArray *_importSources;
    PHImportSource *_URLImportSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHImportController *importController; // ivar: _importController
@property (readonly, nonatomic) NSArray *importSources;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)init;
-(void)_notifyObserversDidAddImportSource:(id)arg0 ;
-(void)_notifyObserversDidRemoveImportSource:(id)arg0 ;
-(void)_notifyObserversDidUpdateImportSource:(id)arg0 ;
-(void)_updateImportURLSource:(id)arg0 ;
-(void)capabilitiesDidChangeForImportSource:(id)arg0 ;
-(void)importController:(id)arg0 addedImportSource:(id)arg1 ;
-(void)importController:(id)arg0 failedToAddImportSource:(id)arg1 exceptions:(id)arg2 ;
-(void)importController:(id)arg0 removedImportSource:(id)arg1 ;
-(void)importSource:(id)arg0 didAddAssets:(id)arg1 ;
-(void)importSource:(id)arg0 didDeleteAsset:(id)arg1 ;
-(void)importSource:(id)arg0 didRemoveAssets:(id)arg1 ;
-(void)importSource:(id)arg0 didUpdateAsset:(id)arg1 propertyMask:(unsigned short)arg2 ;
-(void)nameDidChangeForImportSource:(id)arg0 ;
-(void)userHasTrustedHostForImportSource:(id)arg0 ;
-(void)userRequiredToTrustHostForImportSource:(id)arg0 ;


@end


#endif