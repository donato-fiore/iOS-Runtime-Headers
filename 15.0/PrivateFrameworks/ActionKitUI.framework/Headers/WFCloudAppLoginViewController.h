// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLOUDAPPLOGINVIEWCONTROLLER_H
#define WFCLOUDAPPLOGINVIEWCONTROLLER_H



#import "WFPasswordAccountLoginViewController.h"

@interface WFCloudAppLoginViewController : WFPasswordAccountLoginViewController



-(BOOL)usernameIsEmail;
-(id)initWithAccountClass:(Class)arg0 ;
-(id)loginURL;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)loginWithUsername:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif