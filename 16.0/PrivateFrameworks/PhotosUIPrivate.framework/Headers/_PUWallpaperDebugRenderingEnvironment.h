// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PUWALLPAPERDEBUGRENDERINGENVIRONMENT_H
#define _PUWALLPAPERDEBUGRENDERINGENVIRONMENT_H

@class NSURL, NSString, PFPosterConfiguration;
@protocol PUWallpaperRenderingEnvironment;

#import <Foundation/Foundation.h>


@interface _PUWallpaperDebugRenderingEnvironment : NSObject <PUWallpaperRenderingEnvironment>



@property (readonly, nonatomic) NSURL *assetDirectory; // ivar: _assetDirectory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PFPosterConfiguration *posterConfiguration; // ivar: _posterConfiguration
@property (readonly, nonatomic) NSURL *pu_assetDirectory;
@property (readonly, nonatomic, getter=pu_backlightLuminance) NSInteger pu_backlightLuminance;
@property (readonly, nonatomic) NSInteger pu_contentsType;
@property (readonly, nonatomic, getter=pu_isPlayground) BOOL pu_playground;
@property (readonly, nonatomic, getter=pu_isPreview) BOOL pu_preview; // ivar: _pu_preview
@property (nonatomic) NSUInteger pu_significantEventsCounter; // ivar: _pu_significantEventsCounter
@property (readonly, nonatomic, getter=pu_isSnapshot) BOOL pu_snapshot; // ivar: _pu_snapshot
@property (readonly) Class superclass;


-(id)initWithPosterConfiguration:(id)arg0 ;


@end


#endif