// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCURATIONUTILITYCOMPARISONBROWSERDEBUGVIEWCONTROLLER_H
#define PUCURATIONUTILITYCOMPARISONBROWSERDEBUGVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray;


#import "PUPhotosAlbumViewController.h"

@interface PUCurationUtilityComparisonBrowserDebugViewController : UITableViewController {
    NSMutableArray *_isUtilityButWasnt;
    NSMutableArray *_wasUtilityButIsnt;
    NSMutableArray *_isUtilityAndWas;
    NSMutableArray *_isUtilityForMemoriesButNotUtility;
    PUPhotosAlbumViewController *_assetCollectionViewController;
}




-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fetchUtilityAssetInformation;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)viewDidLoad;


@end


#endif