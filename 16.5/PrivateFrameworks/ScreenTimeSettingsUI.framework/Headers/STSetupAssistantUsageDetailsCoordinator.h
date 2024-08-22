// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSETUPASSISTANTUSAGEDETAILSCOORDINATOR_H
#define STSETUPASSISTANTUSAGEDETAILSCOORDINATOR_H

@class NSString, NSArray;
@protocol STUsageDetailsViewModelCoordinator;

#import <Foundation/Foundation.h>

#import "STUsageDetailsViewModel.h"

@interface STSetupAssistantUsageDetailsCoordinator : NSObject <STUsageDetailsViewModelCoordinator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly) NSUInteger hash;
@property (readonly, getter=isRefreshing) BOOL refreshing; // ivar: _refreshing
@property (copy, nonatomic) NSString *selectedDeviceIdentifier; // ivar: _selectedDeviceIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) STUsageDetailsViewModel *viewModel; // ivar: _viewModel


-(id)_introUsageItemsWithStartDate:(id)arg0 ;
-(id)appConfigByIdentifier;
-(id)categoryConfigByIdentifier;
-(id)init;
-(void)refreshUsageData;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;


@end


#endif