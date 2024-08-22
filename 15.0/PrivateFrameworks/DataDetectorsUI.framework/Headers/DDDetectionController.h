// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDDETECTIONCONTROLLER_H
#define DDDETECTIONCONTROLLER_H

@class NSOperationQueue, NSMapTable, BCSBusinessQueryService, NSString;
@protocol UIActionSheetDelegate, OS_dispatch_queue, DDDetectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "DDActionController.h"

@interface DDDetectionController : NSObject <UIActionSheetDelegate>

 {
    NSOperationQueue *_fullScannerQueue;
    NSOperationQueue *_urlScannerQueue;
    NSObject<OS_dispatch_queue> *_protectQueue;
    NSMapTable *_containerToOperationsTable;
    NSMapTable *_containerToResultsTable;
    NSMapTable *_containerToContextsTable;
    DDActionController *_actionController;
}


@property (retain, nonatomic) BCSBusinessQueryService *_bizService; // ivar: _bizService
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DDDetectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(?)_shouldConsiderResultForCoreRecents;
+(?)updateContext:(?)arg0 forResult:(?)arg1 atIndexofStorage;
+(BOOL)largeScreenIdiom;
+(NSUInteger)allPublicTypes;
+(id)barcodeContext:(id)arg0 preview:(BOOL)arg1 contact:(id)arg2 ics:(id)arg3 ;
+(id)filterResults:(id)arg0 forTypes:(NSUInteger)arg1 referenceDate:(id)arg2 referenceTimeZone:(id)arg3 ;
+(id)lightUnderlineColorFromTextColor:(id)arg0 ;
+(id)messagesActionHandler:(SEL)arg0 ;
+(id)sharedController;
+(id)tapAndHoldSchemes;
+(void)setMessagesActionHandler:(id)arg0 ;
-(?)_checkIfBusinessWithResultmessageable;
-(?)_interactionDidStartForResult;
-(?)_phoneNumberFromResult;
-(?)_resultForAnchor:(?)arg0 forFramecontext;
-(?)_resultForIdentifier:(?)arg0 forContainercontext;
-(?)_resultForIdentifier:(?)arg0 withResultscontext;
-(?)_resultForURL:(?)arg0 forContainercontext;
-(?)_resultForURL:(?)arg0 withResultscontext;
-(?)_shouldImmediatelyLaunchDefaultActionForURLresult;
-(?)_shouldImmediatelyShowActionSheetForCoreResult;
-(?)actionsForResultcontext;
-(?)attributedTitleForResultupdaterBlock;
-(?)barcodeActionsForContext:(?)arg0 URL:(?)arg1 result:(?)arg2 contactics;
-(?)barcodePreviewActionForContext:(?)arg0 URL:(?)arg1 result:(?)arg2 contactics;
-(?)interactionDidStartForResult;
-(?)resultForDOMNodeforFrame;
-(?)resultForLinkAtIndexinTextStorage;
-(?)resultForNode:(?)arg0 url:(?)arg1 framecontextRef;
-(?)resultForURL:(?)arg0 identifier:(?)arg1 selectedText:(?)arg2 results:(?)arg3 contextextendedContext;
-(?)shouldImmediatelyLaunchDefaultActionForResult;
-(?)titleForResult:(?)arg0 subResult:(?)arg1 withURLcontext;
-(BOOL)_checkIfBusinessWithURL:(id)arg0 messageable:(*BOOL)arg1 ;
-(BOOL)_phoneNumberIsABusinessNumber:(id)arg0 messageable:(*BOOL)arg1 ;
-(BOOL)_shouldImmediatelyShowActionSheetForURL:(id)arg0 ;
-(BOOL)actionIsCancellable;
-(BOOL)isPerformingAction;
-(BOOL)shouldIgnoreMessageActionForURL:(id)arg0 ;
-(BOOL)shouldImmediatelyLaunchDefaultActionForTapAndHoldAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 ;
-(BOOL)shouldImmediatelyLaunchDefaultActionForURL:(id)arg0 ;
-(BOOL)shouldImmediatelyShowActionSheetForTapAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 ;
-(BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg0 forFrame:(id)arg1 ;
-(BOOL)shouldUseLightStyleAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 moreHighlight:(*BOOL)arg2 ;
-(BOOL)tryDismissActionInView:(id)arg0 ;
-(id)_URLForLinkAttributeValue:(id)arg0 ;
// -(id)_applyBlock:(id)arg0 withResultsAtIndex:(unk)arg1 ofStorage:(NSUInteger)arg2 context:(id)arg3  ;
-(id)_businessItemForNumber:(id)arg0 messageable:(*BOOL)arg1 ;
-(id)_ensureURLIsURL:(id)arg0 ;
-(id)_newOperationForContainer:(id)arg0 ;
-(id)_plainTextAugmentedContext:(id)arg0 withFrame:(id)arg1 ;
-(id)_resultForLinkAtIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 subResult:(*id)arg2 url:(*id)arg3 effectiveRange:(struct _NSRange *)arg4 ;
-(id)_subResultAtIndex:(NSUInteger)arg0 ofResult:(id)arg1 ;
-(id)actionsAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 context:(id)arg2 ;
-(id)actionsForAnchor:(id)arg0 url:(id)arg1 forFrame:(id)arg2 ;
-(id)actionsForDOMNode:(id)arg0 forFrame:(id)arg1 ;
-(id)actionsForURL:(id)arg0 ;
-(id)actionsForURL:(id)arg0 identifier:(id)arg1 selectedText:(id)arg2 results:(id)arg3 context:(id)arg4 ;
-(id)attributedTitleForResultAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 updaterBlock:(id)arg2 ;
-(id)attributedTitleForURL:(id)arg0 updaterBlock:(id)arg1 ;
-(id)copyContextForContainer:(id)arg0 ;
-(id)defaultActionAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 context:(id)arg2 ;
-(id)defaultActionForAnchor:(id)arg0 url:(id)arg1 forFrame:(id)arg2 ;
-(id)defaultActionForDOMNode:(id)arg0 forFrame:(id)arg1 ;
-(id)defaultActionForURL:(id)arg0 results:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)linkAtIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 ;
-(id)preferredTextAttributesForLinkAtCharacterIndex:(NSUInteger)arg0 ofStorage:(id)arg1 ;
-(id)titleForResultAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 context:(id)arg2 ;
-(id)titleForURL:(id)arg0 results:(id)arg1 context:(id)arg2 ;
-(void)_cacheBusinessPhoneNumber:(id)arg0 ;
-(void)_commonResetResultsForContainer:(id)arg0 ;
-(void)_doURLification:(id)arg0 ;
-(void)_enqueueOperation:(id)arg0 ;
-(void)_interactionDidStartForURL:(id)arg0 ;
-(void)_resetStoredResultsForContainer:(id)arg0 ;
-(void)_startCoalescedURLification:(id)arg0 ;
-(void)_startCoalescedURLification:(id)arg0 clearPreviousResults:(BOOL)arg1 ;
-(void)cancelAction;
-(void)cancelURLificationForContainer:(id)arg0 ;
-(void)cancelURLificationForFrame:(id)arg0 ;
-(void)containerWillBeRemoved:(id)arg0 ;
-(void)dealloc;
-(void)frameWillBeRemoved:(id)arg0 ;
-(void)interactionDidStartAtIndex:(NSUInteger)arg0 ofStorage:(id)arg1 ;
-(void)interactionDidStartForURL:(id)arg0 ;
-(void)performAction:(id)arg0 fromAlertController:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)performAction:(id)arg0 fromView:(id)arg1 alertController:(id)arg2 interactionDelegate:(id)arg3 ;
-(void)performAction:(id)arg0 inView:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)resetResultsForContainer:(id)arg0 ;
-(void)resetResultsForFrame:(id)arg0 ;
-(void)resetResultsForTextView:(id)arg0 ;
-(void)setContext:(id)arg0 forContainer:(id)arg1 ;
-(void)setContext:(id)arg0 forFrame:(id)arg1 ;
-(void)setResults:(struct __CFArray *)arg0 forContainer:(id)arg1 ;
-(void)setResults:(struct __CFArray *)arg0 forFrame:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg0 detectedTypes:(NSUInteger)arg1 ;
-(void)startURLificationForContainer:(id)arg0 detectedTypes:(NSUInteger)arg1 options:(int)arg2 ;
-(void)startURLificationForFrame:(id)arg0 detectedTypes:(NSUInteger)arg1 ;
-(void)startURLificationForFrame:(id)arg0 detectedTypes:(NSUInteger)arg1 options:(int)arg2 ;


@end


#endif