// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLQRCODELISTVIEWCONTROLLER_H
#define WLQRCODELISTVIEWCONTROLLER_H

@class OBTableWelcomeController, NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface WLQRCodeListViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate>

 {
    NSUInteger _attempts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *qrcodes; // ivar: _qrcodes
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif