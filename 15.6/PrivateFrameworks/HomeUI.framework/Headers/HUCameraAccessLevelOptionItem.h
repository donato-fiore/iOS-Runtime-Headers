// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERAACCESSLEVELOPTIONITEM_H
#define HUCAMERAACCESSLEVELOPTIONITEM_H

@class HFItem, HMHome, HMUser;



@interface HUCameraAccessLevelOptionItem : HFItem

@property (readonly, nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HMUser *user; // ivar: _user


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithUser:(id)arg0 home:(id)arg1 accessLevel:(NSUInteger)arg2 ;


@end


#endif