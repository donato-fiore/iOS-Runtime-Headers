// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGRAPHDIAGNOSTICSSERVICE_H
#define PXGRAPHDIAGNOSTICSSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXGraphDiagnosticsService : PXDiagnosticsService



+(id)viewControllerForDetailsOfAsset:(id)arg0 ;
-(BOOL)canProvideConsoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(id)_curationDebugStringForDictionary:(id)arg0 asset:(id)arg1 ;
-(id)contextualViewController;
-(id)saliencyStringForAsset:(id)arg0 ;
-(id)settingsViewController;
-(id)title;


@end


#endif