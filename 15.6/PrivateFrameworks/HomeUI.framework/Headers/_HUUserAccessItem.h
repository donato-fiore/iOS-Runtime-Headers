// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HUUSERACCESSITEM_H
#define _HUUSERACCESSITEM_H

@class HFItem, HMUser;



@interface _HUUserAccessItem : HFItem

@property (readonly, copy, nonatomic) id *resultsBlock; // ivar: _resultsBlock
@property (readonly, nonatomic) HMUser *user; // ivar: _user


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithUser:(id)arg0 resultsBlock:(id)arg1 ;


@end


#endif