// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXINLINEVIDEOSTABILIZATIONDIAGNOSTICSSERVICE_H
#define PXINLINEVIDEOSTABILIZATIONDIAGNOSTICSSERVICE_H

@class PHAsset;


#import "PXDiagnosticsService.h"

@interface PXInlineVideoStabilizationDiagnosticsService : PXDiagnosticsService {
    PHAsset *_asset;
}




-(BOOL)canProvideContextualViewController;
-(id)contextualViewController;
-(id)initWithItemProviders:(id)arg0 ;
-(id)title;


@end


#endif