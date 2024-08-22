// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSEQUENCE_H
#define SKSEQUENCE_H

@class NSArray;


#import "SKAction.h"

@interface SKSequence : SKAction {
    *void _mycaction;
    NSArray *_actions;
    NSUInteger _animIndex;
}




+(BOOL)supportsSecureCoding;
+(id)sequenceWithActions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(id)subactions;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif