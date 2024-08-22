// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDBACKASSETUIVIEWCONTROLLER_H
#define PXFEEDBACKASSETUIVIEWCONTROLLER_H

@class UIViewController, PHAsset, NSArray, NSString, UINavigationController, NSDictionary;
@protocol PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate, PXFeedbackAssetUIViewControllerDelegate;


#import "PXAutoloopVideoProcessTask.h"
#import "PXFeedbackLikeItOrNotComboUIViewController.h"

@interface PXFeedbackAssetUIViewController : UIViewController <PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSArray *autoLoopFrameworkDiagnosticFileURLs; // ivar: _autoLoopFrameworkDiagnosticFileURLs
@property (retain, nonatomic) PXAutoloopVideoProcessTask *autoLoopFrameworkDiagnosticsCurrentTask; // ivar: _autoLoopFrameworkDiagnosticsCurrentTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PXFeedbackAssetUIViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController; // ivar: _feedbackController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) NSDictionary *negativeFeedback; // ivar: _negativeFeedback
@property (retain, nonatomic) NSDictionary *positiveFeedback; // ivar: _positiveFeedback
@property (readonly) Class superclass;
@property (nonatomic) BOOL userLikedIt; // ivar: _userLikedIt


-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(id)initWithAsset:(id)arg0 delegate:(id)arg1 ;
-(id)longTitleText;
-(id)viewTitleForRadar;
-(void)_fileRadarWithAutoLoopAsset:(id)arg0 positiveFeedback:(id)arg1 negativeFeedback:(id)arg2 ;
-(void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)arg0 ;
-(void)autoloopVideoTaskStatusDidChange:(id)arg0 ;
-(void)continueFiling;
-(void)userDidFinish:(BOOL)arg0 ;
-(void)userIndicatedDislike;
-(void)userIndicatedLike;
-(void)userSentPositiveFeedback:(id)arg0 negativeFeedback:(id)arg1 customFeedback:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif