// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPLINKHTMLGENERATOR_H
#define LPLINKHTMLGENERATOR_H

@class NSString, DOMElement, NSURL, UIColor, DOMDocumentFragment, DOMDocument;
@protocol LPLinkHTMLGeneratorDelegate;

#import <Foundation/Foundation.h>

#import "LPMetadataProvider.h"
#import "LPCaptionBarPresentationProperties.h"
#import "LPImage.h"
#import "LPImagePresentationProperties.h"
#import "LPHTMLComponent.h"
#import "LPCSSResolver.h"
#import "LPLinkMetadata.h"
#import "LPPointUnit.h"
#import "LPTheme.h"

@interface LPLinkHTMLGenerator : NSObject {
    LPMetadataProvider *_pendingMetadataProvider;
    BOOL _mayReceiveAdditionalMetadata;
    BOOL _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    BOOL _everBuiltView;
}


@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic, setter=_setAllowsTapToLoad:) BOOL _allowsTapToLoad;
@property (readonly, nonatomic) BOOL _canTapToLoad;
@property (nonatomic, setter=_setDisableAutoPlay:) BOOL _disableAutoPlay; // ivar: __disableAutoPlay
@property (nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) BOOL _includeClassNamesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeDarkInterfaceInlineStyles:) BOOL _includeDarkInterfaceInlineStyles;
@property (nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) BOOL _useVariablesWhenUsingInlineStyles;
@property (nonatomic) BOOL applyCornerRadiusToLink; // ivar: _applyCornerRadiusToLink
@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) LPCSSResolver *cssResolver; // ivar: _cssResolver
@property (weak, nonatomic) NSObject<LPLinkHTMLGeneratorDelegate> *delegate; // ivar: _delegate
@property (readonly, retain, nonatomic) DOMDocumentFragment *documentFragment;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;
@property (readonly, nonatomic) BOOL isPreliminary; // ivar: _isPreliminary
@property (copy, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) DOMDocument *parentDocument; // ivar: _parentDocument
@property (readonly, nonatomic) LPPointUnit *rootWidth;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) LPTheme *theme; // ivar: _theme
@property (nonatomic) BOOL useInlineStyles;


+(void)initialize;
-(id)_URLForImage:(id)arg0 ;
-(id)_URLForResource:(id)arg0 withMIMEType:(id)arg1 ;
-(id)_createCaptionBar;
-(id)_createMediaBottomCaptionBar;
-(id)_createMediaComponent;
-(id)_createMediaTopCaptionBar;
-(id)_createQuoteComponent;
-(id)_createRootElement;
-(id)init;
-(id)initWithMetadataLoadedFromURL:(id)arg0 document:(id)arg1 ;
-(id)initWithPresentationProperties:(id)arg0 URL:(id)arg1 document:(id)arg2 ;
-(id)initWithPresentationProperties:(id)arg0 document:(id)arg1 ;
-(id)initWithURL:(id)arg0 document:(id)arg1 ;
-(void)_computePresentationPropertiesFromMetadata;
-(void)_fetchMetadata;
-(void)_rebuildView;
-(void)_setPresentationProperties:(id)arg0 ;
-(void)clearCurrentLayout;


@end


#endif