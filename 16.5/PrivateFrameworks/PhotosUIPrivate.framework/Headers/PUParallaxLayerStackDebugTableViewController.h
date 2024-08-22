// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKDEBUGTABLEVIEWCONTROLLER_H
#define PUPARALLAXLAYERSTACKDEBUGTABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "PUParallaxLayerStackView.h"

@interface PUParallaxLayerStackDebugTableViewController : UITableViewController

@property (retain, nonatomic) PUParallaxLayerStackView *layerStackView; // ivar: _layerStackView


-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)labelForLayer:(id)arg0 ;
-(id)layerForIndexPath:(id)arg0 ;
-(id)layersSortedByViewDepth;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(void)requestNewZPositionForCellAtIndexPath:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif