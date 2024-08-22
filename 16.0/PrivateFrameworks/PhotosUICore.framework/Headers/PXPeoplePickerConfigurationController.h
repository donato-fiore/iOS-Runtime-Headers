// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPICKERCONFIGURATIONCONTROLLER_H
#define PXPEOPLEPICKERCONFIGURATIONCONTROLLER_H

@class NSOrderedSet, NSString, NSArray, NSMutableArray, NSMutableOrderedSet, PHPhotoLibrary;
@protocol PXPeoplePickerConfigurationControllerDelegate, PXPeopleFlowViewControllerActionDelegate, PXPeoplePickerViewControllerActionHandler, PXPeoplePickerConfigurationControllerHandler;

#import <Foundation/Foundation.h>

#import "PXPeopleBootstrapContext.h"
#import "PXPeoplePickerViewController.h"
#import "PXSelectionCoordinator.h"

@interface PXPeoplePickerConfigurationController : NSObject <PXPeoplePickerConfigurationControllerDelegate, PXPeopleFlowViewControllerActionDelegate, PXPeoplePickerViewControllerActionHandler>



@property (readonly, nonatomic) NSOrderedSet *addedObjectIDs;
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, weak, nonatomic) NSObject<PXPeoplePickerConfigurationControllerHandler> *configControllerHandler; // ivar: _configControllerHandler
@property (retain, nonatomic) PXPeopleBootstrapContext *context; // ivar: _context
@property (nonatomic) NSInteger currentPeopleConfigIndex; // ivar: _currentPeopleConfigIndex
@property (nonatomic) NSInteger currentViewControllerIndex; // ivar: _currentViewControllerIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) NSMutableArray *mutableAddedLocalIdentifiers; // ivar: _mutableAddedLocalIdentifiers
@property (readonly, nonatomic) NSMutableOrderedSet *mutableAddedObjectIDs; // ivar: _mutableAddedObjectIDs
@property (readonly, nonatomic) NSArray *peopleConfigurations; // ivar: _peopleConfigurations
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PXPeoplePickerViewController *pickerViewController; // ivar: _pickerViewController
@property (copy, nonatomic) NSArray *preselectedIdentifiers; // ivar: _preselectedIdentifiers
@property (retain, nonatomic) PXSelectionCoordinator *selectionCoordinator; // ivar: _selectionCoordinator
@property (nonatomic) BOOL shouldActLikeSingleSelectPicker; // ivar: _shouldActLikeSingleSelectPicker
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *viewControllers; // ivar: _viewControllers


+(id)new;
-(id)currentViewController;
-(id)incrementViewControllersForPerson:(id)arg0 ;
-(id)init;
-(id)initWithPeopleConfigurations:(id)arg0 configControllerHandler:(id)arg1 photoLibrary:(id)arg2 ;
-(void)decrementViewControllers;
-(void)didAdvanceWithSender:(id)arg0 ;
-(void)peoplePicker:(id)arg0 didTapItem:(id)arg1 ;
-(void)requestAdvanceToNextInFlow;
-(void)requestCancel;
-(void)requestDone;
-(void)setAdvanceButtonEnabled:(BOOL)arg0 ;
-(void)viewControllerWillBePopped:(id)arg0 ;


@end


#endif