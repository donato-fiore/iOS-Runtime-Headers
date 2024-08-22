// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICEICONITEMPROVIDER_H
#define HFSERVICEICONITEMPROVIDER_H

@class HMHome, NSSet, NSString;


#import "HFItemProvider.h"

@interface HFServiceIconItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) NSSet *iconItems; // ivar: _iconItems
@property (copy, nonatomic) NSString *serviceSubtype; // ivar: _serviceSubtype
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithServiceType:(id)arg0 serviceSubtype:(id)arg1 home:(id)arg2 ;
-(id)items;
-(id)reloadItems;


@end


#endif