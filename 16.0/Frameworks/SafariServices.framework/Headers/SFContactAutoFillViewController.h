// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCONTACTAUTOFILLVIEWCONTROLLER_H
#define SFCONTACTAUTOFILLVIEWCONTROLLER_H

@class UITableViewController, CNContact, NSArray;
@protocol SFContactAutoFillViewControllerFiller;



@interface SFContactAutoFillViewController : UITableViewController {
    CNContact *_contact;
    NSArray *_matches;
    NSArray *_propertyValues;
}


@property (weak, nonatomic) NSObject<SFContactAutoFillViewControllerFiller> *autoFiller; // ivar: _autoFiller


-(BOOL)canBecomeFirstResponder;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_valueForProperty:(id)arg0 identifier:(id)arg1 ;
-(id)initWithMatches:(id)arg0 contact:(id)arg1 ;
-(id)matchesForProperty:(id)arg0 ;
-(id)properties;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)valuesFromPropertyMatches:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)autoFill:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif