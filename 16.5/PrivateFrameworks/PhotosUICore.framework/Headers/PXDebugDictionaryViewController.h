// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDEBUGDICTIONARYVIEWCONTROLLER_H
#define PXDEBUGDICTIONARYVIEWCONTROLLER_H

@class UIViewController, NSString, NSDictionary, NSArray, UISegmentedControl, UITableView;
@protocol UITableViewDataSource;



@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *debugDictionary; // ivar: _debugDictionary
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionTitles; // ivar: _sectionTitles
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tableContent; // ivar: _tableContent
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_flattenDictionary:(id)arg0 ;
-(id)_sanitizedTextForTitle:(id)arg0 value:(id)arg1 ;
-(id)initWithDebugDictionary:(id)arg0 ;
-(id)segmentedTitles;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_closeAction:(id)arg0 ;
-(void)_switchLogsAction:(id)arg0 ;
-(void)_updateWithSegmentedTitle:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif