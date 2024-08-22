// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERRADARATTACHMENTPROVIDER_H
#define PUWALLPAPERRADARATTACHMENTPROVIDER_H

@class PHAsset, PHSuggestion;
@protocol PXTapToRadarDiagnosticProvider;

#import <Foundation/Foundation.h>


@interface PUWallpaperRadarAttachmentProvider : NSObject <PXTapToRadarDiagnosticProvider>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) PHSuggestion *suggestion; // ivar: _suggestion


+(id)generateDebugDescriptionForSuggestion:(id)arg0 ;
+(id)radarConfigurationForAsset:(id)arg0 suggestion:(id)arg1 layerStack:(id)arg2 segmentationItem:(id)arg3 posterDescriptor:(id)arg4 posterConfiguration:(id)arg5 component:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(id)initWithSuggestion:(id)arg0 asset:(id)arg1 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;


@end


#endif