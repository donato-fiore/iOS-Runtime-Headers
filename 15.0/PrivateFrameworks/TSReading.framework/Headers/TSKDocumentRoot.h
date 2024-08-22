// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKDOCUMENTROOT_H
#define TSKDOCUMENTROOT_H

@class NSMutableArray, NSString, TSKDocumentSupport, NSLocale, TSKPasteboardController, NSDictionary, UIViewController<TSKDocumentViewController>;
@protocol TSKAccessControllerDelegate, TSKModel, TSKSearchTargetProvider, OS_dispatch_queue, TSKSearchReference, TSKUndoRedoState;


#import "TSPObject.h"
#import "TSKAccessController.h"
#import "TSKAnnotationAuthorStorage.h"
#import "TSKChangeNotifier.h"
#import "TSSStylesheet.h"
#import "TSSTheme.h"

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel, TSKSearchTargetProvider>

 {
    NSObject<OS_dispatch_queue> *_iCloudTeardownStackQueue;
    NSMutableArray *_iCloudTeardownStack;
}


@property (readonly, nonatomic) TSKAccessController *accessController; // ivar: _accessController
@property (retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference; // ivar: _activeSearchReference
@property (retain, nonatomic) TSKAnnotationAuthorStorage *annotationAuthorStorage; // ivar: _annotationAuthorStorage
@property (readonly, nonatomic) NSUInteger applicationType;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier; // ivar: _changeNotifier
@property (readonly, nonatomic) NSString *creationLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKDocumentSupport *documentSupport; // ivar: _documentSupport
@property (nonatomic, getter=isFindActive) BOOL findActive; // ivar: _isFindActive
@property (readonly, nonatomic) BOOL hasICloudConflict;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBeingLocalized; // ivar: _isBeingLocalized
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) TSKPasteboardController *pasteboardController; // ivar: _pasteboardController
@property (retain, nonatomic) NSDictionary *searchReferencesToHighlight; // ivar: _searchReferencesToHighlight
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSSTheme *theme;
@property (retain, nonatomic) NSObject<TSKUndoRedoState> *undoRedoState; // ivar: _undoRedoState
@property (readonly, nonatomic) UIViewController<TSKDocumentViewController> *viewController;
@property (readonly, nonatomic) NSUInteger writingDirection;


+(Class)commandControllerClass;
-(BOOL)documentCacheHasAtMostFileProtection:(id)arg0 ;
-(BOOL)documentDisallowsHighlightsOnStorage:(id)arg0 ;
-(BOOL)hasICloudTeardownObserver;
-(BOOL)isDirectionRightToLeft;
-(BOOL)shouldHyphenate;
-(BOOL)useLigatures;
-(BOOL)writeData:(id)arg0 atDocumentCachePath:(id)arg1 ;
-(NSInteger)addObserverForICloudTeardownWithBlock:(id)arg0 ;
-(NSUInteger)nextRootSearchTargetIndexFromIndex:(NSUInteger)arg0 forString:(id)arg1 options:(NSUInteger)arg2 inDirection:(NSUInteger)arg3 ;
-(NSUInteger)rootSearchTargetCountThroughIndex:(NSUInteger)arg0 ;
-(id)additionalDocumentPropertiesForWrite;
-(id)changeSessionManagerForModel:(id)arg0 ;
-(id)changeVisibility;
-(id)commandForPropagatingPresetChangeCommand:(id)arg0 alwaysPreserveAppearance:(BOOL)arg1 ;
-(id)dataFromDocumentCachePath:(id)arg0 ;
-(id)documentFonts;
-(id)initWithContext:(id)arg0 ;
-(id)modelEnumerator;
-(id)modelEnumeratorForObjectsConformingToProtocol:(id)arg0 ;
-(id)modelEnumeratorForObjectsOfClass:(Class)arg0 ;
-(id)modelEnumeratorForObjectsPassingTest:(id)arg0 ;
-(id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg0 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 ;
-(id)unavailableDocumentFonts;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg0 ;
-(struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg0 ;
-(struct __CFLocale *)hyphenationLocale;
-(void)changeDocumentCacheFileProtection:(id)arg0 ;
-(void)coalesceChanges:(id)arg0 ;
-(void)dealloc;
-(void)didSaveWithEncryptionChange;
-(void)documentDidLoad;
-(void)enumerateStyleClientsUsingBlock:(id)arg0 ;
-(void)markAsModifiedIfLocaleIsOutOfDate;
-(void)notifyICloudTeardownObservers;
-(void)removeICloudTeardownObserver:(NSInteger)arg0 ;
-(void)updateForNonCommandChangesWithWriteLock:(id)arg0 ;
-(void)withRootSearchTargetAtIndex:(NSUInteger)arg0 executeBlock:(id)arg1 ;


@end


#endif