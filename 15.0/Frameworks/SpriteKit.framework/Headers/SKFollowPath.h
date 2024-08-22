// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKFOLLOWPATH_H
#define SKFOLLOWPATH_H



#import "SKAction.h"

@interface SKFollowPath : SKAction {
    *SKCFollowPath _mycaction;
    *CGPath _cgPath;
}




+(BOOL)supportsSecureCoding;
+(id)followPath:(struct CGPath *)arg0 asOffset:(BOOL)arg1 orientToPath:(BOOL)arg2 duration:(CGFloat)arg3 ;
+(id)followPath:(struct CGPath *)arg0 asOffset:(BOOL)arg1 orientToPath:(BOOL)arg2 speed:(CGFloat)arg3 ;
+(id)followPath:(struct CGPath *)arg0 duration:(CGFloat)arg1 ;
+(id)followPath:(struct CGPath *)arg0 speed:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif