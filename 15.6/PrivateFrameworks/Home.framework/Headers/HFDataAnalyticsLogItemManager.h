// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDATAANALYTICSLOGITEMMANAGER_H
#define HFDATAANALYTICSLOGITEMMANAGER_H

@protocol HFMediaProfileContainer;


#import "HFItemManager.h"
#import "HFDataAnalyticsModule.h"

@interface HFDataAnalyticsLogItemManager : HFItemManager

@property (readonly, nonatomic) HFDataAnalyticsModule *dataAnalyticsModule; // ivar: _dataAnalyticsModule
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 delegate:(id)arg1 ;


@end


#endif