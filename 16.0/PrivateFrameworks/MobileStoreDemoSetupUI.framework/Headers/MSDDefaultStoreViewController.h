// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDDEFAULTSTOREVIEWCONTROLLER_H
#define MSDDEFAULTSTOREVIEWCONTROLLER_H

@class UIViewController, OBWelcomeController;



@interface MSDDefaultStoreViewController : UIViewController

@property (retain, nonatomic) OBWelcomeController *contentViewController; // ivar: _contentViewController


-(id)init;
-(void)_completeSetupTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif