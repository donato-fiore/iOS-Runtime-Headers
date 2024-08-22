// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10CHRONOCORE26DEBUGOVERLAYVIEWCONTROLLER_H
#define _TTC10CHRONOCORE26DEBUGOVERLAYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC10ChronoCore26DebugOverlayViewController : UIViewController {
    ? debugView;
    ? debugText;
    ? animationsDisabled;
    ? isSnapshotting;
}




-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif