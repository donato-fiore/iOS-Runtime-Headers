// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFGENERICPOSTERPREVIEW_H
#define PBFGENERICPOSTERPREVIEW_H

@class NSString, PRPosterFocusConfiguration, PRPosterHomeScreenConfiguration, PRPosterRenderingConfiguration, NSArray, PRPosterTitleStyleConfiguration;
@protocol PBFPosterPreview, NSCopying, PBFPosterDescriptorLookupInfo, PBFComplicationLookupInfo;

#import <Foundation/Foundation.h>

#import "PBFGalleryOptions.h"

@interface PBFGenericPosterPreview : NSObject <PBFPosterPreview, NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, copy, nonatomic) NSString *complicationLayoutType; // ivar: _complicationLayoutType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration; // ivar: _focusConfiguration
@property (readonly, copy, nonatomic) PBFGalleryOptions *galleryOptions; // ivar: _galleryOptions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration; // ivar: _homeScreenConfiguration
@property (readonly, copy, nonatomic) NSObject<PBFPosterDescriptorLookupInfo> *posterDescriptorLookupInfo; // ivar: _posterDescriptorLookupInfo
@property (readonly, copy, nonatomic) NSString *posterLocalizedDescription; // ivar: _posterLocalizedDescription
@property (readonly, copy, nonatomic) NSString *posterLocalizedTitle; // ivar: _posterLocalizedTitle
@property (readonly, copy, nonatomic) NSString *previewUniqueIdentifier; // ivar: _previewUniqueIdentifier
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration; // ivar: _renderingConfiguration
@property (readonly, copy, nonatomic) NSObject<PBFComplicationLookupInfo> *subtitleComplication; // ivar: _subtitleComplication
@property (readonly, copy, nonatomic) NSArray *suggestedComplications; // ivar: _suggestedComplications
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration; // ivar: _titleStyleConfiguration
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)posterPreviewWithUniqueIdentifier:(id)arg0 title:(id)arg1 description:(id)arg2 posterDescriptorLookupInfo:(id)arg3 titleStyleConfiguration:(id)arg4 focusConfiguration:(id)arg5 subtitleComplication:(id)arg6 suggestedComplications:(id)arg7 complicationLayoutType:(id)arg8 renderingConfiguration:(id)arg9 homeScreenConfiguration:(id)arg10 previewType:(id)arg11 galleryOptions:(id)arg12 ;
+(id)testPosterPreviewWithLocalizedTitle:(id)arg0 description:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif