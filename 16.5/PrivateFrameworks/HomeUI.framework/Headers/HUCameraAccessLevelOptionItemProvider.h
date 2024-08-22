// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERAACCESSLEVELOPTIONITEMPROVIDER_H
#define HUCAMERAACCESSLEVELOPTIONITEMPROVIDER_H

@class HFItemProvider, HMHome, NSMutableSet, HMUser;



@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items
@property (readonly, nonatomic) HMUser *user; // ivar: _user


-(id)init;
-(id)initWithUser:(id)arg0 home:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;


@end


#endif