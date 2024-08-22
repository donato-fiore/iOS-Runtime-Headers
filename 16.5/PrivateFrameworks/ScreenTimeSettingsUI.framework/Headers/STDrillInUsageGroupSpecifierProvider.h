// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDRILLINUSAGEGROUPSPECIFIERPROVIDER_H
#define STDRILLINUSAGEGROUPSPECIFIERPROVIDER_H

@protocol STRootViewModelCoordinator;


#import "STGroupSpecifierProvider.h"
#import "STUsageItem.h"

@interface STDrillInUsageGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) NSUInteger numberOfNotifications; // ivar: _numberOfNotifications
@property (readonly, nonatomic) STUsageItem *usageItem; // ivar: _usageItem


-(id)dailyAverage:(id)arg0 ;
-(id)initWithUsageItem:(id)arg0 coordinator:(id)arg1 ;
-(id)notifications:(id)arg0 ;
-(id)selectedUsageReport:(id)arg0 ;
-(id)weeklyPickupTotal:(id)arg0 ;


@end


#endif