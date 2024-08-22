// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIPHOTOSONEUPCONTROLLER_H
#define SEARCHUIPHOTOSONEUPCONTROLLER_H

@class PXPhotoKitAssetsDataSourceManager, SFShowPhotosOneUpViewCommand, NSString, UIView, PXAssetReference, UIViewController, NSDictionary;
@protocol PXOneUpPresentationDelegate, PXActionPerformerDelegate;

#import <Foundation/Foundation.h>

#import "SearchUICommandEnvironment.h"

@interface SearchUIPhotosOneUpController : NSObject <PXOneUpPresentationDelegate, PXActionPerformerDelegate>



@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *activeDataSourceManager; // ivar: _activeDataSourceManager
@property (retain, nonatomic) SFShowPhotosOneUpViewCommand *command; // ivar: _command
@property (retain) SearchUICommandEnvironment *commandEnvironment; // ivar: _commandEnvironment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) UIView *hiddenView; // ivar: _hiddenView
@property (nonatomic) BOOL isSyndicated; // ivar: _isSyndicated
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference; // ivar: _navigatedAssetReference
@property (weak) UIViewController *peekedViewController; // ivar: _peekedViewController
@property (retain) NSDictionary *rowModelsForCorespotlightIdentifiers; // ivar: _rowModelsForCorespotlightIdentifiers
@property (readonly) Class superclass;


+(id)bundleIdentifierForAsset:(id)arg0 ;
+(id)corespotlightIdentifierForAsset:(id)arg0 ;
+(id)sharedController;
-(BOOL)updateWithRowModel:(id)arg0 environment:(id)arg1 ;
-(NSInteger)oneUpPresentationActionContext:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(id)imageViewInView:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationActionManager:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMatchedQueryStrings:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)previewViewControllerForRowModel:(id)arg0 environment:(id)arg1 ;
-(id)rowModelForAsset:(id)arg0 ;
-(id)rowModelForAssetReference:(id)arg0 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(id)viewForAssetReference:(id)arg0 ;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)presentOneUpViewForRowModel:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif