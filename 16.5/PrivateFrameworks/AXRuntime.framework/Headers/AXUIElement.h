// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIELEMENT_H
#define AXUIELEMENT_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol UIElementProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface AXUIElement : NSObject <UIElementProtocol, NSCopying>

 {
    NSInteger _cachedRefCount;
    NSMutableDictionary *_cachedAttributes;
    BOOL _isValid;
}


@property (readonly, nonatomic) *__AXUIElement axElement; // ivar: _axElement
@property (readonly, nonatomic) NSDictionary *cachedAttributes;
@property (readonly, nonatomic) NSMutableDictionary *copyCachedAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxiedMLElementsForApp:(id)arg0 ;
+(id)scrollAncestorAtCoordinate:(struct CGPoint )arg0 ;
+(id)uiApplicationAtCoordinate:(struct CGPoint )arg0 ;
+(id)uiApplicationForContext:(unsigned int)arg0 ;
+(id)uiElementAtCoordinate:(struct CGPoint )arg0 ;
+(id)uiElementAtCoordinate:(struct CGPoint )arg0 displayId:(unsigned int)arg1 ;
+(id)uiElementAtCoordinate:(struct CGPoint )arg0 forApplication:(struct __AXUIElement *)arg1 contextId:(unsigned int)arg2 ;
+(id)uiElementAtCoordinate:(struct CGPoint )arg0 forApplication:(struct __AXUIElement *)arg1 contextId:(unsigned int)arg2 displayId:(unsigned int)arg3 ;
+(id)uiElementAtCoordinate:(struct CGPoint )arg0 startWithElement:(id)arg1 ;
+(id)uiElementWithAXElement:(struct __AXUIElement *)arg0 ;
+(id)uiElementWithAXElement:(struct __AXUIElement *)arg0 cache:(id)arg1 ;
+(id)uiSystemWideApplication;
+(struct __AXUIElement *)systemWideAXUIElement;
+(void)applyElementAttributeCacheScheme:(NSUInteger)arg0 ;
+(void)applyElementCustomAttributeCacheScheme:(id)arg0 ;
+(void)initialize;
-(*void)_cachedValueForAttribute:(NSInteger)arg0 ;
-(*void)modifyStaticCacheValue:(*void)arg0 ;
-(BOOL)boolWithAXAttribute:(NSInteger)arg0 ;
-(BOOL)canPerformAXAction:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMLElement;
-(BOOL)isMockElement;
-(BOOL)isValid;
-(BOOL)isValidForApplication:(id)arg0 ;
-(BOOL)performAXAction:(int)arg0 ;
-(BOOL)performAXAction:(int)arg0 withValue:(id)arg1 ;
-(BOOL)performAXAction:(int)arg0 withValue:(id)arg1 fencePort:(unsigned int)arg2 ;
-(NSInteger)_lineEndPosition;
-(NSInteger)_lineStartPosition;
-(id)_attributedValueForRange:(struct _NSRange )arg0 ;
-(id)_elementsWithParameter:(NSInteger)arg0 parameters:(id)arg1 prefetchAttributes:(BOOL)arg2 ;
-(id)_objectForRange:(struct _NSRange )arg0 withParameterizedAttribute:(NSInteger)arg1 ;
-(id)_outputCache;
-(id)_valueForRange:(struct _NSRange )arg0 ;
-(id)arrayWithAXAttribute:(NSInteger)arg0 ;
-(id)childrenIncludingPrefetchedAttributesWithCount:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAXElement:(struct __AXUIElement *)arg0 ;
-(id)initWithAXElement:(struct __AXUIElement *)arg0 cache:(id)arg1 ;
-(id)nextElementsIncludingPrefetchedAttributesWithCount:(NSUInteger)arg0 ;
-(id)nextElementsWithCount:(NSUInteger)arg0 ;
-(id)nextElementsWithParameters:(id)arg0 ;
-(id)numberWithAXAttribute:(NSInteger)arg0 ;
-(id)objectWithAXAttribute:(NSInteger)arg0 ;
-(id)objectWithAXAttribute:(NSInteger)arg0 parameter:(*void)arg1 ;
-(id)previousElementsWithCount:(NSUInteger)arg0 ;
-(id)previousElementsWithParameters:(id)arg0 ;
-(id)stringWithAXAttribute:(NSInteger)arg0 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 parameter:(*void)arg1 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 parameter:(*void)arg1 fetchAttributes:(BOOL)arg2 ;
-(id)valueArrayWithAXAttributes:(struct __CFArray *)arg0 ;
-(int)pid;
-(struct CGColor *)colorWithAXAttribute:(NSInteger)arg0 ;
-(struct CGPath *)pathWithAXAttribute:(NSInteger)arg0 ;
-(struct CGPoint )pointWithAXAttribute:(NSInteger)arg0 ;
-(struct CGRect )rectWithAXAttribute:(NSInteger)arg0 ;
-(struct _NSRange )_lineRangeForPosition:(NSUInteger)arg0 ;
-(struct _NSRange )_lineRangeWithFaultTolerance:(NSInteger)arg0 forward:(BOOL)arg1 ;
-(struct _NSRange )_selectedTextRange;
-(struct _NSRange )nextCursorRangeInDirection:(NSUInteger)arg0 unit:(NSUInteger)arg1 outputRange:(struct _NSRange *)arg2 ;
-(struct _NSRange )nextCursorRangeInDirection:(NSUInteger)arg0 unit:(NSUInteger)arg1 outputRange:(struct _NSRange *)arg2 currentCursorRange:(struct _NSRange )arg3 ;
-(struct _NSRange )rangeWithAXAttribute:(NSInteger)arg0 ;
-(unsigned int)_activeKeyboardContextId;
-(void)_createCache:(BOOL)arg0 ;
-(void)_invalidate;
-(void)_setCachedValue:(*void)arg0 forAttribute:(NSInteger)arg1 ;
-(void)dealloc;
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
-(void)setAXElement:(struct __AXUIElement *)arg0 ;
-(void)updateCache:(NSInteger)arg0 ;
-(void)updateCacheWithAttributes:(id)arg0 ;


@end


#endif