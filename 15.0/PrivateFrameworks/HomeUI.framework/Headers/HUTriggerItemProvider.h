// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERITEMPROVIDER_H
#define HUTRIGGERITEMPROVIDER_H

@class HFItemProvider, HMHome, NSMutableSet;



@interface HUTriggerItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *triggerItems; // ivar: _triggerItems
@property (nonatomic) BOOL usesRichIconDescriptors; // ivar: _usesRichIconDescriptors


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif