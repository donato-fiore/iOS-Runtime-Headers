// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIEMERGENCYCALLSERVICEVIEWCONTROLLER_H
#define SBUIEMERGENCYCALLSERVICEVIEWCONTROLLER_H

@class UIViewController, UIColor;
@protocol SBUIEmergencyCallServiceInterface;



@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>



@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)backgroundStyle:(id)arg0 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg0 ;
-(void)noteViewMovedOffscreenTemporarily;


@end


#endif