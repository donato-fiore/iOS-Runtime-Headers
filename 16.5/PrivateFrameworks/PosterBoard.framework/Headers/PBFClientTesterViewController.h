// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFCLIENTTESTERVIEWCONTROLLER_H
#define PBFCLIENTTESTERVIEWCONTROLLER_H

@class UITableViewController, PRUIModalController, NSString;
@protocol PRUIModalControllerDelegate;



@interface PBFClientTesterViewController : UITableViewController <PRUIModalControllerDelegate>

 {
    PRUIModalController *_modalController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)modalController:(id)arg0 didDismissSheetWithResponse:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif