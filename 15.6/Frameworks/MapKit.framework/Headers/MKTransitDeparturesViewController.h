// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITDEPARTURESVIEWCONTROLLER_H
#define MKTRANSITDEPARTURESVIEWCONTROLLER_H

@class MKTableViewController, NSString;
@protocol MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKTransitDepaturesViewControllerDelegate;


#import "MKTransitDeparturesDataSource.h"
#import "MKMapItem.h"

@interface MKTransitDeparturesViewController : MKTableViewController <MKTransitDeparturesDataSourceHosting, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate>

 {
    BOOL _allowTransitLineSelection;
    CGRect _lastMaxWidthBounds;
    BOOL _showNewUI;
}


@property (readonly, nonatomic) MKTransitDeparturesDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKTransitDepaturesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInSiri; // ivar: _isInSiri
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_newStationCardUIEnabled;
-(BOOL)transitDeparturesDataSource:(id)arg0 canSelectDepartureSequence:(id)arg1 transitStationMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(CGFloat)_trailingSeparatorInsetForNewUI;
-(CGFloat)defaultLeadingSeparatorInset;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 allowTransitLineSelection:(BOOL)arg1 ;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg0 ;
-(id)traitsForTransitDeparturesDataSource:(id)arg0 ;
-(int)currentTransitCategory;
-(struct UIEdgeInsets )separatorInsetsForTransitDeparturesDataSource:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)transitDeparturesDataSource:(id)arg0 didSelectConnectionInformation:(id)arg1 ;
-(void)transitDeparturesDataSource:(id)arg0 didSelectDepartureSequence:(id)arg1 transitStationMapItem:(id)arg2 transitLine:(id)arg3 fromCell:(id)arg4 ;
-(void)transitDeparturesDataSource:(id)arg0 didSelectTransitLine:(id)arg1 fromCell:(id)arg2 ;
-(void)transitDeparturesDataSource:(id)arg0 showIncidents:(id)arg1 ;
-(void)transitDeparturesDataSourceDidReload:(id)arg0 ;
-(void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif