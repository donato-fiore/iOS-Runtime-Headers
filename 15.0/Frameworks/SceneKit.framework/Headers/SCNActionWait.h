// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONWAIT_H
#define SCNACTIONWAIT_H



#import "SCNAction.h"

@interface SCNActionWait : SCNAction {
    *SCNCActionWait _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)waitForDuration:(CGFloat)arg0 ;
+(id)waitForDuration:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif