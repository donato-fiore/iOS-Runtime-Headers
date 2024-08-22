// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORYDIAGNOSTICSVIEWCONTROLLER_H
#define PXMEMORYDIAGNOSTICSVIEWCONTROLLER_H

@class PHMemory;


#import "PXCuratedAssetCollectionDiagnosticsViewController.h"

@interface PXMemoryDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {
    PHMemory *_sourceMemory;
}




-(BOOL)generateSectionTitles:(*id)arg0 andTableContent:(*id)arg1 forIndex:(NSInteger)arg2 ;
-(id)assetsForCurationType:(NSInteger)arg0 ;
-(id)curationDebugInformationWithOptions:(id)arg0 ;
-(id)initWithMemory:(id)arg0 ;
-(id)radarAttachmentURLs;
-(id)radarComponentInfoForRoute:(id)arg0 ;
-(id)radarDescriptionTemplate;
-(id)radarRoutes;
-(id)radarTitleTemplate;
-(id)sourceDictionary;


@end


#endif