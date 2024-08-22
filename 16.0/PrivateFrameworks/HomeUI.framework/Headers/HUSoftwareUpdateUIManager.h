// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSOFTWAREUPDATEUIMANAGER_H
#define HUSOFTWAREUPDATEUIMANAGER_H

@class NSString, NSMapTable;
@protocol HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver;

#import <Foundation/Foundation.h>


@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *homeBackgroundCheckMapTable; // ivar: _homeBackgroundCheckMapTable
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg0 home:(id)arg1 ;
-(BOOL)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfAccessoriesWithAvailableUpdates:(id)arg0 ;
-(NSInteger)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg0 ;
-(id)_fetchAvailableUpdatesForAccessories:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg0 inHome:(id)arg1 ;
-(id)fetchAvailableUpdatesForHome:(id)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)presentLicensesIfNeededForSoftwareUpdate:(id)arg0 presentationDelegate:(id)arg1 ;
-(id)startUpdateForAccessory:(id)arg0 presentationDelegate:(id)arg1 ;
-(id)startUpdatesForAccessories:(id)arg0 presentationDelegate:(id)arg1 ;
-(id)startUpdatesForAllAccessoriesInHome:(id)arg0 presentationDelegate:(id)arg1 ;
-(void)executionEnvironmentDidEnterBackground:(id)arg0 ;
-(void)startSilentBackgroundCheckForHome:(id)arg0 ;


@end


#endif