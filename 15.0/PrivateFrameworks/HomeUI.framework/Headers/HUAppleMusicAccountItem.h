// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUAPPLEMUSICACCOUNTITEM_H
#define HUAPPLEMUSICACCOUNTITEM_H

@class ACAccount;


#import "HUAppleMusicItem.h"

@interface HUAppleMusicAccountItem : HUAppleMusicItem

@property (readonly, nonatomic) ACAccount *account; // ivar: _account


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMediaProfileContainer:(id)arg0 account:(id)arg1 ;


@end


#endif