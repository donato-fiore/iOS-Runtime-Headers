// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYCATEGORYSTATUSITEMPROVIDER_H
#define HFACCESSORYCATEGORYSTATUSITEMPROVIDER_H

@class HMHome, HMRoom;
@protocol HFCharacteristicValueSource;


#import "HFStaticItemProvider.h"

@interface HFAccessoryCategoryStatusItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)_categoryStatusItemClasses;
+(id)categorySortOrder;
-(id)_buildStatusItemWithClass:(Class)arg0 home:(id)arg1 room:(id)arg2 valueSource:(id)arg3 ;
-(id)_createStatusItemsForHome:(id)arg0 room:(id)arg1 valueSource:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 overrideValueSource:(id)arg2 ;
-(id)initWithItems:(id)arg0 ;
-(void)_buildStatusItemsForGroupedStatusItem:(id)arg0 ;


@end


#endif