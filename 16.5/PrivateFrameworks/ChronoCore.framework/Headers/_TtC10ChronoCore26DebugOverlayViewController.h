// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10CHRONOCORE26DEBUGOVERLAYVIEWCONTROLLER_H
#define _TTC10CHRONOCORE26DEBUGOVERLAYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC10ChronoCore26DebugOverlayViewController : UIViewController {
    ? debugView;
    ? debugText;
    ? animationsPaused;
    ? isSnapshotting;
}




-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_didExitAlwaysOn;
-(void)_willEnterAlwaysOn;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif