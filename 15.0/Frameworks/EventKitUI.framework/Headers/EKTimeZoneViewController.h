// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKTIMEZONEVIEWCONTROLLER_H
#define EKTIMEZONEVIEWCONTROLLER_H

@class UITableViewController, UISearchController, NSArray, NSString, NSTimeZone;
@protocol UISearchControllerDelegate, EKTimeZoneViewControllerDelegate;



@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate>

 {
    UISearchController *_searchController;
    int _style;
}


@property (readonly, nonatomic) int chooserStyle; // ivar: _chooserStyle
@property (retain, nonatomic) NSArray *cities; // ivar: _cities
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKTimeZoneViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithChooserStyle:(int)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismissSearchController:(id)arg0 ;


@end


#endif