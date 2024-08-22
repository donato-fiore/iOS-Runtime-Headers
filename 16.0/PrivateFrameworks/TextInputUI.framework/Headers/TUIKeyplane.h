// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIKEYPLANE_H
#define TUIKEYPLANE_H

@class NSMutableDictionary, UIKBTree, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TUIKeyplane : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) UIKBTree *fullTree; // ivar: _fullTree
@property (readonly, nonatomic) NSInteger keyLayoutStyle;
@property (retain, nonatomic) UIKBTree *keylayout; // ivar: _keylayout
@property (nonatomic) NSInteger layoutClass; // ivar: _layoutClass
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) CGSize leftSplitSize; // ivar: _leftSplitSize
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (retain, nonatomic) NSArray *orderedKeysByRow; // ivar: _orderedKeysByRow
@property (readonly, nonatomic) NSString *prefix;
@property (nonatomic) CGSize rightSplitSize; // ivar: _rightSplitSize


+(CGFloat)baseHeightForLayoutClass:(NSInteger)arg0 landscape:(BOOL)arg1 ;
+(NSInteger)layoutClassFromName:(id)arg0 ;
+(NSInteger)layoutClassFromScreenDimensions:(struct CGSize )arg0 ;
+(id)keyplaneFromKBTree:(id)arg0 ;
+(struct CGSize )sizeBasisForLayoutClass:(NSInteger)arg0 ;
+(struct CGSize )stretchFactorForLayoutClass:(NSInteger)arg0 screenDimensions:(struct CGSize )arg1 ;
-(BOOL)hasSimilarLayoutToKeyplane:(id)arg0 ;
-(BOOL)shouldDuplicateKey:(id)arg0 forRow:(id)arg1 ;
-(CGFloat)finalHeightForSplitKeyboard;
-(CGFloat)finalSplitSizeForRightSide:(BOOL)arg0 ;
-(CGFloat)heightMultiplierForRowNumber:(NSUInteger)arg0 ;
-(CGFloat)multiplierForKey:(id)arg0 withProperties:(id)arg1 ;
-(NSInteger)keyStyleForLayoutClass:(NSInteger)arg0 ;
-(NSInteger)layoutTypeFromDisplayType:(int)arg0 ;
-(id)createPreparedKeyFromTree:(id)arg0 withMultiplier:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(id)description;
-(id)duplicateTreeForSplitMode:(id)arg0 ;
-(id)keysOrderedByRowForKeyplane:(id)arg0 ;
-(id)rowSet;
-(id)sortedKeysForKeyplane:(id)arg0 ;
-(id)stringFromLayoutClass:(NSInteger)arg0 ;
-(id)stringFromLayoutStyle:(NSInteger)arg0 ;
-(id)stringFromLayoutType:(NSInteger)arg0 ;


@end


#endif