// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS22SNAPSHOTVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS22SNAPSHOTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11WeatherMaps22SnapshotViewController : UIViewController {
    ? snapshotConfiguration;
    ? snapshotView;
    ? initialLayoutHappened;
    ? initialTraitCollectionIsAssigned;
    ? willEnterForegroundObserver;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)handleInvertColorsStatusDidChangeWithNotification:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif