// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNACTIONPERFORMSELECTOR_H
#define SCNACTIONPERFORMSELECTOR_H



#import "SCNAction.h"

@interface SCNActionPerformSelector : SCNAction {
    SEL _selector;
    id *_target;
}




+(BOOL)supportsSecureCoding;
+(id)performSelector:(SEL)arg0 onTarget:(id)arg1 ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif