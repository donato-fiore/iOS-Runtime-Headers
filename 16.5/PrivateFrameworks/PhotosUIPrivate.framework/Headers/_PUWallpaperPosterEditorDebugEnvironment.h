// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUWALLPAPERPOSTEREDITORDEBUGENVIRONMENT_H
#define _PUWALLPAPERPOSTEREDITORDEBUGENVIRONMENT_H

@class NSString, PFPosterDescriptor, UIColor, NSURL, PFPosterConfiguration;
@protocol PUWallpaperEditorEnvironment, PUPosterOverrideConfiguration;

#import <Foundation/Foundation.h>


@interface _PUWallpaperPosterEditorDebugEnvironment : NSObject <PUWallpaperEditorEnvironment>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger legacyConfigurationType; // ivar: _legacyConfigurationType
@property (retain, nonatomic) NSObject<PUPosterOverrideConfiguration> *overrideConfiguration; // ivar: _overrideConfiguration
@property (retain, nonatomic) PFPosterDescriptor *posterDescriptor; // ivar: _posterDescriptor
@property (retain, nonatomic) UIColor *pu_caseColor; // ivar: _pu_caseColor
@property (readonly, nonatomic) NSUInteger pu_legacyConfigurationType;
@property (readonly, nonatomic) NSObject<PUPosterOverrideConfiguration> *pu_overrideConfiguration;
@property (readonly, nonatomic) PFPosterDescriptor *pu_posterDescriptor;
@property (readonly, nonatomic) NSInteger pu_posterType;
@property (retain, nonatomic) NSString *pu_selectedToolbarItemIdentifier; // ivar: _pu_selectedToolbarItemIdentifier
@property (readonly, nonatomic) NSUInteger pu_significantEventsCounter;
@property (readonly, nonatomic) NSURL *pu_sourceAssetDirectory;
@property (readonly, nonatomic) PFPosterConfiguration *pu_sourcePosterConfiguration;
@property (readonly, nonatomic) NSURL *pu_targetAssetDirectory;
@property (nonatomic) NSInteger pu_userInterfaceStyle; // ivar: _pu_userInterfaceStyle
@property (retain, nonatomic) NSURL *sourceAssetDirectory; // ivar: _sourceAssetDirectory
@property (retain, nonatomic) PFPosterConfiguration *sourcePosterConfiguration; // ivar: _sourcePosterConfiguration
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *targetAssetDirectory; // ivar: _targetAssetDirectory


-(id)init;
-(id)initWithPosterDescriptor:(id)arg0 ;
-(id)initWithSourcePosterConfiguration:(id)arg0 ;


@end


#endif