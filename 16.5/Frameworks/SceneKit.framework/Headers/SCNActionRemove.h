// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNACTIONREMOVE_H
#define SCNACTIONREMOVE_H



#import "SCNAction.h"

@interface SCNActionRemove : SCNAction {
    BOOL _hasFired;
}




+(BOOL)supportsSecureCoding;
+(id)removeFromParentNode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)willStartWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif