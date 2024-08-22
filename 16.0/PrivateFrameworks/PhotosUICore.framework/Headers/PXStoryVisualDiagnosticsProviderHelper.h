// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYVISUALDIAGNOSTICSPROVIDERHELPER_H
#define PXSTORYVISUALDIAGNOSTICSPROVIDERHELPER_H

@protocol PXStoryDisplayAssetCroppingContext;

#import <Foundation/Foundation.h>

#import "PXStoryConfiguration.h"
#import "PXMediaProvider.h"

@interface PXStoryVisualDiagnosticsProviderHelper : NSObject

@property (readonly, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CGFloat contentsScale; // ivar: _contentsScale
@property (readonly, nonatomic) NSObject<PXStoryDisplayAssetCroppingContext> *croppingContext; // ivar: _croppingContext
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)drawAsset:(id)arg0 contentsRect:(struct ? )arg1 inRect:(struct CGRect )arg2 context:(id)arg3 ;
-(void)drawAsset:(id)arg0 inRect:(struct CGRect )arg1 context:(id)arg2 ;
-(void)drawCropRectsForAsset:(id)arg0 inRect:(struct CGRect )arg1 context:(id)arg2 configuration:(id)arg3 ;
-(void)drawSegmentOfTimeline:(id)arg0 withIdentifier:(NSInteger)arg1 inRect:(struct CGRect )arg2 context:(id)arg3 ;


@end


#endif