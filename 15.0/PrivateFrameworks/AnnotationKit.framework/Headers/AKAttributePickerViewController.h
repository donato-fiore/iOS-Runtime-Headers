// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKATTRIBUTEPICKERVIEWCONTROLLER_H
#define AKATTRIBUTEPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, NSSet, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, AKAttributePickerViewControllerDelegate;


#import "AKController.h"

@interface AKAttributePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (weak) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAttributePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSArray *rowViews; // ivar: _rowViews
@property (retain, nonatomic) NSSet *selectedAnnotations; // ivar: _selectedAnnotations
@property (readonly) Class superclass;
@property (retain) UITableView *tableView; // ivar: _tableView


-(BOOL)_canShowWhileLocked;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithController:(id)arg0 selectedAnnotations:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_attributeStyleChanged:(id)arg0 ;
-(void)_lineAttributesChanged:(id)arg0 ;
-(void)_updatePreferredContentSize;
-(void)revalidateItems;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateLayoutForSelectedAnnotations;
-(void)viewDidLoad;


@end


#endif