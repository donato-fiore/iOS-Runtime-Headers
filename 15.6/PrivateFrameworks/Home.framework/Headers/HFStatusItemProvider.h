// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSTATUSITEMPROVIDER_H
#define HFSTATUSITEMPROVIDER_H

@class HMHome, HMRoom;
@protocol HFCharacteristicValueSource;


#import "HFStaticItemProvider.h"

@interface HFStatusItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(BOOL)hasStatusItemForServiceType:(id)arg0 ;
+(id)_statusItemClasses;
+(id)sortOrderForStatusItemCategory:(NSUInteger)arg0 ;
-(id)_buildStatusItemWithClass:(Class)arg0 home:(id)arg1 room:(id)arg2 valueSource:(id)arg3 ;
-(id)_createStatusItemsForHome:(id)arg0 room:(id)arg1 valueSource:(id)arg2 options:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 overrideValueSource:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithItems:(id)arg0 ;
-(void)_buildStatusItemsForGroupedStatusItem:(id)arg0 ;


@end


#endif