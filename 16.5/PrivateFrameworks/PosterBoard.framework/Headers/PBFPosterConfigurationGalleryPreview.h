// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERCONFIGURATIONGALLERYPREVIEW_H
#define PBFPOSTERCONFIGURATIONGALLERYPREVIEW_H

@class NSString, PRPosterConfiguration, PRPosterFocusConfiguration, PRPosterHomeScreenConfiguration, PRPosterRenderingConfiguration, NSArray, PRPosterTitleStyleConfiguration;
@protocol PBFPosterPreview, PBFPosterDescriptorLookupInfo, PBFComplicationLookupInfo;

#import <Foundation/Foundation.h>

#import "PBFGalleryOptions.h"

@interface PBFPosterConfigurationGalleryPreview : NSObject <PBFPosterPreview>



@property (readonly, copy, nonatomic) NSString *complicationLayoutType; // ivar: _complicationLayoutType
@property (readonly, nonatomic) PRPosterConfiguration *configuration; // ivar: _configuration
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
@property (readonly, nonatomic) NSUInteger presentationStyle; // ivar: _presentationStyle
@property (readonly, copy, nonatomic) NSString *previewUniqueIdentifier; // ivar: _previewUniqueIdentifier
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration; // ivar: _renderingConfiguration
@property (readonly, copy, nonatomic) NSObject<PBFComplicationLookupInfo> *subtitleComplication; // ivar: _subtitleComplication
@property (readonly, copy, nonatomic) NSArray *suggestedComplications; // ivar: _suggestedComplications
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration; // ivar: _titleStyleConfiguration
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)initWithConfiguration:(id)arg0 extension:(id)arg1 ;


@end


#endif