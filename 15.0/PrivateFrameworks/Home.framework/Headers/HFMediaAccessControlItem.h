// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMEDIAACCESSCONTROLITEM_H
#define HFMEDIAACCESSCONTROLITEM_H

@class HMHome;


#import "HFItem.h"

@interface HFMediaAccessControlItem : HFItem

@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;


@end


#endif