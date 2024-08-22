// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIFAMILYSPECIFIERGENERATOR_H
#define PSUIFAMILYSPECIFIERGENERATOR_H

@class AIDAAccountManager, ACMonitoredAccountStore, AIDAServiceOwnersManager, FATopLevelSettingsSpecifierProvider, NSString, PSListController;
@protocol ACMonitoredAccountStoreDelegateProtocol, AIDAAccountManagerDelegate, AAUISpecifierProviderDelegate, OS_dispatch_queue, PSUIFamilySpecifierGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface PSUIFamilySpecifierGenerator : NSObject <ACMonitoredAccountStoreDelegateProtocol, AIDAAccountManagerDelegate, AAUISpecifierProviderDelegate>



@property (retain, nonatomic) AIDAAccountManager *_accountManager; // ivar: __accountManager
@property (retain, nonatomic) ACMonitoredAccountStore *_accountStore; // ivar: __accountStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue; // ivar: __loadingQueue
@property (retain, nonatomic) AIDAServiceOwnersManager *_serviceOwnersManager; // ivar: __serviceOwnersManager
@property (retain, nonatomic) FATopLevelSettingsSpecifierProvider *_topLevelSettingsSpecifierProvider; // ivar: __topLevelSettingsSpecifierProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSUIFamilySpecifierGeneratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)accountsForAccountManager:(id)arg0 ;
-(id)initWithLoadingQueue:(id)arg0 ;
-(id)specifier;
-(void)_handleFamilyChangeNotification:(id)arg0 ;
-(void)_handleFamilyMarqueeChangeNotification:(id)arg0 ;
-(void)_reloadFamilyStateWithCompletion:(id)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)reloadFamilyStateWithCompletion:(id)arg0 ;
-(void)reloadSpecifiersForProvider:(id)arg0 oldSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg0 didFinishLoadingSpecifier:(id)arg1 ;
-(void)specifierProvider:(id)arg0 showViewController:(id)arg1 ;
-(void)specifierProvider:(id)arg0 willBeginLoadingSpecifier:(id)arg1 ;


@end


#endif