// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPTRANSLATOR_IOS_H
#define AXPTRANSLATOR_IOS_H

@class NSMutableDictionary, NSMutableArray, AXUIElement;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "AXPTranslator.h"

@interface AXPTranslator_iOS : AXPTranslator {
    NSMutableDictionary *_translationCache;
    NSMutableDictionary *_backTranslationCache;
    NSMutableArray *_cachedElements;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BOOL _axAppReadyFlag;
    NSObject<OS_dispatch_semaphore> *_threadSemaphore;
    BOOL _accessibilityEnabled;
}


@property (retain, nonatomic) *__AXObserver axEventObserver; // ivar: _axEventObserver
@property (retain, nonatomic) AXUIElement *systemAppElement; // ivar: _systemAppElement
@property (retain, nonatomic) AXUIElement *systemWideElement; // ivar: _systemWideElement


+(id)sharedInstance;
+(id)translationObjectFromUIKitObject:(id)arg0 ;
-(BOOL)_processPerformAction:(int)arg0 value:(id)arg1 ;
-(BOOL)accessibilityEnabled;
-(NSInteger)attributeFromRequest:(NSUInteger)arg0 ;
-(NSUInteger)_processRoleAttributeRequest:(id)arg0 traits:(NSUInteger)arg1 error:(*NSUInteger)arg2 ;
-(id)_postProcessAttributeRequest:(id)arg0 iosAttribute:(NSInteger)arg1 axpAttribute:(NSUInteger)arg2 result:(id)arg3 ;
-(id)_preprocessRequest:(NSInteger)arg0 parameter:(id)arg1 ;
-(id)_processAccessibilityAttributeValue:(NSInteger)arg0 ;
-(id)_processAccessibilityAttributeValue:(NSInteger)arg0 forParameter:(id)arg1 ;
-(id)_processAttributeSpecialCases:(NSUInteger)arg0 uiElement:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processAttributeSpecialCases:(NSUInteger)arg0 uiElement:(id)arg1 parameter:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)_processAttributedStringForRangeAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processAuditIssuesAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processAuditIssuesResult:(id)arg0 ;
-(id)_processBoundsForRangeAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processCellWithIndexPathAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processChildrenAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processClassNameAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processCustomActionsAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processCustomRotorData:(id)arg0 ;
-(id)_processDirectAttributeRequest:(id)arg0 iosAttribute:(NSInteger)arg1 axpAttribute:(NSUInteger)arg2 parameter:(id)arg3 error:(*NSUInteger)arg4 ;
-(id)_processElementHelpAttributeResquest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processFirstContainedElement:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processFirstElementForFocus:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processFocusedElementAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processIsEnabledAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processIsFocusedAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processIsRemoteElementAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processIsSelectedAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processLabelAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 axpAttribute:(NSUInteger)arg2 ;
-(id)_processLastContainedElement:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processLineRangeAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processLinkedUIElementsAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg0 parameter:(id)arg1 direction:(NSInteger)arg2 error:(*NSUInteger)arg3 ;
-(id)_processNextLineRangeAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processNumberOfCharactersAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processOutgoingCustomRotorSearchResult:(id)arg0 ;
-(id)_processParameterizedAttributeRequest:(id)arg0 attribute:(NSInteger)arg1 parameter:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)_processPreviousLineRangeAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processRawElementDataRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processRoleAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processRoleDescriptionAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processSelectedTextRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processStartsMediaSessionAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processStringForRangeAttributeRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)_processSubroleAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processSyntheticValueAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processUserInputLabelsAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 axpAttribute:(NSUInteger)arg2 ;
-(id)_processValueAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 axpAttribute:(NSUInteger)arg2 ;
-(id)_processViewControllerDescriptionAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processVisibleOpaqueElements:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processVisisbleTextRangeAttributeRequest:(id)arg0 error:(*NSUInteger)arg1 ;
-(id)_processingSmuggledMarzipanRequest:(id)arg0 parameter:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)attributedStringConversionBlock:(SEL)arg0 ;
-(id)axElementFromTranslatorRequest:(id)arg0 ;
-(id)backTranslationCache;
-(id)init;
-(id)platformElementFromTranslation:(id)arg0 ;
-(id)processActionRequest:(id)arg0 ;
-(id)processApplicationObject:(id)arg0 ;
-(id)processAttributeRequest:(id)arg0 ;
-(id)processCanSetAttribute:(id)arg0 ;
-(id)processFrontMostApp:(id)arg0 ;
-(id)processHitTest:(id)arg0 ;
-(id)processMultipleAttributeRequest:(id)arg0 ;
-(id)processSetAttribute:(id)arg0 ;
-(id)processSupportedActions:(id)arg0 ;
-(id)processSupportsAttributes:(id)arg0 ;
-(id)remoteTranslationDataWithTranslation:(id)arg0 pid:(int)arg1 ;
-(id)translationCache;
-(id)translationObjectFromData:(id)arg0 ;
-(id)translationObjectFromPlatformElement:(struct __AXUIElement *)arg0 ;
-(struct __AXUIElement *)createPlatformElementFromTranslationObject:(id)arg0 ;
-(void)_addCacheElement:(id)arg0 translationObject:(id)arg1 ;
-(void)_enableAccessibilityBridgeRuntime;
-(void)_registerAccessibilityNotifications;
-(void)_removeCacheEntriesForElement:(id)arg0 ;
-(void)_signalAppAXReady;
-(void)enableAccessibility;
-(void)initializeAXRuntimeForSystemAppServer;
-(void)processPlatformNotification:(NSUInteger)arg0 data:(id)arg1 associatedObject:(id)arg2 ;
-(void)setAccessibilityEnabled:(BOOL)arg0 ;


@end


#endif