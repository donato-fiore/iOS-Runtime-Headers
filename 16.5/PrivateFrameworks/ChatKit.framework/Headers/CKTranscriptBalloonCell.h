// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTBALLOONCELL_H
#define CKTRANSCRIPTBALLOONCELL_H

@class NSString, NSArray;
@protocol IMPhotoLibraryPersistenceManagerListener, CKQuickActionButtonAnimationDelegate, CKQuickActionButtonDelegate;


#import "CKTranscriptMessageContentCell.h"
#import "CKBalloonView.h"
#import "CKTranscriptCollectionViewLayoutAttributes.h"
#import "CKLineView.h"
#import "CKQuickActionButton.h"

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell <IMPhotoLibraryPersistenceManagerListener, CKQuickActionButtonAnimationDelegate, CKQuickActionButtonDelegate>



@property (nonatomic) BOOL animatingInDarkEffect; // ivar: _animatingInDarkEffect
@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView
@property (nonatomic) BOOL canShowQuickActionButton; // ivar: _canShowQuickActionButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasQueuedQuickActionButtonRemoval; // ivar: _hasQueuedQuickActionButtonRemoval
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsertingReply) BOOL insertingReply; // ivar: _insertingReply
@property (nonatomic) BOOL isRichLink; // ivar: _isRichLink
@property (copy, nonatomic) CKTranscriptCollectionViewLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic) CGFloat lineHorizontalOffset; // ivar: _lineHorizontalOffset
@property (readonly, nonatomic) BOOL lineIsExtended; // ivar: _lineIsExtended
@property (nonatomic) NSUInteger lineType; // ivar: _lineType
@property (retain, nonatomic) CKLineView *lineView; // ivar: _lineView
@property (nonatomic) CGFloat lineViewExpansionFactor; // ivar: _lineViewExpansionFactor
@property (nonatomic) CGFloat lineViewReferenceY; // ivar: _lineViewReferenceY
@property (nonatomic) BOOL mayReparentPluginViews; // ivar: _mayReparentPluginViews
@property (nonatomic) NSUInteger numberOfMomentSharePhotos; // ivar: _numberOfMomentSharePhotos
@property (nonatomic) NSUInteger numberOfMomentShareSavedAssets; // ivar: _numberOfMomentShareSavedAssets
@property (nonatomic) NSUInteger numberOfMomentShareVideos; // ivar: _numberOfMomentShareVideos
@property (readonly, nonatomic) CKQuickActionButton *quickActionButton; // ivar: _quickActionButton
@property (copy, nonatomic) id *quickActionButtonTappedCallback; // ivar: _quickActionButtonTappedCallback
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *syndicationIdentifiers; // ivar: _syndicationIdentifiers
@property (copy, nonatomic) NSArray *threadGroupLayoutAttributes; // ivar: _threadGroupLayoutAttributes
@property (copy, nonatomic) NSArray *threadLineDescription; // ivar: _threadLineDescription


-(BOOL)hidesCheckmark;
-(BOOL)isCommSafetySensitiveForChatItem:(id)arg0 ;
-(CGFloat)insertionDurationForInsertionType:(NSInteger)arg0 ;
-(NSInteger)insertionAnimationType;
-(id)_createLinePathForFrame:(struct CGRect )arg0 withThreadGroupLayoutAttributes:(id)arg1 ;
-(id)_drawLowerBracketLoopForPath:(id)arg0 withLayout:(id)arg1 lineViewMaxY:(CGFloat)arg2 ;
-(id)_extendPath:(*id)arg0 withFrame:(struct CGRect )arg1 ;
-(id)animationWithKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 beginTime:(CGFloat)arg3 duration:(CGFloat)arg4 timingFunction:(id)arg5 ;
-(id)animationWithKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 beginTime:(CGFloat)arg3 duration:(CGFloat)arg4 timingFunctionName:(id)arg5 ;
-(id)init;
-(id)messageDisplayView;
-(struct CGRect )_createLineViewFrameForThreadGroupLayoutAttributes:(id)arg0 ;
-(void)_addQuickActionButtonIfNeededAnimated:(BOOL)arg0 ;
-(void)_animateLineExtension:(id)arg0 ;
-(void)_animateLowerBracketToLoop:(id)arg0 ;
-(void)_animateReplyContextPreview:(id)arg0 ;
-(void)_animateUpperBracket:(id)arg0 ;
-(void)_ck_setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_drawLoopForPath:(*id)arg0 withLayout:(id)arg1 ;
-(void)_drawLowerBracketForPath:(*id)arg0 lineViewMaxX:(CGFloat)arg1 lineViewMaxY:(CGFloat)arg2 ;
-(void)_drawStraightLineForPath:(*id)arg0 withLayout:(id)arg1 lineViewMaxY:(CGFloat)arg2 isTerminal:(BOOL)arg3 ;
-(void)_drawUpperBracketForPath:(*id)arg0 withLayout:(id)arg1 lineViewMaxX:(CGFloat)arg2 lineViewMaxY:(CGFloat)arg3 ;
-(void)_fadeInBalloonAlpha:(CGFloat)arg0 atBeginTime:(CGFloat)arg1 ;
-(void)_fadeInContactImageAlpha:(CGFloat)arg0 atBeginTime:(CGFloat)arg1 ;
-(void)_removeQuickActionButtonIfNeededAnimated:(BOOL)arg0 ;
-(void)_slideContactImageWithTranslate:(CGFloat)arg0 duration:(CGFloat)arg1 beginTime:(CGFloat)arg2 ;
-(void)_updateLineForThreadGroupLayoutAttributes:(id)arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)addFilter:(id)arg0 fromTriggeringMessage:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)configureQuickActionButtonForChatItem:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(id)arg0 ;
-(void)photoLibraryPersistedSyndicatedAssetSetDidChange;
-(void)prepareForReuse;
-(void)quickActionButtonAnimationDidBegin:(id)arg0 ;
-(void)quickActionButtonAnimationDidEnd:(id)arg0 ;
-(void)quickActionButtonWasTapped:(id)arg0 ;
-(void)setAnimationPauseReasons:(NSInteger)arg0 ;
-(void)updateQuickActionButtonVisibility;
-(void)willLayoutDrawerLabelFrame:(struct CGRect *)arg0 ;


@end


#endif