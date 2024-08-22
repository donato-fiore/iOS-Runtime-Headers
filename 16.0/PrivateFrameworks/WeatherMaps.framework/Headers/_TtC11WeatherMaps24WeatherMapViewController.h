// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS24WEATHERMAPVIEWCONTROLLER_H
#define _TTC11WEATHERMAPS24WEATHERMAPVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11WeatherMaps24WeatherMapViewController : UIViewController {
    ? store;
    ? resolver;
    ? snapshotViewController;
    ? interactiveViewController;
    ? locationPickerViewController;
    ? locationPopoverViewController;
    ? previewViewController;
    ? mapLocationAccessibilityModelManager;
    ? locationActionHandler;
    ? canAddLocationHandler;
    ? canViewLocationHandler;
    ? activeTraitCollection;
    ? storeObserver;
    ? lastViewModel;
    ? viewModelToUpdate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif