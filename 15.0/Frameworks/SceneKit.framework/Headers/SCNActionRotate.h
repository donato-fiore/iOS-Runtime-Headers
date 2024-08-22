// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONROTATE_H
#define SCNACTIONROTATE_H



#import "SCNAction.h"

@interface SCNActionRotate : SCNAction {
    *SCNCActionRotate _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)rotateByAngle:(CGFloat)arg0 aroundAxis:(struct SCNVector3 )arg1 duration:(CGFloat)arg2 ;
+(id)rotateByX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)rotateToAxisAngle:(struct SCNVector4 )arg0 duration:(CGFloat)arg1 ;
+(id)rotateToX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)rotateToX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 shortestUnitArc:(BOOL)arg4 ;
-(BOOL)isRelative;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif