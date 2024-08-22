// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10PODCASTSUI10MODALSHEET_H
#define _TTC10PODCASTSUI10MODALSHEET_H

@class UIViewController;



@interface _TtC10PodcastsUI10ModalSheet : UIViewController {
    ? standardEdgeSpacing;
    ? standardControlSpacing;
    ? actions;
    ? buttonToAction;
    ? $__lazy_storage_$_marginGuide;
}




+(id)presentableViewController:(id)arg0 height:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleButton:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif