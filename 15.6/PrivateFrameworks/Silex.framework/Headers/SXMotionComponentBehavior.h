// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMOTIONCOMPONENTBEHAVIOR_H
#define SXMOTIONCOMPONENTBEHAVIOR_H



#import "SXComponentBehavior.h"

@interface SXMotionComponentBehavior : SXComponentBehavior

@property (readonly, nonatomic) CGFloat amplitude;
@property (readonly, nonatomic) BOOL horizontal;
@property (readonly, nonatomic) BOOL vertical;
@property (readonly, nonatomic) BOOL windowed;


-(Class)handlerClassForComponent:(id)arg0 ;


@end


#endif