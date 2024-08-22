// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDCOMPANIONSHARECONTROLLER_H
#define NTKGREENFIELDCOMPANIONSHARECONTROLLER_H

@class UIViewController, NSString;
@protocol NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "NTKFace.h"
#import "NTKGreenfieldCompanionActivityViewController.h"

@interface NTKGreenfieldCompanionShareController : NSObject <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate>

 {
    NTKFace *_face;
    NTKFace *_updatedFace;
    UIViewController *_originatedViewController;
    NTKGreenfieldCompanionActivityViewController *_activityViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(void)_handleError:(id)arg0 ;
-(void)_prepareForShareSheet;
-(void)_presentInternalWarningIfNeededWithContinueBlock:(id)arg0 ;
-(void)_presentShareSheetWithDraftRecipe:(id)arg0 previewImage:(id)arg1 ;
-(void)_showPhotosPickerView;
-(void)_startFaceSharing;
-(void)companionSharePhotosPickerViewController:(id)arg0 didFinishWithFace:(id)arg1 ;
-(void)shareWatchFace:(id)arg0 fromViewController:(id)arg1 ;


@end


#endif