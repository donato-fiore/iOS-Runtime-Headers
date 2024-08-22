// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUBRIDGELISTITEM_H
#define HUBRIDGELISTITEM_H

@class HFItem, HMHome;



@interface HUBridgeListItem : HFItem

@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;


@end


#endif