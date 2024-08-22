// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIASYSTEMEDITORGRIDVIEWCONTROLLER_H
#define HUMEDIASYSTEMEDITORGRIDVIEWCONTROLLER_H

@class HFMediaSystemBuilder;
@protocol HUMediaSystemEditorGridViewControllerDelegate;


#import "HUSelectableServiceGridViewController.h"
#import "HUMediaSystemEditorGridItemManager.h"

@interface HUMediaSystemEditorGridViewController : HUSelectableServiceGridViewController

@property (weak, nonatomic) NSObject<HUMediaSystemEditorGridViewControllerDelegate> *delegate;
@property (retain, nonatomic) HUMediaSystemEditorGridItemManager *itemManager;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // ivar: _mediaSystemBuilder


-(BOOL)_wantsToggleButtonForSection:(NSUInteger)arg0 ;
-(id)_accessoryVendorItemForItem:(id)arg0 ;
-(id)initWithMediaSystemBuilder:(id)arg0 ;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_addItemToMediaSystem:(id)arg0 ;
-(void)_resetBuilder;
-(void)addItemToSelection:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didDeselectItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif