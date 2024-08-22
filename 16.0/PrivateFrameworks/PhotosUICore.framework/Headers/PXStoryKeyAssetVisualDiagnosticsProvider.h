// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYKEYASSETVISUALDIAGNOSTICSPROVIDER_H
#define PXSTORYKEYASSETVISUALDIAGNOSTICSPROVIDER_H

@protocol PXVisualDiagnosticsProvider;

#import <Foundation/Foundation.h>

#import "PXStoryVisualDiagnosticsProviderHelper.h"
#import "PXStoryModel.h"

@interface PXStoryKeyAssetVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider>



@property (readonly, nonatomic) PXStoryVisualDiagnosticsProviderHelper *helper; // ivar: _helper
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model


-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)_requestPotentialKeyAssetsWithResultHandler:(id)arg0 ;
-(void)_requestThumbnailTimelineWithKeyAsset:(id)arg0 resultHandler:(id)arg1 ;
-(void)addVisualDiagnosticsToContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif