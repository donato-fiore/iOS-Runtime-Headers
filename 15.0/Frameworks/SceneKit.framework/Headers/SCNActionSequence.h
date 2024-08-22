// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONSEQUENCE_H
#define SCNACTIONSEQUENCE_H

@class NSArray;


#import "SCNAction.h"

@interface SCNActionSequence : SCNAction {
    *void _mycaction;
    NSArray *_actions;
}




+(BOOL)supportsSecureCoding;
+(id)sequenceWithActions:(id)arg0 ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif