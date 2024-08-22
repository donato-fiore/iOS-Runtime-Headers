// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKANIMATEWARP_H
#define SKANIMATEWARP_H



#import "SKAction.h"

@interface SKAnimateWarp : SKAction {
    *SKCAnimateMesh _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)animateWithWarps:(id)arg0 times:(id)arg1 ;
+(id)animateWithWarps:(id)arg0 times:(id)arg1 restore:(BOOL)arg2 ;
+(id)warpTo:(id)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif