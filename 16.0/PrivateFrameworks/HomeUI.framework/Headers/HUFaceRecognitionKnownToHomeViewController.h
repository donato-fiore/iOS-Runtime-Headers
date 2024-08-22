// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFACERECOGNITIONKNOWNTOHOMEVIEWCONTROLLER_H
#define HUFACERECOGNITIONKNOWNTOHOMEVIEWCONTROLLER_H

@class NSString, HFItemProvider, HFItemManager;
@protocol HUFaceRecognitionPersonEditorViewControllerDelegate;


#import "HUItemTableViewController.h"

@interface HUFaceRecognitionKnownToHomeViewController : HUItemTableViewController <HUFaceRecognitionPersonEditorViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItemProvider *homePersonItemProvider; // ivar: _homePersonItemProvider
@property (retain, nonatomic) HFItemManager *knownPersonItemManager; // ivar: _knownPersonItemManager
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg0 personManager:(id)arg1 animated:(BOOL)arg2 ;
-(void)personEditorViewController:(id)arg0 didUpdateItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif