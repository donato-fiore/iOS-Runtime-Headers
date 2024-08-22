// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSTYLECHROMELAYOUT_H
#define PXSTORYSTYLECHROMELAYOUT_H

@class NSIndexSet, NSAttributedString, NSString;
@protocol PXGStringSource, PXGViewSource, PXStoryColorGradingRepository, PXStoryStyleDescriptor, PXStoryViewLayoutSpec;


#import "PXGLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryStyleChromeLayout : PXGLayout <PXGStringSource, PXGViewSource>

 {
    ? _updateFlags;
    unsigned int _songArtworkSpriteIndex;
    unsigned int _songTitleSpriteIndex;
    unsigned int _songTitleAccessorySpriteIndex;
    unsigned int _songSubtitleSpriteIndex;
    unsigned int _colorGradeNameSpriteIndex;
    unsigned int _filterButtonSpriteIndex;
    unsigned int _musicButtonSpriteIndex;
    unsigned int _customLabelSpriteIndex;
    unsigned int _spriteCount;
    NSIndexSet *_axSpriteIndexes;
}


@property (readonly, nonatomic) NSAttributedString *colorGradeNameAttributedString; // ivar: _colorGradeNameAttributedString
@property (retain, nonatomic) NSObject<PXStoryColorGradingRepository> *colorGradingRepository; // ivar: _colorGradingRepository
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short mediaVersion; // ivar: _mediaVersion
@property (readonly, nonatomic) id *musicFeedbackContextMenuDelegate; // ivar: _musicFeedbackContextMenuDelegate
@property (retain, nonatomic) NSObject<PXStoryStyleDescriptor> *styleInfo; // ivar: _styleInfo
@property (readonly, nonatomic) NSAttributedString *subtitleAttributedString; // ivar: _subtitleAttributedString
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSAttributedString *titleAccessoryAttributedString; // ivar: _titleAccessoryAttributedString
@property (readonly, nonatomic) NSAttributedString *titleAttributedString; // ivar: _titleAttributedString
@property (retain, nonatomic) NSObject<PXStoryViewLayoutSpec> *viewLayoutSpec; // ivar: _viewLayoutSpec
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


+(void)startCachingResourcesForStyleInfo:(id)arg0 viewLayoutSpec:(id)arg1 displayScale:(CGFloat)arg2 ;
+(void)stopCachingResourcesForStyleInfo:(id)arg0 viewLayoutSpec:(id)arg1 displayScale:(CGFloat)arg2 ;
-(BOOL)canHandleVisibleRectRejection;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)axFocusabilityForSpriteAtIndex:(unsigned int)arg0 ;
-(id)_actionPerformer;
-(id)_styleSongAsset;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_handleFilterButton:(id)arg0 ;
-(void)_handleMusicButton:(id)arg0 ;
-(void)_invalidateContent;
-(void)_invalidateStrings;
-(void)_updateContent;
-(void)alphaDidChange;
-(void)didUpdate;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;
-(void)willUpdate;


@end


#endif