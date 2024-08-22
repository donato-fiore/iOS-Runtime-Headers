// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRELATEDCONTROLLER_H
#define PXSTORYRELATEDCONTROLLER_H

@class NSProgress, NSSet;
@protocol PXStoryMutableRelatedController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider, PXStoryRelatedProducer;


#import "PXStoryController.h"
#import "PXStoryConfiguration.h"
#import "PXStoryModel.h"
#import "PXStoryProducerResult.h"
#import "PXStoryViewModel.h"

@interface PXStoryRelatedController : PXStoryController <PXStoryMutableRelatedController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider>



@property (readonly, nonatomic) BOOL canStartProducingRelated; // ivar: _canStartProducingRelated
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isProductionEnabled; // ivar: _isProductionEnabled
@property (retain, nonatomic) PXStoryConfiguration *mainConfiguration; // ivar: _mainConfiguration
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSSet *recentlyUsedAppleMusicSongIDs; // ivar: _recentlyUsedAppleMusicSongIDs
@property (readonly, nonatomic) NSSet *recentlyUsedFlexSongIDs; // ivar: _recentlyUsedFlexSongIDs
@property (readonly, nonatomic) NSObject<PXStoryRelatedProducer> *relatedProducer; // ivar: _relatedProducer
@property (readonly, nonatomic) PXStoryProducerResult *result; // ivar: _result
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)detailedDebugInformation;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_handleResult:(id)arg0 ;
-(void)_invalidateCanStartProducingRelated;
-(void)_invalidateMainConfiguration;
-(void)_invalidateMainModel;
-(void)_invalidateRelatedConfigurations;
-(void)_updateCanStartProducingRelated;
-(void)_updateMainConfiguration;
-(void)_updateMainModel;
-(void)_updateRelatedConfigurations;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)configureUpdater:(id)arg0 ;
-(void)dealloc;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif