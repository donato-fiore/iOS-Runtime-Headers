// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGWALLPAPERLIBRARYANALYSISSUMMARY_H
#define PGWALLPAPERLIBRARYANALYSISSUMMARY_H


#import <Foundation/Foundation.h>


@interface PGWallpaperLibraryAnalysisSummary : NSObject

@property (readonly, nonatomic) BOOL libraryIsProcessedEnough; // ivar: _libraryIsProcessedEnough
@property (readonly, nonatomic) CGFloat ratioOfAssetsAtOrAboveFaceAnalysisVersion; // ivar: _ratioOfAssetsAtOrAboveFaceAnalysisVersion
@property (readonly, nonatomic) CGFloat ratioOfAssetsAtOrAboveSceneAnalysisVersion; // ivar: _ratioOfAssetsAtOrAboveSceneAnalysisVersion


-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif