// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKVALUEADDEDSERVICEAUTOMATICSELECTIONCOORDINATOR_H
#define NPKVALUEADDEDSERVICEAUTOMATICSELECTIONCOORDINATOR_H

@class NSString;
@protocol NPKPassesDataSourceObserver, NPKPassesDataSource, NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface NPKValueAddedServiceAutomaticSelectionCoordinator : NSObject <NPKPassesDataSourceObserver>



@property (weak, nonatomic) NSObject<NPKPassesDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 passesDataSource:(id)arg1 ;
-(void)_handleWalletPreferencesChanged:(id)arg0 ;
-(void)_updateAutomaticSelectionPasses;
-(void)passesDataSource:(id)arg0 didAddPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didRemovePasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didUpdatePasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didUpdateSettingsForPass:(id)arg1 ;
-(void)passesDataSourceDidReloadPasses:(id)arg0 ;
-(void)passesDataSourceDidReorderPasses:(id)arg0 ;


@end


#endif