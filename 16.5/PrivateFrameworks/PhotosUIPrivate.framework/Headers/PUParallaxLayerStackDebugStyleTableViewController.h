// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKDEBUGSTYLETABLEVIEWCONTROLLER_H
#define PUPARALLAXLAYERSTACKDEBUGSTYLETABLEVIEWCONTROLLER_H

@class UITableViewController, NSArray;
@protocol PUParallaxLayerStackDebugStyleTableViewCellDelegate;


#import "PUParallaxLayerStackViewModel.h"
#import "PUParallaxLayerStackViewModelUpdater.h"

@interface PUParallaxLayerStackDebugStyleTableViewController : UITableViewController <PUParallaxLayerStackDebugStyleTableViewCellDelegate>

 {
    NSArray *_cachedAvailableStyles;
}


@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) PUParallaxLayerStackViewModelUpdater *viewModelUpdater; // ivar: _viewModelUpdater


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)availableStyles;
-(id)indexPathForStyle:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cellValueUpdated:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif