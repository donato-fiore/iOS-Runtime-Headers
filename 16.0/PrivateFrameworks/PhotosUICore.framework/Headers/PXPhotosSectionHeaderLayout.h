// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSSECTIONHEADERLAYOUT_H
#define PXPHOTOSSECTIONHEADERLAYOUT_H

@class NSIndexSet, NSString, NSDictionary, UIColor;
@protocol PXGStringSource, PXGSolidColorSource, PXGNamedImageSource, PXPhotosSectionedLayoutHeader;


#import "PXGLayout.h"
#import "PXAssetCollectionReference.h"
#import "PXSelectionSnapshot.h"
#import "PXPhotosLayoutSpec.h"

@interface PXPhotosSectionHeaderLayout : PXGLayout <PXGStringSource, PXGSolidColorSource, PXGNamedImageSource, PXPhotosSectionedLayoutHeader>

 {
    ? _updateFlags;
    unsigned short _dividerVersion;
    unsigned short _finalTitleVersion;
    unsigned short _subtitleVersion;
    unsigned short _badgeVersion;
    unsigned short _buttonVersion;
    NSIndexSet *_axSpriteIndexes;
}


@property (readonly, nonatomic) BOOL allowsInteraction;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (readonly, nonatomic) CGRect axSpriteFrame;
@property (readonly, nonatomic) NSString *axSpriteText; // ivar: _axSpriteText
@property (copy, nonatomic) NSDictionary *badgeAttributes; // ivar: _badgeAttributes
@property (readonly, nonatomic) CGSize badgeSize; // ivar: _badgeSize
@property (copy, nonatomic) NSString *badgeTitle; // ivar: _badgeTitle
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSDictionary *buttonTitleAttributes; // ivar: _buttonTitleAttributes
@property (readonly, nonatomic) CGSize buttonTitleSize; // ivar: _buttonTitleSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *dividerColor; // ivar: _dividerColor
@property (copy, nonatomic) NSString *finalTitle; // ivar: _finalTitle
@property (copy, nonatomic) NSDictionary *finalTitleAttributes; // ivar: _finalTitleAttributes
@property (readonly, nonatomic) CGSize finalTitleSize; // ivar: _finalTitleSize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBadgeVisible; // ivar: _isBadgeVisible
@property (nonatomic) BOOL isFirstSectionHeader; // ivar: _isFirstSectionHeader
@property (nonatomic) BOOL isInSelectMode; // ivar: isInSelectMode
@property (readonly, nonatomic) CGFloat relativeOffsetAlpha; // ivar: _relativeOffsetAlpha
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: selectionSnapshot
@property (retain, nonatomic) PXPhotosLayoutSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSDictionary *subtitleAttributes; // ivar: _subtitleAttributes
@property (readonly, nonatomic) CGSize subtitleSize; // ivar: _subtitleSize
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) BOOL wantsButton;
@property (readonly, nonatomic) BOOL wantsChevron;


-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axVisibleSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateAttributes;
-(void)_invalidateBadgeMediaVersion;
-(void)_invalidateButtonTitleMediaVersion;
-(void)_invalidateContent;
-(void)_invalidateDividerMediaVersion;
-(void)_invalidateFinalTitle;
-(void)_invalidateFinalTitleMediaVersion;
-(void)_invalidateRelativeOffsetAlpha;
-(void)_invalidateSpritesAlpha;
-(void)_updateAttributes;
-(void)_updateContent;
-(void)_updateFinalTitle;
-(void)_updateRelativeOffsetAlpha;
-(void)_updateSpritesAlpha;
-(void)contentSizeDidChange;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)update;
-(void)visibleRectDidChange;


@end


#endif