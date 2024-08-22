// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORDPRESSLOGINVIEWCONTROLLER_H
#define WFWORDPRESSLOGINVIEWCONTROLLER_H

@class UITextField;


#import "WFPasswordAccountLoginViewController.h"

@interface WFWordPressLoginViewController : WFPasswordAccountLoginViewController

@property (readonly, weak, nonatomic) UITextField *blogField; // ivar: _blogField


-(BOOL)canAttemptLogin;
-(id)initWithAccountClass:(Class)arg0 ;
-(id)loginURL;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)configureTextField:(id)arg0 forKey:(id)arg1 ;
-(void)loginWithUsername:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif