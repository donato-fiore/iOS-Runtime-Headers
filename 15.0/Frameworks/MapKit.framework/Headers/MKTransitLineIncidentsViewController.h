// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITLINEINCIDENTSVIEWCONTROLLER_H
#define MKTRANSITLINEINCIDENTSVIEWCONTROLLER_H

@class MKTableViewController, NSString, NSDate;
@protocol MKTransitItemReferenceDateUpdaterDelegate, MKStackingViewControllerPreferredSizeUse, MKTransitLineIncidentsViewControllerDelegate, GEOTransitLineItem;


#import "MKTransitItemIncidentsController.h"
#import "MKTransitItemReferenceDateUpdater.h"

@interface MKTransitLineIncidentsViewController : MKTableViewController <MKTransitItemReferenceDateUpdaterDelegate, MKStackingViewControllerPreferredSizeUse>

 {
    MKTransitItemIncidentsController *_incidentsController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MKTransitLineIncidentsViewControllerDelegate> *incidentsDelegate; // ivar: _incidentsDelegate
@property (readonly, nonatomic) MKTransitItemReferenceDateUpdater *itemUpdater; // ivar: _itemUpdater
@property (readonly, nonatomic) NSObject<GEOTransitLineItem> *lineItem; // ivar: _lineItem
@property (readonly, copy, nonatomic) NSDate *referenceDate; // ivar: _referenceDate
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_incidentCellForRow:(NSInteger)arg0 ;
-(id)_incidents;
-(id)initWithLineItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_dismissTransitIncidents;
-(void)_showIncidentDetails;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)transitItemReferenceDateUpdater:(id)arg0 didUpdateToReferenceDate:(id)arg1 ;
-(void)transitUIReferenceTimeUpdated:(id)arg0 ;
-(void)updateTransitLineItemIfNeeded;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif