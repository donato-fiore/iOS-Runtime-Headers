// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTUITEXTVIEW_H
#define RTTUITEXTVIEW_H

@class UITextView, UICollectionViewFlowLayout, UIView, NSString, UICollectionView, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate;



@interface RTTUITextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

 {
    NSInteger _leftIndex;
    CGPoint _panContentOffset;
    CGFloat _currentKeyboardWidth;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_leftBackgroundColorEdge;
    UIView *_rightBackgroundColorEdge;
    UIView *_middleBackgroundColorEdge;
    UIView *_inputAccessoryPlaceholderView;
    UIView *_iPadBufferView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHandlingKeyboardFrameChanged; // ivar: _isHandlingKeyboardFrameChanged
@property (retain, nonatomic) UICollectionView *predictionsCollectionView; // ivar: _predictionsCollectionView
@property (nonatomic) BOOL showTTYPredictions; // ivar: _showTTYPredictions
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *ttyAbbreviations; // ivar: _ttyAbbreviations


-(BOOL)_accessibilityIsRealtimeElement;
-(BOOL)_isKeyboardPredictionsEnabled;
-(BOOL)_shouldShowTTYPredictions;
-(BOOL)disableInputBars;
-(CGFloat)ttyBarHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)keyboardAppearance;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)accessibilityTraits;
-(float)_predictionsCellBuffer;
-(float)_predictionsCellHeight;
-(id)accessibilityIdentifier;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)inputAccessoryView;
-(id)keyCommands;
-(int)_predictionsPerPage;
-(void)_didPanPredictions:(id)arg0 ;
-(void)_didSwipeLeft:(id)arg0 ;
-(void)_inlineTTYAbbreviationSelected:(id)arg0 ;
-(void)_insertWhitespaceIfNeeded;
-(void)_kbFrameChanged:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_loadTTYAbbreviations;
-(void)_resetTTYBarPosition;
-(void)_setupOverlayPredictions;
-(void)_showInlineRTTAbbreviations:(BOOL)arg0 ;
-(void)_tapTTYBarCell:(id)arg0 ;
-(void)_updateBlackBarPositioning;
-(void)_updateTTYBarFrame;
-(void)_updateTTYBarPosition;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)overrideTTYPredictionsHidden:(BOOL)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)updateTTYBar;


@end


#endif