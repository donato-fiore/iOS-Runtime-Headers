// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNUIUSERACTIONDIALREQUESTITEM_H
#define _CNUIUSERACTIONDIALREQUESTITEM_H

@protocol CNTUDialRequest;


#import "CNUIUserActionItem.h"

@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem

@property (readonly, nonatomic) NSObject<CNTUDialRequest> *dialRequest; // ivar: _dialRequest


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(id)arg0 contactProperty:(id)arg1 bundleIdentifier:(id)arg2 dialRequest:(id)arg3 group:(NSInteger)arg4 options:(NSUInteger)arg5 ;
-(id)performActionWithContext:(id)arg0 ;


@end


#endif