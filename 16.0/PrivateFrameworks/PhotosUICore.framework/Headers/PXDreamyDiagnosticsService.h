// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDREAMYDIAGNOSTICSSERVICE_H
#define PXDREAMYDIAGNOSTICSSERVICE_H

@class PHAsset;


#import "PXDiagnosticsService.h"

@interface PXDreamyDiagnosticsService : PXDiagnosticsService {
    PHAsset *_asset;
}




-(BOOL)canProvideContextualViewController;
-(id)contextualViewController;
-(id)initWithItemProviders:(id)arg0 ;
-(id)title;


@end


#endif