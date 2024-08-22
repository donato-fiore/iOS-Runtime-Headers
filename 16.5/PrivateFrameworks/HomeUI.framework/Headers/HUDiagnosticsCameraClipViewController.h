// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDIAGNOSTICSCAMERACLIPVIEWCONTROLLER_H
#define HUDIAGNOSTICSCAMERACLIPVIEWCONTROLLER_H

@class UIViewController, HMCameraClip, HMCameraProfile, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface HUDiagnosticsCameraClipViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITableView *eventTableView; // ivar: _eventTableView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithRecordingEvent:(id)arg0 cameraProfile:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif