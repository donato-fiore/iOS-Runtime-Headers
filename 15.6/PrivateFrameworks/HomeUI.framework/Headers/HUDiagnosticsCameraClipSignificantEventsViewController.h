// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDIAGNOSTICSCAMERACLIPSIGNIFICANTEVENTSVIEWCONTROLLER_H
#define HUDIAGNOSTICSCAMERACLIPSIGNIFICANTEVENTSVIEWCONTROLLER_H

@class UIViewController, HMCameraClip, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface HUDiagnosticsCameraClipSignificantEventsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITableView *eventTableView; // ivar: _eventTableView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCameraClip:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif