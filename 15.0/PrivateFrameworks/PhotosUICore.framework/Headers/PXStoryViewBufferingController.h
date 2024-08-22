// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYVIEWBUFFERINGCONTROLLER_H
#define PXSTORYVIEWBUFFERINGCONTROLLER_H

@class NSDictionary;
@protocol PXStoryDiagnosticHUDContentProvider;


#import "PXStoryController.h"
#import "PXStoryBufferingController.h"
#import "PXStoryModel.h"
#import "PXStoryViewModel.h"

@interface PXStoryViewBufferingController : PXStoryController <PXStoryDiagnosticHUDContentProvider>



@property (retain, nonatomic) PXStoryBufferingController *bufferingController; // ivar: _bufferingController
@property (nonatomic) BOOL didShowBufferingHUDAutomatically; // ivar: _didShowBufferingHUDAutomatically
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) CGFloat lastCriticalBufferingDuration;
@property (readonly, nonatomic) CGFloat lastNoncriticalBufferingDuration;
@property (retain, nonatomic) PXStoryModel *model; // ivar: _model
@property (nonatomic) NSInteger originalHUDType; // ivar: _originalHUDType
@property (nonatomic) BOOL originalIsHUDVisible; // ivar: _originalIsHUDVisible
@property (readonly, nonatomic) CGFloat totalBufferingTimeInterval;
@property (readonly, nonatomic) NSDictionary *totalBufferingTimeIntervalsPerReason;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL wantsBufferingHUDVisible; // ivar: _wantsBufferingHUDVisible


-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_invalidateBufferingController;
-(void)_invalidateBufferingControllerProperties;
-(void)_invalidateMainModel;
-(void)_invalidateViewModelProperties;
-(void)_invalidateWantsBufferingHUDVisible;
-(void)_updateBufferingController;
-(void)_updateBufferingControllerProperties;
-(void)_updateMainModel;
-(void)_updateViewModelProperties;
-(void)_updateWantsBufferingHUDVisible;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif