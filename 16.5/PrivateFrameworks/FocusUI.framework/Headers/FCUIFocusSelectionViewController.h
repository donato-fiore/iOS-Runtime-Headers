// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUIFOCUSSELECTIONVIEWCONTROLLER_H
#define FCUIFOCUSSELECTIONVIEWCONTROLLER_H

@class UIViewController, MTMaterialView, NSString, FCActivityManager;
@protocol FCActivityManagerObserving, UIScrollViewDelegate, FCUIFocusSelectionViewControllerDelegate;


#import "FCUIActivityListView.h"
#import "FCUIActivityControl.h"

@interface FCUIFocusSelectionViewController : UIViewController <FCActivityManagerObserving, UIScrollViewDelegate>

 {
    MTMaterialView *_backgroundMaterialView;
    FCUIActivityListView *_activityListView;
    NSString *_subtitle;
}


@property (retain, nonatomic, getter=_activityManager, setter=_setActivityManager:) FCActivityManager *activityManager; // ivar: _activityManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCUIFocusSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *selectedActivityIdentifier; // ivar: _selectedActivityIdentifier
@property (retain, nonatomic) FCUIActivityControl *selectedControl; // ivar: _selectedControl
@property (readonly) Class superclass;


+(id)selectionControllerWithSelectedActivityIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(id)_activityControlForActivity:(id)arg0 ;
-(id)initWithSelectedActivityIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)_configureActivityListView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif