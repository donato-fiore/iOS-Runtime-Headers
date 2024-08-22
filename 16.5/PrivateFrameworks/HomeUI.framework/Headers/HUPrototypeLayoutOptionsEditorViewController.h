// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPROTOTYPELAYOUTOPTIONSEDITORVIEWCONTROLLER_H
#define HUPROTOTYPELAYOUTOPTIONSEDITORVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray;
@protocol HUSliderValueTableViewCellDelegate, HUPrototypeLayoutOptionsEditorViewControllerDelegate;


#import "HUGridLayoutOptions.h"

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUPrototypeLayoutOptionsEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) NSArray *layoutOptionsKeys; // ivar: _layoutOptionsKeys
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_viewSizeSubclassDescription;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_done:(id)arg0 ;
-(void)sliderValueTableViewCell:(id)arg0 didChangeValue:(CGFloat)arg1 ;
-(void)viewDidLoad;


@end


#endif