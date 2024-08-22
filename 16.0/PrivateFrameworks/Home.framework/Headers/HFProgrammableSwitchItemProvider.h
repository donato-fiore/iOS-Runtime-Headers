// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPROGRAMMABLESWITCHITEMPROVIDER_H
#define HFPROGRAMMABLESWITCHITEMPROVIDER_H

@class HMHome, NSMutableSet;


#import "HFItemProvider.h"

@interface HFProgrammableSwitchItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *programmableSwitchAccessoryItems; // ivar: _programmableSwitchAccessoryItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif