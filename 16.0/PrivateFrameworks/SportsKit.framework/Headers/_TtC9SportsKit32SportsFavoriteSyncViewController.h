// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SPORTSKIT32SPORTSFAVORITESYNCVIEWCONTROLLER_H
#define _TTC9SPORTSKIT32SPORTSFAVORITESYNCVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SportsKit32SportsFavoriteSyncViewController : UIViewController {
    ? eventHandler;
    ? welcomeController;
    ? imageView;
    ? confirmationButton;
    ? deferButton;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)confirmationAction;
-(void)deferAction;
-(void)viewDidLoad;


@end


#endif