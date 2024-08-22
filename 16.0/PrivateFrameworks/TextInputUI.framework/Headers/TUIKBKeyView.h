// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIKBKEYVIEW_H
#define TUIKBKEYVIEW_H

@class UIKBContainerKeyView, UIKBBackdropView, NSArray, UIKBTree, UIKBRenderFactory;


#import "TUIKey.h"
#import "TUILiveKeyView.h"

@interface TUIKBKeyView : UIKBContainerKeyView

@property (retain, nonatomic) UIKBBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) TUIKey *backingKey; // ivar: _backingKey
@property (retain, nonatomic) NSArray *contentViewConstraints; // ivar: _contentViewConstraints
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) NSInteger keyStyle; // ivar: _keyStyle
@property (nonatomic) NSInteger layoutShape; // ivar: _layoutShape
@property (readonly, nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (retain, nonatomic) TUILiveKeyView *liveContentView; // ivar: _liveContentView
@property (nonatomic) CGFloat multiplier; // ivar: _multiplier
@property (retain, nonatomic) UIKBTree *representedKey; // ivar: _representedKey
@property (nonatomic) NSInteger rowNumber; // ivar: _rowNumber
@property (retain, nonatomic) UIKBRenderFactory *splitFactory; // ivar: _splitFactory
@property (retain, nonatomic) UIKBRenderFactory *unsplitFactory; // ivar: _unsplitFactory


-(BOOL)isDynamicKey;
-(BOOL)requiresConstraintBasedLayout;
-(BOOL)translatesAutoresizingMaskIntoConstraints;
-(CGFloat)multiplierForDisplayType:(int)arg0 ;
-(NSInteger)contentMode;
-(id)description;
-(id)initWithKey:(id)arg0 ;
-(id)key;
-(id)splitFactoryForKeyStyle:(NSInteger)arg0 ;
-(void)addContentView;
-(void)clearTouches;
-(void)dimKeyUsingOpacities:(id)arg0 ;
-(void)finishTransition;
-(void)prepareForTransition;
-(void)updateConstraints;
-(void)updateLabelWeight:(NSInteger)arg0 ;
-(void)updateState:(int)arg0 ;
-(void)updateStyle:(NSInteger)arg0 ;


@end


#endif