// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONLAYOUT_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONLAYOUT_H

@class NSString, NSDictionary;
@protocol PXGDisplayAssetSource, PXGStringSource, PXGSolidColorSource, PXSharedLibrarySharingSuggestion;


#import "PXGLayout.h"
#import "PXGTextLegibilityEffect.h"

@interface PXSharedLibrarySharingSuggestionLayout : PXGLayout <PXGDisplayAssetSource, PXGStringSource, PXGSolidColorSource>

 {
    ? _updateFlags;
    unsigned int _contentSpriteIndex;
    unsigned int _textSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _assetContentVersion;
    unsigned short _labelContentVersion;
    unsigned short _badgeContentVersion;
    NSString *_subtitleThatFits;
    NSDictionary *_titleAttributes;
    NSDictionary *_titleAttributesWithoutSubtitle;
    NSDictionary *_subtitleAttributes;
    PXGTextLegibilityEffect *_legibilityEffect;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXSharedLibrarySharingSuggestion> *sharingSuggestion; // ivar: _sharingSuggestion
@property (readonly) Class superclass;


-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)verticalAlignmentForStringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(id)attributedStringForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)gradientForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)init;
-(id)stringAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)stringAttributesAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateAssetContentVersion;
-(void)_invalidateBadgeContentVersion;
-(void)_invalidateContent;
-(void)_invalidateLabelContentVersion;
-(void)_invalidateSubtitleThatFits;
-(void)_updateContent;
-(void)_updateSubtitleThatFits;
-(void)entityManagerDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)update;


@end


#endif