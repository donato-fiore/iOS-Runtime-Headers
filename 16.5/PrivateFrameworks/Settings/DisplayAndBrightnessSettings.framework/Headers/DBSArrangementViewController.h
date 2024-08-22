// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSARRANGEMENTVIEWCONTROLLER_H
#define DBSARRANGEMENTVIEWCONTROLLER_H

@class PSViewController, UIView, SBSExternalDisplayService, SBSConnectedDisplayInfo, UISwitch;
@protocol DBSArrangementLayoutViewControllerDelegate, DBSArrangementViewControllerDelegate;


#import "DBSArrangementLayoutViewController.h"

@interface DBSArrangementViewController : PSViewController <DBSArrangementLayoutViewControllerDelegate>



@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) NSUInteger currentDisplayLocation; // ivar: _currentDisplayLocation
@property (weak, nonatomic) NSObject<DBSArrangementViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SBSExternalDisplayService *displayService; // ivar: _displayService
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo; // ivar: _externalDisplayInfo
@property (retain, nonatomic) DBSArrangementLayoutViewController *layoutController; // ivar: _layoutController
@property (retain, nonatomic) UISwitch *mirroredSwitch; // ivar: _mirroredSwitch
@property (nonatomic) BOOL wasMirrored; // ivar: _wasMirrored


-(id)externalDisplayName;
-(id)nativeDisplayImageWithWidth:(CGFloat)arg0 ;
-(id)nativeDisplayName;
-(struct CGSize )externalDisplaySize;
-(struct CGSize )nativeDisplaySize;
-(struct CGSize )preferredContentSize;
-(void)cancelPressed;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)mirroredToggled:(id)arg0 ;
-(void)nativeDisplayLocationDidChange:(NSUInteger)arg0 ;
-(void)setPressed;
-(void)updateSetButtonEnablement;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif