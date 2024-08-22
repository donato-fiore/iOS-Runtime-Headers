// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFGENERICPOSTERPREVIEW_H
#define PBFGENERICPOSTERPREVIEW_H

@class NSString, PRPosterFocusConfiguration, PRPosterHomeScreenConfiguration, PRPosterRenderingConfiguration, NSArray, PRPosterTitleStyleConfiguration;
@protocol PBFPosterPreview, NSCopying, PBFPosterDescriptorLookupInfo, PBFComplicationLookupInfo;

#import <Foundation/Foundation.h>

#import "PBFGalleryOptions.h"

@interface PBFGenericPosterPreview : NSObject <PBFPosterPreview, NSCopying>

 {
    NSUInteger _hash;
    NSUInteger _cachedGalleryPresentationStyle;
}


@property (readonly, copy, nonatomic) NSString *complicationLayoutType; // ivar: _complicationLayoutType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey; // ivar: _displayNameLocalizationKey
@property (readonly, copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration; // ivar: _focusConfiguration
@property (readonly, copy, nonatomic) NSString *galleryLocalizedDescription; // ivar: _galleryLocalizedDescription
@property (readonly, copy, nonatomic) NSString *galleryLocalizedTitle; // ivar: _galleryLocalizedTitle
@property (readonly, copy, nonatomic) PBFGalleryOptions *galleryOptions; // ivar: _galleryOptions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration; // ivar: _homeScreenConfiguration
@property (readonly, copy, nonatomic) NSObject<PBFPosterDescriptorLookupInfo> *posterDescriptorLookupInfo; // ivar: _posterDescriptorLookupInfo
@property (readonly, nonatomic) NSUInteger presentationStyle;
@property (readonly, copy, nonatomic) NSString *previewUniqueIdentifier; // ivar: _previewUniqueIdentifier
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration; // ivar: _renderingConfiguration
@property (readonly, copy, nonatomic) NSObject<PBFComplicationLookupInfo> *subtitleComplication; // ivar: _subtitleComplication
@property (readonly, copy, nonatomic) NSArray *suggestedComplications; // ivar: _suggestedComplications
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration; // ivar: _titleStyleConfiguration
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)posterPreviewWithUniqueIdentifier:(id)arg0 displayNameLocalizationKey:(id)arg1 galleryLocalizedTitle:(id)arg2 galleryLocalizedDescription:(id)arg3 posterDescriptorLookupInfo:(id)arg4 titleStyleConfiguration:(id)arg5 focusConfiguration:(id)arg6 subtitleComplication:(id)arg7 suggestedComplications:(id)arg8 complicationLayoutType:(id)arg9 renderingConfiguration:(id)arg10 homeScreenConfiguration:(id)arg11 previewType:(id)arg12 galleryOptions:(id)arg13 ;
+(id)testPosterPreviewWithLocalizedTitle:(id)arg0 description:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif