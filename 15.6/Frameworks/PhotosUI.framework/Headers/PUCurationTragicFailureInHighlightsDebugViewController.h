// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCURATIONTRAGICFAILUREINHIGHLIGHTSDEBUGVIEWCONTROLLER_H
#define PUCURATIONTRAGICFAILUREINHIGHLIGHTSDEBUGVIEWCONTROLLER_H

@class UITableViewController, PHFetchResult, NSConditionLock, NSMutableArray;


#import "PUCurationTragicFailureInHighlightsGridDebugViewController.h"

@interface PUCurationTragicFailureInHighlightsDebugViewController : UITableViewController {
    PHFetchResult *_highlights;
    PUCurationTragicFailureInHighlightsGridDebugViewController *_assetCollectionViewController;
    NSUInteger _currentHighlightIndex;
    NSConditionLock *_backgroundActivityLock;
    NSMutableArray *_highlightDatas;
}




-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fetchUtilityAssetInformation;
-(void)dealloc;
-(void)goToNextHighlight:(id)arg0 ;
-(void)goToPreviousHighlight:(id)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif