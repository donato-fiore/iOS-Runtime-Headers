// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKRESIZE_H
#define SKRESIZE_H



#import "SKAction.h"

@interface SKResize : SKAction {
    *SKCResize _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)resizeByWidth:(CGFloat)arg0 height:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)resizeToHeight:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)resizeToWidth:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)resizeToWidth:(CGFloat)arg0 height:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif