// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKREFERENCEDACTION_H
#define SKREFERENCEDACTION_H

@class NSString;


#import "SKAction.h"

@interface SKReferencedAction : SKAction {
    *SKCReferencedAction _mycaction;
    SKAction *_referencedAction;
    NSString *_referencedActionName;
}




+(BOOL)supportsSecureCoding;
+(id)referenceActionWithName:(id)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(id)subactions;
-(void)_ensureReferencedAction;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setTimingFunction:(id)arg0 ;
-(void)setTimingMode:(NSInteger)arg0 ;


@end


#endif