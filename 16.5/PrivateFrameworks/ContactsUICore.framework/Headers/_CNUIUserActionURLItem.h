// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNUIUSERACTIONURLITEM_H
#define _CNUIUSERACTIONURLITEM_H

@class CNFuture;


#import "CNUIUserActionItem.h"

@interface _CNUIUserActionURLItem : CNUIUserActionItem

@property (readonly, nonatomic) BOOL isSensitive; // ivar: _isSensitive
@property (readonly, nonatomic) CNFuture *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(id)initWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 isSensitive:(BOOL)arg4 group:(NSInteger)arg5 options:(NSUInteger)arg6 ;
-(id)performActionWithContext:(id)arg0 ;
-(id)performActionWithContext:(id)arg0 shouldCurateIfPerformed:(BOOL)arg1 ;


@end


#endif