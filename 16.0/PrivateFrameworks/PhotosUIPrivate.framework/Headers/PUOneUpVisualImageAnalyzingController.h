// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUONEUPVISUALIMAGEANALYZINGCONTROLLER_H
#define PUONEUPVISUALIMAGEANALYZINGCONTROLLER_H

@class NSString, PXVisualIntelligenceManager;
@protocol PUBrowsingViewModelChangeObserver;

#import <Foundation/Foundation.h>

#import "PUBrowsingViewModel.h"

@interface PUOneUpVisualImageAnalyzingController : NSObject <PUBrowsingViewModelChangeObserver>



@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVisualIntelligenceManager *visualImageManager; // ivar: _visualImageManager


+(void)_setVisualImageAnalysis:(id)arg0 forAssetViewModel:(id)arg1 ;
-(id)init;
-(id)initWithBrowsingViewModel:(id)arg0 ;
-(void)_cancelVKImageAnalysisForAssetViewModel:(id)arg0 ;
-(void)_requestVKImageAnalysisByCurrentVideoFrameForAssetViewModel:(id)arg0 ;
-(void)_requestVKImageAnalysisForAssetViewModel:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif