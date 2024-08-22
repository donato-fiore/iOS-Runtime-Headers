// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTARGETCONTROLITEMPROVIDER_H
#define HFTARGETCONTROLITEMPROVIDER_H

@class HMHome, NSMutableSet;


#import "HFItemProvider.h"

@interface HFTargetControlItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *remoteControlAccessoryItems; // ivar: _remoteControlAccessoryItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif