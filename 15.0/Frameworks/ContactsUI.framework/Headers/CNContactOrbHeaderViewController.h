// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTORBHEADERVIEWCONTROLLER_H
#define CNCONTACTORBHEADERVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface CNContactOrbHeaderViewController : UIViewController

@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts


-(CGFloat)suggestedHeaderWidth;
-(id)initWithContacts:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif