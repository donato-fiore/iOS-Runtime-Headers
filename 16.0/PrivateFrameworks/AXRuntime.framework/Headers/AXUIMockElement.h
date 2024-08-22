// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIMOCKELEMENT_H
#define AXUIMOCKELEMENT_H

@class NSMutableDictionary;
@protocol NSCopying;


#import "AXUIElement.h"

@interface AXUIMockElement : AXUIElement <NSCopying>

 {
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
}


@property (retain, nonatomic) NSMutableDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) id *cacheUpdatedCallback; // ivar: _cacheUpdatedCallback
@property (copy, nonatomic) id *handleActionBlock; // ivar: _handleActionBlock
@property (nonatomic) BOOL isApplication; // ivar: _isApplication
@property (nonatomic) BOOL usesCarriageReturnAsLinesSeparator; // ivar: _usesCarriageReturnAsLinesSeparator


+(id)uiElementAtCoordinate:(struct CGPoint )arg0 ;
+(void)applyElementAttributeCacheScheme:(NSUInteger)arg0 ;
-(BOOL)boolWithAXAttribute:(NSInteger)arg0 ;
-(BOOL)canPerformAXAction:(int)arg0 ;
-(BOOL)canSetAXAttribute:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMockElement;
-(BOOL)isValid;
-(BOOL)isValidForApplication:(id)arg0 ;
-(BOOL)performAXAction:(int)arg0 ;
-(BOOL)performAXAction:(int)arg0 withValue:(id)arg1 ;
-(BOOL)performAXAction:(int)arg0 withValue:(id)arg1 fencePort:(unsigned int)arg2 ;
-(NSInteger)longWithAXAttribute:(NSInteger)arg0 ;
-(NSUInteger)_lineNumberForPoint:(struct CGPoint )arg0 ;
-(NSUInteger)arrayCountWithAXAttribute:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(float)floatWithAXAttribute:(NSInteger)arg0 ;
-(id)_valueForAttribute:(NSInteger)arg0 ;
-(id)arrayWithAXAttribute:(NSInteger)arg0 ;
-(id)cachedAttributes;
-(id)copyCachedAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)endLoggingActions;
-(id)init;
-(id)nextElementsWithCount:(NSUInteger)arg0 ;
-(id)nextElementsWithParameters:(id)arg0 ;
-(id)numberWithAXAttribute:(NSInteger)arg0 ;
-(id)objectWithAXAttribute:(NSInteger)arg0 ;
-(id)objectWithAXAttribute:(NSInteger)arg0 parameter:(*void)arg1 ;
-(id)performBlockWhileLoggingPerformedActions:(id)arg0 ;
-(id)previousElementsWithCount:(NSUInteger)arg0 ;
-(id)previousElementsWithParameters:(id)arg0 ;
-(id)stringWithAXAttribute:(NSInteger)arg0 ;
-(id)uiElementArrayForAXAttribute:(NSInteger)arg0 ;
-(id)uiElementWithAXAttribute:(NSInteger)arg0 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 parameter:(*void)arg1 ;
-(id)uiElementsWithAttribute:(NSInteger)arg0 parameter:(*void)arg1 fetchAttributes:(BOOL)arg2 ;
-(id)urlWithAXAttribute:(NSInteger)arg0 ;
-(id)visibleElements;
-(int)pid;
-(struct CGPath *)pathWithAXAttribute:(NSInteger)arg0 ;
-(struct CGPoint )pointForLineNumber:(NSUInteger)arg0 ;
-(struct CGPoint )pointWithAXAttribute:(NSInteger)arg0 ;
-(struct CGRect )rectWithAXAttribute:(NSInteger)arg0 ;
-(struct CGSize )sizeWithAXAttribute:(NSInteger)arg0 ;
-(struct _NSRange )rangeWithAXAttribute:(NSInteger)arg0 ;
-(struct __AXUIElement *)axElement;
-(void)disableCache;
-(void)enableCache:(BOOL)arg0 ;
-(void)fillStaticCache;
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
-(void)setValue:(id)arg0 forAXAttribute:(NSInteger)arg1 ;
-(void)setValue:(id)arg0 forAXParameterizedAttribute:(NSInteger)arg1 ;
-(void)setWritable:(BOOL)arg0 forAXAttribute:(NSInteger)arg1 ;
-(void)startLoggingActions;
-(void)updateCache:(NSInteger)arg0 ;
-(void)updateCacheWithAttributes:(id)arg0 ;


@end


#endif