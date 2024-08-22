// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTITLEFONTDIAGNOSTICSSERVICE_H
#define PXTITLEFONTDIAGNOSTICSSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXTitleFontDiagnosticsService : PXDiagnosticsService



+(id)_statisticsDescriptionForAssetCollections:(id)arg0 usingFontIndexBlock:(id)arg1 ;
+(id)diagnosticsDescriptionForAssetCollections:(id)arg0 ;
-(BOOL)canProvideContextualViewController;
-(id)contextualViewController;
-(id)title;


@end


#endif