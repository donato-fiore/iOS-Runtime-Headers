// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDATRIALFIBRILLATIONEVENTMETADATAVIEWCONTROLLER_H
#define WDATRIALFIBRILLATIONEVENTMETADATAVIEWCONTROLLER_H

@class HKTableViewController, HKCategorySample, NSMutableArray;
@protocol HKHeartbeatSequenceListMetadataSectionDelegate, HKDataMetadataViewControllerDelegate;



@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController <HKHeartbeatSequenceListMetadataSectionDelegate>



@property (weak, nonatomic) NSObject<HKDataMetadataViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HKCategorySample *event; // ivar: _event
@property (nonatomic) BOOL firstViewDidLayoutSubviews; // ivar: _firstViewDidLayoutSubviews
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections


-(BOOL)_addSectionIfNonNull:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_atrialFibrillationEducationContainerView;
-(id)_shortVersionNumberFromString:(id)arg0 ;
-(id)initWithEvent:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_loadSections;
-(void)_reloadAtrialFibrillationEducationTableHeaderView;
-(void)heartbeatSequecesListQueryComplete:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif