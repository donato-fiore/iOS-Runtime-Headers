// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYCHAPTERHEADERLAYOUT_H
#define PXCURATEDLIBRARYCHAPTERHEADERLAYOUT_H

@class NSArray, NSMutableIndexSet, NSAttributedString, NSString, NSDictionary;
@protocol PXChangeObserver, PXGStringSource, PXGNamedImageSource, OS_dispatch_queue;


#import "PXGLayout.h"
#import "PXNumberAnimator.h"
#import "PXAssetCollectionReference.h"
#import "PXCuratedLibraryChapterHeaderLayoutSpec.h"

@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <PXChangeObserver, PXGStringSource, PXGNamedImageSource>

 {
    ? _updateFlags;
    unsigned short _titleVersion;
    CGSize _chevronSize;
    unsigned short _chevronVersion;
    NSInteger _alternateAppearanceFadeDirection;
    CGFloat _alternateAppearanceFadeStartThresholdDistance;
    NSArray *_itemIdentifierBySpriteIndex;
    NSMutableIndexSet *_axSpriteIndexes;
    NSInteger _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
}


@property (readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator; // ivar: _alternateAppearanceMixAnimator
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (readonly, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, nonatomic) CGSize attributedTitleSize; // ivar: _attributedTitleSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSAttributedString *floatingAttributedTitle; // ivar: _floatingAttributedTitle
@property (copy, nonatomic) NSDictionary *floatingTitleDeemphasizedAttributes; // ivar: _floatingTitleDeemphasizedAttributes
@property (copy, nonatomic) NSDictionary *floatingTitleEmphasizedAttributes; // ivar: _floatingTitleEmphasizedAttributes
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL presentedAlternateAppearance; // ivar: _presentedAlternateAppearance
@property (copy, nonatomic) NSString *rawTitle; // ivar: _rawTitle
@property (nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (retain, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *titleDeemphasizedAttributes; // ivar: _titleDeemphasizedAttributes
@property (copy, nonatomic) NSDictionary *titleEmphasizedAttributes; // ivar: _titleEmphasizedAttributes


-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)_createAttributedTitleWithEmphasizedAttributes:(id)arg0 deemphasizedAttributes:(id)arg1 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)imageConfigurationAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(void)_handleAsyncRawTitle:(id)arg0 generation:(NSInteger)arg1 ;
-(void)_invalidateAttributedTitle;
-(void)_invalidateChevron;
-(void)_updateSprites;
-(void)_updateTitle;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceOptionsDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;
-(void)viewEnvironmentDidChange;
-(void)visibleRectDidChange;


@end


#endif