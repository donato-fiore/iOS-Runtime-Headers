// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECARDACTIONSROWVIEWCONTROLLER_H
#define MKPLACECARDACTIONSROWVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol MKModuleViewControllerProtocol, _MKPlaceViewControllerDelegate;


#import "MKPlaceSectionItemView.h"
#import "MKPlaceholderGridCache.h"
#import "MKPlaceActionManager.h"
#import "MKPlaceCardActionsRowView.h"

@interface MKPlaceCardActionsRowViewController : UIViewController <MKModuleViewControllerProtocol>

 {
    MKPlaceSectionItemView *_hairlineView;
    MKPlaceholderGridCache *_placeholderGridCache;
}


@property (readonly, nonatomic) NSArray *actionButtons;
@property (weak, nonatomic) MKPlaceActionManager *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) MKPlaceCardActionsRowView *actionsRowView; // ivar: _actionsRowView
@property (nonatomic) Class buttonBackgroundViewClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)infoCardThemeChanged;
-(void)loadView;
-(void)updateActionsRowView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif