// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONSCALE_H
#define SCNACTIONSCALE_H



#import "SCNAction.h"

@interface SCNActionScale : SCNAction {
    *SCNCActionScale _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)scaleBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(BOOL)isRelative;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameters;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif