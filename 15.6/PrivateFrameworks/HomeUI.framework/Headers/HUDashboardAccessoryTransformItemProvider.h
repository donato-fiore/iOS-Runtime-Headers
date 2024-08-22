// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDASHBOARDACCESSORYTRANSFORMITEMPROVIDER_H
#define HUDASHBOARDACCESSORYTRANSFORMITEMPROVIDER_H

@class HFMultipleTransformItemProvider, HMHome;



@interface HUDashboardAccessoryTransformItemProvider : HFMultipleTransformItemProvider

@property (readonly, weak, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL splitAccessoryGroupsByRoom; // ivar: _splitAccessoryGroupsByRoom


-(id)_subclass_transformItem:(id)arg0 ;
-(id)initWithSourceProvider:(id)arg0 inHome:(id)arg1 ;
-(id)invalidationReasons;


@end


#endif