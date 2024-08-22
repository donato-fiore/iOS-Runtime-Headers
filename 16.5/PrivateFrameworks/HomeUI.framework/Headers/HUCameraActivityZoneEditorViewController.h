// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERAACTIVITYZONEEDITORVIEWCONTROLLER_H
#define HUCAMERAACTIVITYZONEEDITORVIEWCONTROLLER_H

@class UIViewController, HMCameraProfile, NSString, NSArray, UILabel;
@protocol HUCameraActivityZoneCanvasDelegate, HFCameraLiveStreamControllerDelegate;


#import "HUCameraActivityZoneCanvasView.h"
#import "HUCameraLiveStreamViewController.h"

@interface HUCameraActivityZoneEditorViewController : UIViewController <HUCameraActivityZoneCanvasDelegate, HFCameraLiveStreamControllerDelegate>



@property (retain, nonatomic) HUCameraActivityZoneCanvasView *activityZoneCanvas; // ivar: _activityZoneCanvas
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActivityZoneChanges;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *initialActivityZones; // ivar: _initialActivityZones
@property (nonatomic) BOOL initialSettingDetectsInclusionZones; // ivar: _initialSettingDetectsInclusionZones
@property (retain, nonatomic) HUCameraLiveStreamViewController *liveStreamViewController; // ivar: _liveStreamViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *tutorialLabel; // ivar: _tutorialLabel


-(id)_addZoneButton;
-(id)initWithCameraProfile:(id)arg0 ;
-(void)_displayProgressIndicatorWhileLoading;
-(void)_refreshUI;
-(void)_updateNavigationBar;
-(void)_updateToolbar;
-(void)_updateTutorialText;
-(void)_updateViewsForTraitCollection;
-(void)cancelEditing;
-(void)commitChangesAndDismissEditor;
-(void)dealloc;
-(void)didAttemptToAddOverlappingLineForCanvas:(id)arg0 ;
-(void)didAttemptToCreateOverlappingZoneForCanvas:(id)arg0 ;
-(void)didAttemptToMovePointToOverlapZoneForCanvas:(id)arg0 ;
-(void)didUpdateActivityZone:(id)arg0 ;
-(void)didUpdateActivityZoneCanvas:(id)arg0 ;
-(void)displayActivityZoneState;
-(void)displayAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)displayErrorAlert;
-(void)displayLineOverlapAlert;
-(void)displayMoveOverlapAlert;
-(void)displayUnCommittedChangesAlert;
-(void)displayZoneOverlapAlert;
-(void)invertZones;
-(void)streamControllerStateDidUpdate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif