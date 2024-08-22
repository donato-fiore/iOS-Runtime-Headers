// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEINFOVIEWCONTROLLER_H
#define MKPLACEINFOVIEWCONTROLLER_H

@class NSMutableArray, UILongPressGestureRecognizer, NSString;
@protocol MKOfflineModeViewController, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKPlaceActionManagerProtocol, _MKPlaceItem;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionRowView.h"
#import "MKMapItem.h"

@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKOfflineModeViewController, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

 {
    NSMutableArray *_rows;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MKPlaceSectionRowView *_selectedRow;
}


@property (weak, nonatomic) NSObject<MKPlaceActionManagerProtocol> *actionDelegate; // ivar: _actionDelegate
@property (nonatomic) BOOL bottomHairlineHidden; // ivar: _bottomHairlineHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) BOOL offlineMode; // ivar: _offlineMode
@property (retain, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (nonatomic) NSUInteger placecardOptions; // ivar: _placecardOptions
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldShowSuggestAnEdit;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldShowDetails;
-(NSUInteger)actionTypeFromRowType:(NSUInteger)arg0 ;
-(id)_addRowForType:(NSUInteger)arg0 withValue:(id)arg1 toViews:(id)arg2 ;
-(id)_createViewForInfoRow:(NSUInteger)arg0 ;
-(id)contact;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithPlaceItem:(id)arg0 ;
-(void)_addContactRow:(id)arg0 ofType:(NSUInteger)arg1 toViews:(id)arg2 defaultTitle:(id)arg3 ;
-(void)_configureRow:(id)arg0 ofType:(NSUInteger)arg1 withValue:(id)arg2 ;
-(void)_launchMapsDirectionsWithSource:(id)arg0 destination:(id)arg1 directionsMode:(id)arg2 ;
-(void)_menuDismissed:(id)arg0 ;
-(void)_rowLongPressed:(id)arg0 ;
-(void)_shareAddress:(id)arg0 fromView:(id)arg1 ;
-(void)_updateViewsAnimated:(BOOL)arg0 ;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif