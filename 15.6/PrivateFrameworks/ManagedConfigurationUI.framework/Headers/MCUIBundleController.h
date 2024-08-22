// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUIBUNDLECONTROLLER_H
#define MCUIBUNDLECONTROLLER_H

@class PSBundleController, PSListController, PSSpecifier;
@protocol MCUIDataManagerProtocol;



@interface MCUIBundleController : PSBundleController

@property (retain, nonatomic) NSObject<MCUIDataManagerProtocol> *dataManager; // ivar: _dataManager
@property (nonatomic) NSUInteger nanoProfileCount;
@property (weak, nonatomic) PSListController *parentController; // ivar: _parentController
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier


+(BOOL)isRunningInBridge;
+(id)sharedInstance;
-(BOOL)_swizzlingFromSpecifier:(id)arg0 ;
-(BOOL)_updateTopLevelSpecifier;
-(id)_detailsFromSpecifier:(id)arg0 ;
-(id)_initWithDataManager:(id)arg0 ;
-(id)initWithParentListController:(id)arg0 dataManager:(id)arg1 ;
-(id)initWithParentListController:(id)arg0 properties:(id)arg1 ;
-(id)nanoDomainAccessor;
-(id)specifiersWithSpecifier:(id)arg0 ;
-(void)_mcuiUpdated:(id)arg0 ;
-(void)_reloadTopLevelSpecifier;
-(void)dealloc;
-(void)decrementNanoProfileCount;
-(void)incrementNanoProfileCount;
-(void)load;
-(void)unload;


@end


#endif