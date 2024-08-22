// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTORBHEADERVIEWCONTROLLER_H
#define CNCONTACTORBHEADERVIEWCONTROLLER_H

@class UIViewController, NSArray;


#import "CNContactOrbHeaderView.h"

@interface CNContactOrbHeaderViewController : UIViewController

@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) CNContactOrbHeaderView *headerView; // ivar: _headerView


-(CGFloat)suggestedHeaderWidth;
-(id)initWithContacts:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif