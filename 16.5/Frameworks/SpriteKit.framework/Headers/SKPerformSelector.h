// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPERFORMSELECTOR_H
#define SKPERFORMSELECTOR_H

@protocol NSObject;


#import "SKAction.h"

@interface SKPerformSelector : SKAction {
    SEL _selector;
    id<NSObject> *_weakTarget;
    id<NSObject> *_strongTarget;
}




+(BOOL)supportsSecureCoding;
+(id)perfromSelector:(SEL)arg0 onTarget:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif