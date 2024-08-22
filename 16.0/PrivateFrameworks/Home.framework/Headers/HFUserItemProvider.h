// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFUSERITEMPROVIDER_H
#define HFUSERITEMPROVIDER_H

@class HMHome, NSMutableSet;


#import "HFItemProvider.h"

@interface HFUserItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL includeCurrentUser; // ivar: _includeCurrentUser
@property (nonatomic) BOOL includeOtherUsers; // ivar: _includeOtherUsers
@property (nonatomic) NSUInteger nameStyle; // ivar: _nameStyle
@property (retain, nonatomic) NSMutableSet *userItems; // ivar: _userItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif