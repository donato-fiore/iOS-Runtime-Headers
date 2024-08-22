// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBACTIONGROUP_H
#define BBACTIONGROUP_H

@class NSArray;


#import "BBAction.h"

@interface BBActionGroup : BBAction

@property (copy, nonatomic) NSArray *actions; // ivar: _actions


+(id)actionGroupWithActions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif