// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYPODCATEGORYFOLDERCONTROLLER_H
#define SBHLIBRARYPODCATEGORYFOLDERCONTROLLER_H



#import "SBHLibraryPodFolderController.h"

@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController



+(Class)_contentViewClass;
+(id)iconLocation;
-(id)contentScrollView;
-(id)currentIconListView;
-(void)_logCategoryVisibilityChangedTo:(BOOL)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif