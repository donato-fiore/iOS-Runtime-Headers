// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKINCIDENTSVIEWCONTROLLER_H
#define MKINCIDENTSVIEWCONTROLLER_H

@class MKTableViewController, NSArray, GEOComposedRouteAdvisory, NSString;



@interface MKIncidentsViewController : MKTableViewController {
    NSArray *_sections;
}


@property (copy, nonatomic) GEOComposedRouteAdvisory *advisory; // ivar: _advisory
@property (copy, nonatomic) NSArray *advisoryCards; // ivar: _advisoryCards
@property (readonly, nonatomic) NSString *incidentsTitle; // ivar: _incidentsTitle
@property (copy, nonatomic) NSArray *restrictionIncidents; // ivar: _restrictionIncidents
@property (copy, nonatomic) NSArray *transitIncidents; // ivar: _transitIncidents


-(BOOL)_canShowWhileLocked;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)_sectionForSectionIndex:(NSInteger)arg0 ;
-(NSInteger)_transitIncidentIndexForRow:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_incidentsCount;
-(id)_advisoryItemCellForIndex:(NSInteger)arg0 ;
-(id)_cellForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)_noticeCellForIndex:(NSInteger)arg0 ;
-(id)_restrictionCellForIndex:(NSInteger)arg0 ;
-(id)_transitCellForIndex:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)detailCellInSection:(NSInteger)arg0 ;
-(id)extendedDetailCell;
-(id)init;
-(id)initWithRestrictionIncidents:(id)arg0 ;
-(id)initWithTransitIncidents:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_compileSections;
-(void)_localeDidChange;
-(void)_updateTitle;
-(void)dealloc;
-(void)infoCardThemeChanged;
-(void)reloadDataSource;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif