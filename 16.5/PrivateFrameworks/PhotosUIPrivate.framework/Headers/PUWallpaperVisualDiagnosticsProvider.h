// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERVISUALDIAGNOSTICSPROVIDER_H
#define PUWALLPAPERVISUALDIAGNOSTICSPROVIDER_H

@class PHAsset, PXMediaProvider, PHSuggestion;
@protocol PXVisualDiagnosticsProvider, PXTapToRadarDiagnosticProvider;

#import <Foundation/Foundation.h>


@interface PUWallpaperVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider, PXTapToRadarDiagnosticProvider>



@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PHSuggestion *suggestion; // ivar: _suggestion


+(id)visualDiagnosticsActionForSuggestion:(id)arg0 asset:(id)arg1 fromViewController:(id)arg2 ;
+(id)visualDiagnosticsConfigurationForSuggestion:(id)arg0 asset:(id)arg1 ;
-(id)initWithSuggestion:(id)arg0 asset:(id)arg1 ;
-(void)_addAssetDiagnostics:(id)arg0 ;
-(void)_addCoverPage:(id)arg0 ;
-(void)_addCropDiagnostics:(id)arg0 ;
-(void)_addSuggestionDiagnostics:(id)arg0 ;
-(void)_drawAsset:(id)arg0 inRect:(struct CGRect )arg1 context:(id)arg2 ;
-(void)addVisualDiagnosticsToContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;


@end


#endif