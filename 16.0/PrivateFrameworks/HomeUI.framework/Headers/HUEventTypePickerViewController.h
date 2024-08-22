// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEVENTTYPEPICKERVIEWCONTROLLER_H
#define HUEVENTTYPEPICKERVIEWCONTROLLER_H

@class NSString;
@protocol HUEventUIFlowViewController;


#import "HUItemTableViewController.h"
#import "HUEventUIFlow.h"
#import "HUEventTypePickerItemManager.h"

@interface HUEventTypePickerViewController : HUItemTableViewController <HUEventUIFlowViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUEventTypePickerItemManager *itemManager;
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (readonly) Class superclass;


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithFlow:(id)arg0 stepIdentifier:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif