// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIAPPSANDCATEGORIESDATAUSAGESUBGROUP_H
#define PSUIAPPSANDCATEGORIESDATAUSAGESUBGROUP_H

@class PSDataUsageStatisticsCache;
@protocol PSAppCellularUsageSpecifierDelegate;

#import <Foundation/Foundation.h>


@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject

@property (weak, nonatomic) NSObject<PSAppCellularUsageSpecifierDelegate> *specifierDelegate; // ivar: _specifierDelegate
@property (retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // ivar: _statisticsCache


-(id)getLogger;
-(id)initWithPolicySpecifierDelegate:(id)arg0 statisticsCache:(id)arg1 ;
-(id)specifiers;


@end


#endif