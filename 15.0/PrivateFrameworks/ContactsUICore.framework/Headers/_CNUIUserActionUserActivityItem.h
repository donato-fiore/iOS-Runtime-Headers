// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNUIUSERACTIONUSERACTIVITYITEM_H
#define _CNUIUSERACTIONUSERACTIVITYITEM_H

@class NSUserActivity;


#import "CNUIUserActionItem.h"

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem

@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


-(BOOL)_isIntent:(id)arg0 equalToOther:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hashForIntent:(id)arg0 ;
-(NSUInteger)hash;
-(id)_personFromIntent:(id)arg0 ;
-(id)description;
-(id)initWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 userActivity:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(id)performActionWithContext:(id)arg0 ;


@end


#endif