// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDBACKIMAGEQUALITYUIVIEWCONTROLLER_H
#define PXFEEDBACKIMAGEQUALITYUIVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UINavigationController, NSDictionary;
@protocol PXFeedbackFormDelegate, PXFeedbackImageQualityUIViewControllerDelegate;


#import "PXFeedbackLikeItOrNotComboUIViewController.h"

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate>



@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PXFeedbackImageQualityUIViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController; // ivar: _feedbackController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *imageQualityDiagnosticFileURLs; // ivar: _imageQualityDiagnosticFileURLs
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) NSDictionary *negativeFeedback; // ivar: _negativeFeedback
@property (readonly) Class superclass;


-(BOOL)shouldContinuePresentingFormAfterFeedback;
-(BOOL)shouldDisplaySecondaryFeedbackButtons;
-(BOOL)wantsCustomFeedbackSection;
-(BOOL)wantsPositiveFeedbackSection;
-(NSInteger)_radarComponentForFeedback:(id)arg0 ;
-(id)_captureIDFromURL:(id)arg0 ;
-(id)_captureIDsToCaptureFoldersInDirectory:(id)arg0 ;
-(id)_componentIDForComponent:(NSInteger)arg0 ;
-(id)_componentNameForComponent:(NSInteger)arg0 ;
-(id)_generateTitleForFeedback:(id)arg0 forAssets:(id)arg1 ;
-(id)_generateURLsForAssetsDBGFiles:(id)arg0 ;
-(id)_generateZippedCaptureFoldersForAssets:(id)arg0 ;
-(id)_keywordIDForComponent:(NSInteger)arg0 ;
-(id)initWithAssets:(id)arg0 delegate:(id)arg1 ;
-(id)longTitleText;
-(id)positiveFeedbackKeys;
-(id)viewTitleForRadar;
-(int)_addDirectoryToArchive:(id)arg0 withDirName:(id)arg1 archive:(struct archive *)arg2 ;
-(int)_addFileToArchive:(id)arg0 withFileName:(id)arg1 archive:(struct archive *)arg2 ;
-(void)_archiveFolder:(id)arg0 destinationPath:(id)arg1 ;
-(void)_dismissActiveAlertControllerWithCompletion:(id)arg0 ;
-(void)_fileRadarWithAssets:(id)arg0 positiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3 ;
-(void)userDidFinish:(BOOL)arg0 ;
-(void)userIndicatedDislike;
-(void)userIndicatedLike;
-(void)userSentPositiveFeedback:(id)arg0 negativeFeedback:(id)arg1 customFeedback:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif