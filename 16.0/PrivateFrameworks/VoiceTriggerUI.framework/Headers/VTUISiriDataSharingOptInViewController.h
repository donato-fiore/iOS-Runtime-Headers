// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUISIRIDATASHARINGOPTINVIEWCONTROLLER_H
#define VTUISIRIDATASHARINGOPTINVIEWCONTROLLER_H

@class OBWelcomeController;
@protocol VTUISiriDataSharingOptInViewControllerDelegate;



@interface VTUISiriDataSharingOptInViewController : OBWelcomeController

@property (weak, nonatomic) NSObject<VTUISiriDataSharingOptInViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(id)initWithViewStyle:(NSInteger)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif