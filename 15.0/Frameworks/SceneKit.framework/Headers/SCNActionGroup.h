// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONGROUP_H
#define SCNACTIONGROUP_H

@class NSArray;


#import "SCNAction.h"

@interface SCNActionGroup : SCNAction {
    *void _mycaction;
    NSArray *_actions;
}




+(BOOL)supportsSecureCoding;
+(id)groupWithActions:(id)arg0 ;
-(BOOL)finished;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setupWithActions:(id)arg0 ;


@end


#endif