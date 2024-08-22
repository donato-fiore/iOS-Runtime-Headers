// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIKEYPLANEROW_H
#define TUIKEYPLANEROW_H

@class UIView, NSMutableArray, NSArray, UILayoutGuide;


#import "TUIKBKeyView.h"
#import "TUIKeyplaneView.h"

@interface TUIKeyplaneRow : UIView

@property (retain, nonatomic) NSMutableArray *constraintsForSplitRow; // ivar: _constraintsForSplitRow
@property (retain, nonatomic) NSMutableArray *constraintsForUnsplitRow; // ivar: _constraintsForUnsplitRow
@property (retain, nonatomic) NSArray *currentKeys; // ivar: _currentKeys
@property (nonatomic) BOOL edgeToEdge; // ivar: _edgeToEdge
@property (retain, nonatomic) TUIKBKeyView *extraSpaceBar; // ivar: _extraSpaceBar
@property (weak, nonatomic) TUIKeyplaneView *hostView; // ivar: _hostView
@property (retain, nonatomic) NSMutableArray *keyViews; // ivar: _keyViews
@property (retain, nonatomic) NSMutableArray *layoutGuidesForRow; // ivar: _layoutGuidesForRow
@property (nonatomic) NSUInteger leftControlKeyCount; // ivar: _leftControlKeyCount
@property (retain, nonatomic) NSMutableArray *letterKeyConstraints; // ivar: _letterKeyConstraints
@property (retain, nonatomic) UILayoutGuide *letterKeyGuide; // ivar: _letterKeyGuide
@property (nonatomic) NSUInteger rightControlKeyCount; // ivar: _rightControlKeyCount
@property (nonatomic) NSInteger rowNumberInKeyplane; // ivar: _rowNumberInKeyplane
@property (nonatomic) NSInteger rowType; // ivar: _rowType
@property (retain, nonatomic) UILayoutGuide *splitSpacingGuide; // ivar: _splitSpacingGuide


+(id)emptyRowForKeyplane:(id)arg0 rowNumber:(NSInteger)arg1 ;
+(id)rowForKeyplane:(id)arg0 keys:(id)arg1 letterKeyGuide:(id)arg2 ;
-(BOOL)keyIsControlType:(id)arg0 ;
-(BOOL)keyIsSpaceType:(id)arg0 ;
-(BOOL)keyIsStringType:(id)arg0 ;
-(id)constraintsForStringKeys:(id)arg0 inRowGuide:(id)arg1 matchingLetterGuide:(id)arg2 splitIndex:(NSInteger)arg3 ;
-(id)description;
-(id)splitLayoutGuide;
-(void)layoutRowWithKeys:(id)arg0 guide:(id)arg1 type:(NSInteger)arg2 ;
-(void)setRenderConfig:(id)arg0 ;
-(void)toggleConstraintsForSplit:(BOOL)arg0 ;
-(void)updateKeysForTransition:(BOOL)arg0 ;
-(void)updateKeysInRowWithData:(id)arg0 ;
-(void)updateKeysInRowWithStyle:(NSInteger)arg0 factory:(id)arg1 ;


@end


#endif