// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKGROUP_H
#define SKGROUP_H

@class NSArray;


#import "SKAction.h"

@interface SKGroup : SKAction {
    *void _mycaction;
    NSArray *_actions;
}




+(BOOL)supportsSecureCoding;
+(id)groupWithActions:(id)arg0 ;
-(BOOL)finished;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(id)subactions;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif