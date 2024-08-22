// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTIMEEVENTOFFSETEDITORVIEWCONTROLLER_H
#define HUTIMEEVENTOFFSETEDITORVIEWCONTROLLER_H

@class NSDateComponents, NSString;
@protocol HUSignificantEventOffsetPickerDelegate, HUTimeEventOffsetEditorDelegate;


#import "HUItemTableViewController.h"

@interface HUTimeEventOffsetEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate>



@property (readonly, nonatomic) NSDateComponents *currentOffset; // ivar: _currentOffset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTimeEventOffsetEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDateComponents *selectedOffset; // ivar: _selectedOffset
@property (readonly, nonatomic) NSString *significantEvent; // ivar: _significantEvent
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithSignificantEvent:(id)arg0 currentOffset:(id)arg1 delegate:(id)arg2 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)significantEventOffsetPicker:(id)arg0 didSelectOffset:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif