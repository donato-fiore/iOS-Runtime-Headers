// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTACTIONCOORDINATOR_H
#define PUIMPORTACTIONCOORDINATOR_H

@class NSByteCountFormatter, PLCacheDeleteClient, UIMenu, UIAction, PXImportController, NSString, NSNumberFormatter, UIViewController;
@protocol PUImportActionCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface PUImportActionCoordinator : NSObject

@property (retain, nonatomic) NSByteCountFormatter *byteCountFormatter; // ivar: _byteCountFormatter
@property (retain, nonatomic) PLCacheDeleteClient *cacheDeleteClient; // ivar: _cacheDeleteClient
@property (weak, nonatomic) NSObject<PUImportActionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIMenu *importActionsMenu; // ivar: _importActionsMenu
@property (retain, nonatomic) UIAction *importAllAction; // ivar: _importAllAction
@property (retain, nonatomic) PXImportController *importController; // ivar: _importController
@property (retain, nonatomic) NSString *loggingPrefix; // ivar: _loggingPrefix
@property (readonly, nonatomic) NSInteger loggingSource; // ivar: _loggingSource
@property (retain, nonatomic) NSNumberFormatter *percentageNumberFormatter; // ivar: _percentageNumberFormatter
@property (nonatomic) BOOL ppt_alwaysImportDuplicatesNoPrompt; // ivar: _ppt_alwaysImportDuplicatesNoPrompt
@property (nonatomic) BOOL presentsAdditionalDeleteAllConfirmation; // ivar: _presentsAdditionalDeleteAllConfirmation
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


+(NSInteger)importBehaviorForBatteryState:(NSInteger)arg0 batteryLevel:(float)arg1 ;
+(float)lowBatteryLevelThresholdForDevice;
+(id)deleteAllConfirmationMessageForItems:(id)arg0 importSource:(id)arg1 ;
+(void)retrieveBatteryState:(*NSInteger)arg0 batteryLevel:(*float)arg1 ;
-(BOOL)someItemsButNotAllAreSelected;
-(id)actionMenuForImportButton;
-(id)initWithViewController:(id)arg0 importController:(id)arg1 loggingSource:(NSInteger)arg2 ;
-(void)_commitImportingItems:(id)arg0 ;
-(void)_deleteItems:(id)arg0 ;
-(void)_handleDiskAvailabilityRequestForItems:(id)arg0 withSuccess:(BOOL)arg1 numBytesPurged:(NSInteger)arg2 additionalBytesRequired:(NSInteger)arg3 error:(id)arg4 ;
-(void)_importItems:(id)arg0 allowDuplicates:(BOOL)arg1 ;
-(void)_presentInsufficientDiskSpaceAlertForItems:(id)arg0 ;
-(void)checkBatteryLevelWithCompletion:(id)arg0 ;
-(void)configureImportActionsForBarButtonItem:(id)arg0 ;
-(void)deleteItemsFromBarButtonItem:(id)arg0 ;
-(void)deleteItemsFromBarButtonItem:(id)arg0 withOneUpHintItems:(id)arg1 ;
-(void)deleteItemsWithoutConfirmation:(id)arg0 ;
-(void)importAllFromBarButtonItem;
-(void)notifyDelegateOfImportCancellation;
-(void)ppt_beginImportFromBarButtonItem;
-(void)stopImport;


@end


#endif