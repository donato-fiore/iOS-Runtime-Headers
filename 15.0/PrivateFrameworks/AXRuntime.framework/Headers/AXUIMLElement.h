// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUIMLELEMENT_H
#define AXUIMLELEMENT_H

@class NSString, NSMutableArray;


#import "AXUIElement.h"

@interface AXUIMLElement : AXUIElement {
    AXUIElement *_parent;
    AXUIElement *_hostingParent;
    CGRect _touchExpandedFrame;
    NSUInteger _traits;
    NSString *_value;
    NSInteger _uiClass;
    NSMutableArray *_customActions;
    BOOL _isReconciling;
}


@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger mlGeneration; // ivar: _mlGeneration
@property (nonatomic) CGRect portraitUpFrame; // ivar: _portraitUpFrame
@property (nonatomic) CGPoint rotatedCenterPoint; // ivar: _rotatedCenterPoint
@property (nonatomic) CGRect rotatedFrame; // ivar: _rotatedFrame
@property (nonatomic) CGRect screenFrame; // ivar: _screenFrame


+(BOOL)performFuzzyHitTestNextTime;
+(NSInteger)_interfaceOrientationForElement:(id)arg0 ;
+(id)_cachedMLElementsForID:(id)arg0 ;
+(id)_textDetectionOptions:(id)arg0 options:(id)arg1 ;
+(id)cachedElementForParent:(struct __AXUIElement *)arg0 ;
+(id)elementsInDirection:(NSInteger)arg0 withElement:(id)arg1 nextElements:(id)arg2 ;
+(id)sharedFingerController;
+(struct ? )_windowContextInformation:(id)arg0 ;
+(struct CGRect )_appRelativeRectForRect:(struct CGRect )arg0 contextId:(unsigned int)arg1 ;
+(struct CGRect )_convertFrameToPortraitUp:(struct CGRect )arg0 fromOrientation:(NSInteger)arg1 appFrame:(struct CGRect )arg2 ;
+(struct CGRect )_screenRelativeRectForRect:(struct CGRect )arg0 contextId:(unsigned int)arg1 ;
+(void)_applyAXTraitsForElement:(id)arg0 uiClass:(NSInteger)arg1 ;
+(void)_fireRefreshTimer;
+(void)_queue_createMLElements:(id)arg0 postDelegateCallback:(BOOL)arg1 ;
+(void)_setCachedMLElements:(id)arg0 forID:(id)arg1 ;
+(void)clearCaches;
+(void)clearCachesForAppsExcluding:(id)arg0 ;
+(void)initialize;
+(void)setAutoRefresh:(BOOL)arg0 forApp:(id)arg1 ;
+(void)setFrameDelegate:(id)arg0 ;
+(void)setPerformFuzzyHitTestNextTime:(BOOL)arg0 ;
-(*void)copyAttributeValue:(NSInteger)arg0 ;
-(*void)copyAttributeValue:(NSInteger)arg0 parameter:(*void)arg1 ;
-(*void)copyAttributeValue:(NSInteger)arg0 parameter:(*void)arg1 baseElement:(id)arg2 ;
-(BOOL)_handleScroll:(int)arg0 ;
-(BOOL)_handleScrollToVisible:(id)arg0 ;
-(BOOL)_isTopLevelMLElement;
-(BOOL)_shouldDemoteElement:(id)arg0 withMLElements:(id)arg1 ;
-(BOOL)_shouldPromoteElement:(id)arg0 ;
-(BOOL)_simulateScrollAction:(int)arg0 withScreenDistanceFactor:(CGFloat)arg1 forVisibleAction:(BOOL)arg2 ;
-(BOOL)boolWithAXAttribute:(NSInteger)arg0 ;
-(BOOL)canPerformAXAction:(int)arg0 ;
-(BOOL)isMLElement;
-(BOOL)isProbablyEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)isValidForApplication:(id)arg0 ;
-(BOOL)performAXAction:(int)arg0 ;
-(BOOL)performAXAction:(int)arg0 withValue:(id)arg1 fencePort:(unsigned int)arg2 ;
-(id)_appElement;
-(id)_currentMLElements;
-(id)_findMatchingElementForMLElement:(id)arg0 flattenedAppElements:(id)arg1 ;
-(id)_flattenedAppElements;
-(id)_reconcileAppElementsWithMLElements:(id)arg0 flattenedElements:(id)arg1 ;
-(id)_reconcileElements:(id)arg0 ;
-(id)_reconciledElements;
-(id)_topLevelAppElement;
-(id)_topLevelMLElement;
-(id)arrayWithAXAttribute:(NSInteger)arg0 ;
-(id)initWithParentElement:(struct __AXUIElement *)arg0 ;
-(id)nextElementsWithCount:(NSUInteger)arg0 ;
-(id)nextElementsWithCount:(NSUInteger)arg0 baseElement:(id)arg1 ;
-(id)nextElementsWithParameters:(id)arg0 ;
-(id)numberWithAXAttribute:(NSInteger)arg0 ;
-(id)objectWithAXAttribute:(NSInteger)arg0 ;
-(id)objectWithAXAttribute:(NSInteger)arg0 parameter:(*void)arg1 ;
-(id)previousElementsWithCount:(NSUInteger)arg0 ;
-(id)previousElementsWithCount:(NSUInteger)arg0 baseElement:(id)arg1 ;
-(id)previousElementsWithParameters:(id)arg0 ;
-(id)stringWithAXAttribute:(NSInteger)arg0 ;
-(id)topLevelMLElement;
-(id)uiElementsWithAttribute:(NSInteger)arg0 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 parameter:(*void)arg1 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 parameter:(*void)arg1 fetchAttributes:(BOOL)arg2 ;
-(id)valueArrayWithAXAttributes:(struct __CFArray *)arg0 ;
-(struct CGColor *)colorWithAXAttribute:(NSInteger)arg0 ;
-(struct CGPath *)pathWithAXAttribute:(NSInteger)arg0 ;
-(struct CGPoint )pointWithAXAttribute:(NSInteger)arg0 ;
-(struct CGRect )frame;
-(struct CGRect )rectWithAXAttribute:(NSInteger)arg0 ;
-(struct _NSRange )rangeWithAXAttribute:(NSInteger)arg0 ;
-(struct __AXUIElement *)copyElementAtPosition:(struct CGPoint )arg0 ;
-(void)_applyCustomActionsForFeature:(id)arg0 screenScale:(CGFloat)arg1 screenRect:(struct CGRect )arg2 ;
-(void)_forceMLElementRefresh:(id)arg0 postDelegateCallback:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)disableCache;
-(void)enableCache:(BOOL)arg0 ;
-(void)setAXAttribute:(NSInteger)arg0 withArray:(id)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withBOOL:(BOOL)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withFloat:(float)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withNumber:(id)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withObject:(id)arg1 synchronous:(BOOL)arg2 ;
-(void)setAXAttribute:(NSInteger)arg0 withPoint:(struct CGPoint )arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withSize:(struct CGSize )arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withString:(id)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withUIElement:(id)arg1 ;
-(void)setAXAttribute:(NSInteger)arg0 withUIElementArray:(id)arg1 ;
-(void)updateCache:(NSInteger)arg0 ;
-(void)updateCacheWithAttributes:(id)arg0 ;


@end


#endif