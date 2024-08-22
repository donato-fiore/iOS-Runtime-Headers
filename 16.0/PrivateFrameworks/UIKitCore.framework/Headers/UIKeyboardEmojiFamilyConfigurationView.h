// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDEMOJIFAMILYCONFIGURATIONVIEW_H
#define UIKEYBOARDEMOJIFAMILYCONFIGURATIONVIEW_H

@class NSString, NSMutableArray, NSIndexPath, NSArray;
@protocol UIKBKeyViewContentView;


#import "UIView.h"
#import "UIKeyboardEmojiWellView.h"
#import "UIStackView.h"
#import "UIKBTree.h"

@interface UIKeyboardEmojiFamilyConfigurationView : UIView <UIKBKeyViewContentView>

 {
    CGFloat _metachronalRhythmAnimationStartTime;
}


@property (retain, nonatomic) NSString *baseEmojiString; // ivar: _baseEmojiString
@property (retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView; // ivar: _configuredWellView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *familyMemberStackViews; // ivar: _familyMemberStackViews
@property (nonatomic) BOOL hasSplitFontSupport; // ivar: _hasSplitFontSupport
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // ivar: _lastSelectedIndexPath
@property (retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView; // ivar: _neutralWellView
@property (retain, nonatomic) UIStackView *previewWellStackView; // ivar: _previewWellStackView
@property (retain, nonatomic) UIKBTree *representedKey; // ivar: _representedKey
@property (retain, nonatomic) NSMutableArray *selectedVariantIndices; // ivar: _selectedVariantIndices
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) NSArray *skinToneVariantRows; // ivar: _skinToneVariantRows
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDarkStyle; // ivar: _usesDarkStyle
@property (retain, nonatomic) NSArray *variantDisplayRows; // ivar: _variantDisplayRows


+(id)_selectionAndSeparatorColorForDarkMode:(BOOL)arg0 ;
+(struct CGSize )preferredContentViewSizeForKey:(id)arg0 withTraits:(id)arg1 ;
-(BOOL)_hasCompletelyConfiguredSkinToneConfiguration;
-(NSUInteger)_silhouetteFromCurrentSelections;
-(id)_currentlySelectedSkinToneConfiguration;
-(id)_wellViewForSection:(NSInteger)arg0 item:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_beginFamilyMetachronalRhythmAnimation;
-(void)_colorConfigurationDidChange;
-(void)_configureFamilyMemberWellStackViews;
-(void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg0 ;
-(void)_setCurrentlySelectedSkinToneConfiguration:(id)arg0 ;
-(void)_updateBottomRowForSelections:(id)arg0 ;
-(void)_updatePreviewWellForCurrentSelection;
-(void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
-(void)layoutSubviews;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;
-(void)updateRenderConfig:(id)arg0 ;


@end


#endif