// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDIAGNOSTICSREACHABILITYEVENTVIEWCONTROLLER_H
#define HUDIAGNOSTICSREACHABILITYEVENTVIEWCONTROLLER_H

@class UIViewController, HMCameraProfile, HFCameraScrubberReachabilityEventContainer, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface HUDiagnosticsReachabilityEventViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) HFCameraScrubberReachabilityEventContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITableView *eventTableView; // ivar: _eventTableView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithReachabilityEvent:(id)arg0 cameraProfile:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif