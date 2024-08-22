// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSERVICEGROUPEDITORGRIDVIEWCONTROLLER_H
#define HUSERVICEGROUPEDITORGRIDVIEWCONTROLLER_H

@class HFServiceGroupBuilder;
@protocol HUServiceGroupEditorGridViewControllerDelegate;


#import "HUSelectableServiceGridViewController.h"
#import "HUServiceGroupEditorGridItemManager.h"

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController

@property (weak, nonatomic) NSObject<HUServiceGroupEditorGridViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HUServiceGroupEditorGridItemManager *itemManager;
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder; // ivar: _serviceGroupBuilder


-(id)_serviceVendorItemForItem:(id)arg0 ;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(id)initWithServiceGroupBuilder:(id)arg0 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)didDeselectItem:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif