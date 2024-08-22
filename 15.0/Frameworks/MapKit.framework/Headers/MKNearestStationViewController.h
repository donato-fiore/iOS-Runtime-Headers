// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKNEARESTSTATIONVIEWCONTROLLER_H
#define MKNEARESTSTATIONVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol MKStackingViewControllerPreferredSizeUse, MKNearestStationViewControllerDelegate;


#import "MKMapItem.h"

@interface MKNearestStationViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse>

 {
    NSString *_lineName;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKNearestStationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *nearestStation; // ivar: _nearestStation
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithLineName:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)transitionToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif