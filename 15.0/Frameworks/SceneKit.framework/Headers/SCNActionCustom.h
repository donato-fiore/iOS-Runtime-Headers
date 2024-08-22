// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONCUSTOM_H
#define SCNACTIONCUSTOM_H



#import "SCNAction.h"

@interface SCNActionCustom : SCNAction



+(BOOL)supportsSecureCoding;
+(id)customActionWithDuration:(CGFloat)arg0 actionBlock:(id)arg1 ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif