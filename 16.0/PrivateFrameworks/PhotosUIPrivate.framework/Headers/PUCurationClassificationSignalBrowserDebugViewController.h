// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCURATIONCLASSIFICATIONSIGNALBROWSERDEBUGVIEWCONTROLLER_H
#define PUCURATIONCLASSIFICATIONSIGNALBROWSERDEBUGVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSDictionary;


#import "PUCurationClassificationSignalAssetBrowserDebugViewController.h"

@interface PUCurationClassificationSignalBrowserDebugViewController : UITableViewController {
    NSArray *_sectionNames;
    NSDictionary *_signalIdentifiersBySectionName;
    NSDictionary *_signalInfoBySignalIdentifier;
    NSDictionary *_countsBySignalIdentifier;
    NSDictionary *_signalConfidenceByAssetUUIDBySignalIdentifier;
    NSUInteger _numberOfAssets;
    PUCurationClassificationSignalAssetBrowserDebugViewController *_assetCollectionViewController;
}




-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)signalIdentifiersForSection:(NSInteger)arg0 ;
-(id)signalNameForUnknownSignalIdentifier:(int)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_fetchSignals;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)viewDidLoad;


@end


#endif