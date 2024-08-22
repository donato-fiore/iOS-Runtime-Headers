// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNACTIONFADE_H
#define SCNACTIONFADE_H



#import "SCNAction.h"

@interface SCNActionFade : SCNAction {
    *SCNCActionFade _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)fadeInWithDuration:(CGFloat)arg0 ;
+(id)fadeOpacityBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeOpacityTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeOutWithDuration:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif