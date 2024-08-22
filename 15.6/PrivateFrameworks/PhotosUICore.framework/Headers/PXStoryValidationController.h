// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVALIDATIONCONTROLLER_H
#define PXSTORYVALIDATIONCONTROLLER_H

@class NSError, NSProgress;
@protocol PXStoryDiagnosticHUDContentProvider, PXStoryErrorReporter, PXStoryTimeline, OS_dispatch_queue;


#import "PXStoryController.h"
#import "PXStoryModel.h"
#import "PXStoryViewModel.h"

@interface PXStoryValidationController : PXStoryController <PXStoryDiagnosticHUDContentProvider>



@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) PXStoryModel *model; // ivar: _model
@property (retain, nonatomic) NSObject<PXStoryTimeline> *timelineToValidate; // ivar: _timelineToValidate
@property (nonatomic) NSInteger timelineValidationCount; // ivar: _timelineValidationCount
@property (retain, nonatomic) NSError *timelineValidationError; // ivar: _timelineValidationError
@property (retain, nonatomic) NSProgress *timelineValidationProgress; // ivar: _timelineValidationProgress
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_validateTimeline:(id)arg0 progress:(id)arg1 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)_handleTimelineValidationError:(id)arg0 progress:(id)arg1 ;
-(void)_invalidateModel;
-(void)_invalidateTimelineToValidate;
-(void)_invalidateTimelineValidation;
-(void)_updateModel;
-(void)_updateTimelineToValidate;
-(void)_updateTimelineValidation;
-(void)configureUpdater:(id)arg0 ;
-(void)dealloc;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif