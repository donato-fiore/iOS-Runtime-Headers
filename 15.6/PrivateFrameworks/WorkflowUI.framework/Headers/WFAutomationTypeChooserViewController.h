// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUTOMATIONTYPECHOOSERVIEWCONTROLLER_H
#define WFAUTOMATIONTYPECHOOSERVIEWCONTROLLER_H

@class UITableViewController, NSString, WFHomeManager;
@protocol WFHomeManagerEventObserver, WFAutomationTypeChooserViewControllerDelegate;



@interface WFAutomationTypeChooserViewController : UITableViewController <WFHomeManagerEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAutomationTypeChooserViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


+(NSUInteger)automationTypeForHomeManager:(id)arg0 ;
-(BOOL)isModalInPresentation;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithHomeManager:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)chooseHomeAutomation:(id)arg0 ;
-(void)choosePersonalAutomation:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif