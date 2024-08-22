// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEALERTCONTENTVIEWCONTROLLER_H
#define PXPEOPLEALERTCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, PHPerson;



@interface PXPeopleAlertContentViewController : UIViewController

@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)initWithPerson:(id)arg0 message:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif