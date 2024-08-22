// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMACCOUNTDETAILSVIEWCONTROLLER_H
#define RMACCOUNTDETAILSVIEWCONTROLLER_H

@class ACUIViewController, ACAccount;



@interface RMAccountDetailsViewController : ACUIViewController

@property (retain) ACAccount *account; // ivar: _account


-(id)_specifiersForAccount;
-(id)accountDescription:(id)arg0 ;
-(id)accountEmail:(id)arg0 ;
-(id)specifiers;
-(void)_processUserInfoDictionary;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif