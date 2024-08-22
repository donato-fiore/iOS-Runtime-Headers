// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMFULLSCREENMODESELECTOR_H
#define CAMFULLSCREENMODESELECTOR_H

@class UIView, NSArray, NSDictionary, NSString;
@protocol UIGestureRecognizerDelegate, CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate;



@interface CAMFullscreenModeSelector : UIView <UIGestureRecognizerDelegate>



@property (nonatomic, setter=_setHighlightedIndex:) NSInteger _highlightedIndex; // ivar: __highlightedIndex
@property (retain, nonatomic, setter=_setModes:) NSArray *_modes; // ivar: __modes
@property (nonatomic, setter=_setState:) NSInteger _state; // ivar: __state
@property (readonly, nonatomic) UIView *_titleContainer; // ivar: __titleContainer
@property (readonly, nonatomic) CGFloat _titleIndexOffset;
@property (retain, nonatomic, setter=_setItems:) NSDictionary *_titleViewsByMode; // ivar: __titleViewsByMode
@property (nonatomic, setter=_setTouchBeganPosition:) CGPoint _touchBeganPosition; // ivar: __touchBeganPosition
@property (nonatomic, setter=_setTouchBeganTime:) CGFloat _touchBeganTime; // ivar: __touchBeganTime
@property (nonatomic) NSObject<CAMFullscreenModeSelectorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CAMFullscreenModeSelectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedMode; // ivar: _selectedMode
@property (readonly) Class superclass;


-(CGFloat)_titleYForIndex:(NSInteger)arg0 ;
-(NSInteger)_titleIndexForY:(CGFloat)arg0 ;
-(id)_modeTitleForLegacyTitle:(id)arg0 ;
-(id)init;
-(void)_selectModeAtIndex:(NSInteger)arg0 ;
-(void)_touchSequenceBeganAtPoint:(struct CGPoint )arg0 ;
-(void)_touchSequenceChangedToPoint:(struct CGPoint )arg0 ;
-(void)_touchSequenceEndedAtPoint:(struct CGPoint )arg0 ;
-(void)_updateAlpha;
-(void)_updateTitles;
-(void)enterTappableState;
-(void)handlePress:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;


@end


#endif