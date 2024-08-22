// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUIBUNDLECONTROLLER_H
#define MCUIBUNDLECONTROLLER_H

@class PSBundleController, PSListController, PSSpecifier;
@protocol MCUIDataManagerProtocol, OS_dispatch_queue;



@interface MCUIBundleController : PSBundleController

@property (retain, nonatomic) NSObject<MCUIDataManagerProtocol> *dataManager; // ivar: _dataManager
@property (weak, nonatomic) PSListController *parentController; // ivar: _parentController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier


+(id)sharedInstance;
-(BOOL)_swizzlingFromSpecifier:(id)arg0 ;
-(BOOL)_updateTopLevelSpecifier;
-(id)_detailsFromSpecifier:(id)arg0 ;
-(id)_initWithDataManager:(id)arg0 ;
-(id)initWithParentListController:(id)arg0 dataManager:(id)arg1 ;
-(id)initWithParentListController:(id)arg0 properties:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg0 ;
-(void)_mcuiUpdated;
-(void)_reloadTopLevelSpecifier;
-(void)_sharedInitWithDataManager:(id)arg0 ;
-(void)dealloc;
-(void)unload;


@end


#endif