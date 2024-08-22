// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFCONFIGVIEWCONTROLLER_H
#define PBFCONFIGVIEWCONTROLLER_H

@class UITableViewController, PRSwitcherConfiguration, NSArray, NSString;
@protocol PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate;


#import "PBFPosterExtensionDataStoreXPCServiceGlue.h"

@interface PBFConfigViewController : UITableViewController <PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate>

 {
    PBFPosterExtensionDataStoreXPCServiceGlue *_glue;
    PRSwitcherConfiguration *_switcherConfiguration;
    NSArray *_configurations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_posterConfigurationAtIndexPath:(id)arg0 ;
-(id)_posterPathAtIndexPath:(id)arg0 ;
-(id)_previewForPathAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(void)_presentPath:(id)arg0 mode:(NSInteger)arg1 ;
-(void)_reloadData;
-(void)_selectConfiguration:(id)arg0 ;
-(void)_toggleEdit:(id)arg0 ;
-(void)_updateEditing:(BOOL)arg0 ;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateSelectedConfiguration:(id)arg1 associatedConfiguration:(id)arg2 ;
-(void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif