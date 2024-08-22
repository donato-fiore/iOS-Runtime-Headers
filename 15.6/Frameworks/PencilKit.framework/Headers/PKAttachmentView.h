// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKATTACHMENTVIEW_H
#define PKATTACHMENTVIEW_H

@class UIView, NSUUID, NSArray, NSMutableArray, NSString, NSMutableDictionary;
@protocol PKStrokeSpatialCacheDelegate, PKRecognitionSessionManagerDelegate, PKHashtagViewDelegate, PKMentionViewDelegate, PKSelectionObserving, PKAttachmentViewHashtagsAndMentionsDelegate;


#import "PKDrawing.h"
#import "PKRecognitionSessionManager.h"
#import "PKStrokeSpatialCache.h"
#import "PKTiledView.h"

@interface PKAttachmentView : UIView <PKStrokeSpatialCacheDelegate, PKRecognitionSessionManagerDelegate, PKHashtagViewDelegate, PKMentionViewDelegate, PKSelectionObserving>

 {
    NSUUID *_listenerID;
}


@property (retain, nonatomic) NSArray *additionalStrokes; // ivar: _additionalStrokes
@property (readonly, nonatomic) UIView *attachmentContainerView;
@property (nonatomic) CGRect cachedBounds; // ivar: _cachedBounds
@property (nonatomic) BOOL contentHidden; // ivar: _contentHidden
@property (retain, nonatomic) NSMutableArray *dataDetectorViews; // ivar: _dataDetectorViews
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferMentionUpdate; // ivar: _deferMentionUpdate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detectionViewsHidden; // ivar: _detectionViewsHidden
@property (copy, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (readonly, nonatomic) CGAffineTransform drawingTransform;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKAttachmentViewHashtagsAndMentionsDelegate> *hashtagAndMentionsDelegate; // ivar: _hashtagAndMentionsDelegate
@property (retain, nonatomic) NSMutableArray *hashtagViews; // ivar: _hashtagViews
@property (nonatomic) BOOL hideUntilScroll; // ivar: _hideUntilScroll
@property (nonatomic) BOOL ignoreInitialDetectionItemsForStatistics; // ivar: _ignoreInitialDetectionItemsForStatistics
@property (readonly, nonatomic) BOOL isAtEndOfDocument;
@property (nonatomic) BOOL isDraggingSelection; // ivar: _isDraggingSelection
@property (retain, nonatomic) NSMutableDictionary *mentionUUIDtoParticipant; // ivar: _mentionUUIDtoParticipant
@property (retain, nonatomic) NSMutableArray *mentionViews; // ivar: _mentionViews
@property (readonly, nonatomic) NSMutableDictionary *offscreenTiles; // ivar: _offscreenTiles
@property (retain, nonatomic) NSMutableArray *previousDataDetectorItems; // ivar: _previousDataDetectorItems
@property (retain, nonatomic) NSMutableArray *previousHashtagItems; // ivar: _previousHashtagItems
@property (retain, nonatomic) NSMutableArray *previousMentionItems; // ivar: _previousMentionItems
@property (readonly, nonatomic) NSMutableDictionary *purgedTiles; // ivar: _purgedTiles
@property (retain, nonatomic) PKRecognitionSessionManager *recognitionManager; // ivar: _recognitionManager
@property (nonatomic) BOOL sixChannelBlending; // ivar: _sixChannelBlending
@property (readonly, nonatomic) PKStrokeSpatialCache *strokeSpatialCache; // ivar: _strokeSpatialCache
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tileContainerView; // ivar: _tileContainerView
@property (nonatomic) CGAffineTransform tileDrawingTransform; // ivar: _tileDrawingTransform
@property (readonly, nonatomic) UIView *tileMaskView;
@property (readonly, nonatomic) PKTiledView *tiledView;
@property (readonly, nonatomic) NSMutableDictionary *tiles; // ivar: _tiles
@property (nonatomic) BOOL toolPickerVisible; // ivar: _toolPickerVisible
@property (nonatomic) BOOL wantsDataDetection; // ivar: _wantsDataDetection
@property (nonatomic) BOOL wantsHashtagDetection; // ivar: _wantsHashtagDetection
@property (nonatomic) BOOL wantsMentionDetection; // ivar: _wantsMentionDetection


-(BOOL)disableTileAnimations;
-(BOOL)hitByTouchLocation:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 ;
-(BOOL)hitChrome:(struct CGPoint )arg0 isStylus:(BOOL)arg1 ;
-(BOOL)isRTL;
-(BOOL)wantsFullyRendered;
-(CGFloat)heightFromDrawing:(id)arg0 delta:(CGFloat)arg1 ;
-(NSInteger)contentTypeForIntersectedStrokes:(id)arg0 ;
-(id)_accessibilityUserTestingChildren;
-(id)_firstStrokesInSelectedStrokes:(id)arg0 ;
-(id)_lastStrokesInSelectedStrokes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 drawing:(id)arg1 ;
-(id)inlineViewAtPoint:(struct CGPoint )arg0 ;
-(struct CGRect )boundingBoxForHashtagOrMentionWithUUID:(id)arg0 ;
-(void)_initializeRecognitionForDrawingIfNecessary:(id)arg0 ;
-(void)_initializeRecognitionForDrawingIfNecessary:(id)arg0 withVisibleOnscreenStrokes:(id)arg1 ;
-(void)_toolPickerDidShowHide:(id)arg0 ;
-(void)_updateAllPossibleParticipantNameTokens:(id)arg0 ;
-(void)containingScrollViewDidScroll;
-(void)dealloc;
-(void)didBeginDrawing;
-(void)didBeginModifyDrawing;
-(void)didEndDrawing;
-(void)didEndModifyDrawing;
-(void)didFinishCalculatingVisibleOnscreenStrokes:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)drawingDidChangeVisibleStrokes:(BOOL)arg0 ;
-(void)fetchIntersectedStrokesAtPoint:(struct CGPoint )arg0 selectionType:(NSInteger)arg1 inputType:(NSInteger)arg2 visibleOnscreenStrokes:(id)arg3 completion:(id)arg4 ;
-(void)fetchIntersectedStrokesBetweenTopPoint:(struct CGPoint )arg0 bottomPoint:(struct CGPoint )arg1 liveScrollOffset:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg0 completion:(id)arg1 ;
-(void)fingerDrawingEnabledDidChange;
-(void)fullyRendered;
-(void)hashtagView:(id)arg0 registerCommand:(id)arg1 ;
-(void)hashtagViewDidActivateHashtag:(id)arg0 ;
-(void)hashtagViewDidDeactivateHashtag:(id)arg0 ;
-(void)hashtagViewWillDeactivateHashtag:(id)arg0 ;
-(void)layoutInlineViews;
-(void)layoutSubviews;
-(void)mentionView:(id)arg0 registerCommand:(id)arg1 ;
-(void)mentionViewDidActivateMention:(id)arg0 withParticpant:(id)arg1 ;
-(void)mentionViewDidDeactivateMention:(id)arg0 ;
-(void)mentionViewWillDeactivateMention:(id)arg0 ;
-(void)pixelAlignForContentScale:(CGFloat)arg0 enclosingScrollView:(id)arg1 ;
-(void)recognitionSessionManager:(id)arg0 foundDataDetectorItems:(id)arg1 ;
-(void)recognitionSessionManager:(id)arg0 foundHashtagItems:(id)arg1 ;
-(void)recognitionSessionManager:(id)arg0 foundMentionItems:(id)arg1 ;
-(void)removeDetectionViews;
-(void)revealDetectionViews;
-(void)setAttachmentChromeVisible:(BOOL)arg0 animated:(BOOL)arg1 highlightBackground:(BOOL)arg2 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)toolPickerDidHide;
-(void)toolPickerDidShow;
-(void)updateAllPossibleParticipantNameTokens;
-(void)updateDataDetectorResults:(id)arg0 ;
-(void)updateDetectionViewVisibility;
-(void)updateDetectionViews:(id)arg0 withItems:(id)arg1 previousItems:(id)arg2 ;
-(void)updateDrawingHeight:(CGFloat)arg0 ;
-(void)updateDrawingHeight:(CGFloat)arg0 notifyDrawingDidChange:(BOOL)arg1 ;
-(void)updateFrameForTextContainer;
-(void)updateHashtagResults:(id)arg0 ;
-(void)updateMentionResults:(id)arg0 ;
-(void)updateTileContainerViewFrame;
-(void)visibleOnscreenBoundsDidChange:(struct CGRect )arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif