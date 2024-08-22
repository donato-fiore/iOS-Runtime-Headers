// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYOVERLAYBUTTONCONFIGURATION_H
#define PXCURATEDLIBRARYOVERLAYBUTTONCONFIGURATION_H

@class NSString, UIColor, UIImage, NSSet;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryActionPerformer.h"
#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject <PXGViewUserData>



@property (readonly, nonatomic) NSString *accessibilityTitle; // ivar: _accessibilityTitle
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *actionPerformer; // ivar: _actionPerformer
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (readonly, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcePointerInteractionEnabled; // ivar: _forcePointerInteractionEnabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *highlightedContentColor; // ivar: _highlightedContentColor
@property (readonly, nonatomic) UIImage *highlightedIconImage; // ivar: _highlightedIconImage
@property (nonatomic) UIEdgeInsets hitTestOutsets; // ivar: _hitTestOutsets
@property (readonly, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) NSString *iconImageName; // ivar: _iconImageName
@property (readonly, nonatomic) UIImage *iconImageWithoutConfiguration; // ivar: _iconImageWithoutConfiguration
@property (nonatomic) UIEdgeInsets imageEdgeInsets; // ivar: _imageEdgeInsets
@property (nonatomic) BOOL isSystemSymbolIcon; // ivar: _isSystemSymbolIcon
@property (copy, nonatomic) id *menuActionHandler; // ivar: _menuActionHandler
@property (copy, nonatomic) NSSet *possibleTitles; // ivar: _possibleTitles
@property (nonatomic) NSInteger segment; // ivar: _segment
@property (readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // ivar: _spec
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) UIImage *tintedIconImage; // ivar: _tintedIconImage
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *willDismissMenuActionHandler; // ivar: _willDismissMenuActionHandler
@property (copy, nonatomic) id *willDisplayMenuActionHandler; // ivar: _willDisplayMenuActionHandler


+(id)configurationWithButtonType:(NSInteger)arg0 spec:(id)arg1 ;
+(id)configurationWithButtonType:(NSInteger)arg0 title:(id)arg1 spec:(id)arg2 ;
+(id)configurationWithIconImageName:(id)arg0 spec:(id)arg1 ;
+(id)configurationWithIconImageName:(id)arg0 title:(id)arg1 spec:(id)arg2 ;
+(id)configurationWithTitle:(id)arg0 spec:(id)arg1 ;
+(id)tintedImageCache;
-(BOOL)isEqual:(id)arg0 ;
-(id)_contentColorWhenHighlighted:(BOOL)arg0 ;
-(id)_tintedImage:(id)arg0 name:(id)arg1 withColor:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIconImageName:(id)arg0 title:(id)arg1 spec:(id)arg2 buttonType:(NSInteger)arg3 ;
-(id)largeContentViewerImage;
-(void)prepareForRender;


@end


#endif