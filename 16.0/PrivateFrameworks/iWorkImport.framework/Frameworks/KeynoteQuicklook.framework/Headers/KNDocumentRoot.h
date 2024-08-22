// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNDOCUMENTROOT_H
#define KNDOCUMENTROOT_H

@class TSADocumentRoot, NSString, KNRecordingSyncMaintainer;
@protocol TSWPDrawableOLC, TSKModel, TSTResolverContainerNameProvider, KNDocumentRootDelegate;


#import "KNShow.h"

@interface KNDocumentRoot : TSADocumentRoot <TSWPDrawableOLC, TSKModel, TSTResolverContainerNameProvider>

 {
    BOOL _isObservingRecording;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<KNDocumentRootDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isShowcastAllowed;
@property (retain, nonatomic) KNRecordingSyncMaintainer *recordingSyncMaintainer; // ivar: _recordingSyncMaintainer
@property (retain, nonatomic) KNShow *show; // ivar: _show
@property (readonly) Class superclass;


+(void)localizeModelObject:(id)arg0 withTemplateBundle:(id)arg1 andLocale:(id)arg2 ;
-(BOOL)isMultiPageForQuickLook;
-(BOOL)isSharedReadOnly;
-(BOOL)shouldShowFloatingCommentInfo:(id)arg0 ;
-(BOOL)validateSlideNode:(id)arg0 ;
-(BOOL)validateUIState:(id)arg0 ;
-(CGFloat)stickyCommentScaleMultiplier;
-(NSInteger)compareLocationSortingInfo:(id)arg0 toSortingInfo:(id)arg1 ;
-(NSUInteger)applicationType;
-(NSUInteger)writingDirectionForStorage;
-(id)UIStateForChart:(id)arg0 ;
-(id)childEnumerator;
-(id)createViewStateRootForContinuation:(BOOL)arg0 ;
-(id)freehandDrawingToolkitUIState;
-(id)initWithContext:(id)arg0 ;
-(id)knDelegate;
-(id)nameForResolverContainer:(id)arg0 ;
-(id)protected_defaultTextPresetOrdering;
-(id)resolverContainerForName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)resolverContainerNameForResolver:(id)arg0 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg0 ;
-(id)resolverMatchingName:(id)arg0 contextContainerName:(id)arg1 ;
-(id)resolverMatchingName:(id)arg0 contextResolver:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg0 ;
-(id)slideNodeForClearedShow;
-(id)stylesToNotResizeInStylesheet:(id)arg0 ;
-(id)stylesheet;
-(id)theme;
-(id)warningLocationDescriptionForAffectedObjects:(id)arg0 sortingInfo:(*id)arg1 ;
-(void)dealloc;
-(void)documentDidLoad;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_applicationDidBecomeActive:(id)arg0 ;
-(void)p_applicationWillResignActive:(id)arg0 ;
-(void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg0 ;
-(void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg0 andMasterSlideNodess:(id)arg1 ;
-(void)prepareForSavingAsTemplate;
-(void)preprocessForSaveAsTheme;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setDocumentLocale:(id)arg0 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg0 ;
-(void)setTheme:(id)arg0 ;
-(void)setThemeForTemplateImport:(id)arg0 ;
-(void)setUIState:(id)arg0 forChart:(id)arg1 ;
-(void)setUiState:(id)arg0 ;
-(void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
-(void)willClose;


@end


#endif