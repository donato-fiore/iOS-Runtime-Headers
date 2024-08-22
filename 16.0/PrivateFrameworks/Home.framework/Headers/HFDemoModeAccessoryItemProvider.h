// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFDEMOMODEACCESSORYITEMPROVIDER_H
#define HFDEMOMODEACCESSORYITEMPROVIDER_H

@class NSSet, HMHome;


#import "HFItemProvider.h"

@interface HFDemoModeAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *demoItems; // ivar: _demoItems
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) HMHome *home; // ivar: _home


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif