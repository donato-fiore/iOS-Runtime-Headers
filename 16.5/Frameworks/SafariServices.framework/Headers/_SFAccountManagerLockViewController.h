// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFACCOUNTMANAGERLOCKVIEWCONTROLLER_H
#define _SFACCOUNTMANAGERLOCKVIEWCONTROLLER_H

@class UIViewController, UILabel, UIImageView, NSString;
@protocol PSStateRestoration;



@interface _SFAccountManagerLockViewController : UIViewController <PSStateRestoration>

 {
    UILabel *_accountManagerLockedLabel;
    UIImageView *_lockImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(void)viewDidLoad;


@end


#endif