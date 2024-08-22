// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONMOVE_H
#define SCNACTIONMOVE_H



#import "SCNAction.h"

@interface SCNActionMove : SCNAction {
    *SCNCActionMove _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)moveBy:(struct SCNVector3 )arg0 duration:(CGFloat)arg1 ;
+(id)moveByX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)moveTo:(struct SCNVector3 )arg0 duration:(CGFloat)arg1 ;
+(id)moveToX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
-(BOOL)isRelative;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif