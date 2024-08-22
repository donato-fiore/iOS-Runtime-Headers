// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSINGLEAVATARCONTROLLER_H
#define AVTSINGLEAVATARCONTROLLER_H

@class NSString;
@protocol AVTAvatarTransitionModel, AVTAvatarDisplayingController, AVTTransition, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTUILogger, AVTPresenterDelegate;

#import <Foundation/Foundation.h>

#import "AVTViewSession.h"
#import "AVTRenderingScope.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTImageTransitioningContainerView.h"
#import "AVTAdaptativeLayoutView.h"

@interface AVTSingleAvatarController : NSObject <AVTAvatarTransitionModel, AVTAvatarDisplayingController>



@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (retain, nonatomic) NSObject<AVTTransition> *currentTransition; // ivar: _currentTransition
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarDisplayingControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *displayedRecord; // ivar: _displayedRecord
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (readonly, nonatomic) AVTRenderingScope *renderingScope; // ivar: _renderingScope
@property (readonly) Class superclass;
@property (retain, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // ivar: _thumbnailRenderer
@property (retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // ivar: _transitioningContainer
@property (retain, nonatomic) AVTAdaptativeLayoutView *view; // ivar: _view


-(BOOL)isViewLoaded;
-(id)initWithDataSource:(id)arg0 environment:(id)arg1 ;
-(id)liveView;
-(void)applyBaseAlpha;
-(void)applyFullAlpha;
-(void)displayAvatarForRecord:(id)arg0 animated:(BOOL)arg1 ;
-(void)loadView;
-(void)prepareToTransitionToVisible:(BOOL)arg0 completionHandler:(*id)arg1 ;
-(void)prepareViewWithLayout:(id)arg0 ;
-(void)reloadData;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)transitionLiveViewToFront;
-(void)transitionStaticViewToFront;
-(void)transitionToOtherDisplayedRecord;
-(void)transitionToShowingDisplayedRecordWithCompletionHandler:(id)arg0 ;
-(void)updateImageViewWithAVTViewSnapshot;
-(void)updateImageViewWithDisplayedRecord;
-(void)useAVTViewFromSession:(id)arg0 withLayout:(id)arg1 ;


@end


#endif