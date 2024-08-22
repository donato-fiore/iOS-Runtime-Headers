// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPLINKMETADATAPRESENTATIONTRANSFORMER_H
#define LPLINKMETADATAPRESENTATIONTRANSFORMER_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"
#import "LPLinkRendererSizeClassParameters.h"
#import "LPImage.h"

@interface LPLinkMetadataPresentationTransformer : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL allowsPlayback; // ivar: _allowsPlayback
@property (nonatomic) BOOL allowsPlaybackControls; // ivar: _allowsPlaybackControls
@property (nonatomic) BOOL allowsTapToLoad; // ivar: _allowsTapToLoad
@property (nonatomic) BOOL allowsTapping; // ivar: _allowsTapping
@property (nonatomic) NSUInteger bytesLoaded; // ivar: _bytesLoaded
@property (readonly, copy, nonatomic) NSURL *canonicalURL;
@property (nonatomic, getter=isCollaborative) BOOL collaborative; // ivar: _collaborative
@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, copy, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSUInteger effectiveSizeClass;
@property (readonly, nonatomic) BOOL hasMedia;
@property (nonatomic) BOOL hasOverriddenBackgroundColor; // ivar: _hasOverriddenBackgroundColor
@property (nonatomic, getter=isInComposeContext) BOOL inComposeContext; // ivar: _inComposeContext
@property (copy, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSURL *originalURL;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (nonatomic) NSUInteger preferredSizeClass; // ivar: _preferredSizeClass
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (copy, nonatomic) LPLinkRendererSizeClassParameters *sizeClassParameters; // ivar: _sizeClassParameters
@property (copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (retain, nonatomic) LPImage *sourceContextIcon; // ivar: _sourceContextIcon


-(BOOL)_hasNonMicroblogQuotedTextForStyle:(NSInteger)arg0 ;
-(BOOL)_prefersIconAsImage;
-(BOOL)_prefersImageAsIconWithStyle:(NSInteger)arg0 ;
-(BOOL)_prefersLeadingIconWithStyle:(NSInteger)arg0 ;
-(BOOL)hasMediaWithProperties:(id)arg0 ;
-(BOOL)shouldUseAppClipPresentation;
-(NSInteger)rendererStyle;
-(NSUInteger)_rowConfigurationForStyle:(NSInteger)arg0 ;
-(id)_lastResortIcon;
-(id)arAssetForStyle:(NSInteger)arg0 ;
-(id)audioForStyle:(NSInteger)arg0 ;
-(id)backgroundColorForStyle:(NSInteger)arg0 ;
-(id)commonPresentationPropertiesForStyle:(NSInteger)arg0 ;
-(id)imageForStyle:(NSInteger)arg0 icon:(*id)arg1 alternateImages:(*id)arg2 ;
-(id)init;
-(id)mainCaptionBarForStyle:(NSInteger)arg0 ;
-(id)presentationProperties;
-(id)quotedTextForStyle:(NSInteger)arg0 ;
-(id)quotedTextForStyleIgnoringAllowsQuotedText:(NSInteger)arg0 ;
-(id)subtitleForStyle:(NSInteger)arg0 ;
-(id)summaryForStyle:(NSInteger)arg0 ;
-(id)titleForStyle:(NSInteger)arg0 ;
-(id)unspecializedPresentationProperties;
-(id)unspecializedPresentationPropertiesForStyle:(NSInteger)arg0 ;
-(id)videoForStyle:(NSInteger)arg0 ;
-(void)_populateProperties:(id)arg0 withPrimaryIcon:(id)arg1 ;
-(void)_populateProperties:(id)arg0 withPrimaryIcon:(id)arg1 iconProperties:(id)arg2 ;
-(void)_populateProperties:(id)arg0 withPrimaryIcon:(id)arg1 iconProperties:(id)arg2 canBecomeImage:(BOOL)arg3 ;
-(void)_populateProperties:(id)arg0 withPrimaryImage:(id)arg1 ;


@end


#endif