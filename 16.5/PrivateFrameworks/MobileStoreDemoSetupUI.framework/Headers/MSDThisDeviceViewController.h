// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDTHISDEVICEVIEWCONTROLLER_H
#define MSDTHISDEVICEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UITableViewDataSource;



@interface MSDThisDeviceViewController : UIViewController <UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *osString; // ivar: _osString
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif