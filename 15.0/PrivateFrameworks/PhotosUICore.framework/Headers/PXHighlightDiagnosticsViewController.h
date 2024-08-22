// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXHIGHLIGHTDIAGNOSTICSVIEWCONTROLLER_H
#define PXHIGHLIGHTDIAGNOSTICSVIEWCONTROLLER_H

@class PHPhotosHighlight;


#import "PXCuratedAssetCollectionDiagnosticsViewController.h"

@interface PXHighlightDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {
    PHPhotosHighlight *_sourceHighlight;
}




-(BOOL)generateSectionTitles:(*id)arg0 andTableContent:(*id)arg1 forIndex:(NSInteger)arg2 ;
-(id)assetsForCurationType:(NSInteger)arg0 ;
-(id)curationDebugInformationWithOptions:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 ;
-(id)radarAttachmentURLs;
-(id)radarComponentInfoForRoute:(id)arg0 ;
-(id)radarDescriptionTemplate;
-(id)radarRoutes;
-(id)radarTitleTemplate;
-(id)sourceDictionary;


@end


#endif