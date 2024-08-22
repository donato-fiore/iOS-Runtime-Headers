// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBJECTMANIPULATIONVIEWCONTROLLER_H
#define OBJECTMANIPULATIONVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, NSArray, NSString, NSMutableDictionary, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, ObjectManipulationDelegate;



@interface ObjectManipulationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSArray *customizationGroups; // ivar: _customizationGroups
@property (retain, nonatomic) NSArray *customizations; // ivar: _customizations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *itemPreviewViewController; // ivar: _itemPreviewViewController
@property (weak, nonatomic) NSObject<ObjectManipulationDelegate> *refreshDelegate; // ivar: _refreshDelegate
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders; // ivar: _sectionHeaders
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCustomizationGroups:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_reloadCustomizations;
-(void)didToggleSwitch:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif