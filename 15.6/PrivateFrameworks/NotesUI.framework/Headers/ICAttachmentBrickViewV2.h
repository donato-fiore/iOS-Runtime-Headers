// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTBRICKVIEWV2_H
#define ICATTACHMENTBRICKVIEWV2_H

@class UIView, NSLayoutConstraint, ICAttachment, NSString, NSRegularExpression, UIImage;
@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;


#import "ICAttachmentBrickFrostedView.h"
#import "ICSearchResult.h"
#import "ICAttachmentBrickTextViewV2.h"

@interface ICAttachmentBrickViewV2 : UIView <ICAttachmentBrickAudioPlayerViewV2Delegate>



@property (nonatomic) NSUInteger accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // ivar: _accessoryViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint; // ivar: _accessoryViewTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint; // ivar: _accessoryViewVerticalConstraint
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // ivar: _accessoryViewWidthConstraint
@property (weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) NSUInteger brickSize; // ivar: _brickSize
@property (nonatomic) NSUInteger brickType; // ivar: _brickType
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultBrickSize; // ivar: _defaultBrickSize
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableImageUpdates; // ivar: _disableImageUpdates
@property (nonatomic) BOOL disableTextUpdates; // ivar: _disableTextUpdates
@property (nonatomic) BOOL disableVibrancy; // ivar: _disableVibrancy
@property (nonatomic) NSInteger fileSizeCache; // ivar: _fileSizeCache
@property (copy, nonatomic) NSString *fileSizeStringCache; // ivar: _fileSizeStringCache
@property (nonatomic) BOOL forManualRendering; // ivar: _forManualRendering
@property (nonatomic) BOOL forceDefaultBrickSize; // ivar: _forceDefaultBrickSize
@property (retain, nonatomic) ICAttachmentBrickFrostedView *frostedView; // ivar: _frostedView
@property (nonatomic, getter=isFrostedViewActive) BOOL frostedViewActive; // ivar: _frostedViewActive
@property (nonatomic, getter=isFullHeightText) BOOL fullHeightText; // ivar: _fullHeightText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (nonatomic) BOOL highlightUpdateScheduled; // ivar: _highlightUpdateScheduled
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL layerIsInvertedForAXInvertColors; // ivar: _layerIsInvertedForAXInvertColors
@property (weak, nonatomic) ICSearchResult *searchResult; // ivar: _searchResult
@property (nonatomic) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL showAsFileIcon; // ivar: _showAsFileIcon
@property (readonly) Class superclass;
@property (retain, nonatomic) ICAttachmentBrickTextViewV2 *textView; // ivar: _textView
@property (retain, nonatomic) NSLayoutConstraint *textViewTopConstraint; // ivar: _textViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // ivar: _textViewTrailingConstraint
@property (readonly, nonatomic) NSString *typeDescriptionForAccessibility;
@property (nonatomic) BOOL usingConstraintsForAXLargerTextSizes; // ivar: _usingConstraintsForAXLargerTextSizes
@property (nonatomic, getter=isVibrant) BOOL vibrant; // ivar: _vibrant
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


+(CGFloat)clampAccessoryViewScale:(CGFloat)arg0 forHorizontalSizeClass:(NSInteger)arg1 ;
+(NSUInteger)brickTypeForAttachment:(id)arg0 ;
+(NSUInteger)maximumBrickSizeForAttachment:(id)arg0 defaultSize:(NSUInteger)arg1 ;
+(id)audioAttachmentDetail1StringWithDuration:(CGFloat)arg0 attachment:(id)arg1 brick:(id)arg2 ;
+(id)brickInfoForAttachment:(id)arg0 brickSize:(NSUInteger)arg1 brick:(id)arg2 ;
+(struct CGSize )brickSizeWithSize:(NSUInteger)arg0 ;
+(struct CGSize )imageSizeForBrickSize:(NSUInteger)arg0 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(CGFloat)accessoryViewTopMarginWithAccessorySize:(struct CGSize )arg0 ;
-(CGFloat)clampAccessoryViewScale:(CGFloat)arg0 ;
-(CGFloat)layoutScaling;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)accessibilityValue;
-(id)backgroundColorForCurrentVibrancy;
-(id)createTextViewTrailingConstraint;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 defaultBrickSize:(NSUInteger)arg1 ;
-(id)quickLookTransitionView;
-(id)thumbnailCache;
-(id)typeDescriptionsForVoiceControl;
-(struct CGSize )computedAccessorySize;
-(struct CGSize )computedSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)accentColorDidChange:(id)arg0 ;
-(void)attachmentDidLoadNotification:(id)arg0 ;
-(void)attachmentPreviewImagesDidUpdateNotification:(id)arg0 ;
-(void)audioPlayerView:(id)arg0 updateTime:(CGFloat)arg1 ;
-(void)audioPlayerViewStopped:(id)arg0 ;
-(void)clearAccessoryView;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)initializeBasicViews;
-(void)layoutAccessoryTypeMapMarker;
-(void)layoutBackgroundView;
-(void)layoutSubviews;
-(void)locationContextAuthorizationStatusDidChangeNotification:(id)arg0 ;
-(void)mediaDidLoadNotification:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForPrinting;
-(void)prepareForReuse;
-(void)scaleDidChange;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessoryView;
-(void)updateAccessoryViewForAccessibilityInvertColors;
-(void)updateAccessoryViewShadow;
-(void)updateBackgroundImage;
-(void)updateBrickType;
-(void)updateConstraints;
-(void)updateContentFromAttachment;
-(void)updateFileSizeCacheStringIfNeeded;
-(void)updateForAppearanceChange;
-(void)updateImage;
-(void)updateSearchHighlighting;
-(void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg0 ;
-(void)updateSearchHighlightingIfNecessary;
-(void)updateStyle;
-(void)updateText;
-(void)updateVibrancyIfNecessary;


@end


#endif