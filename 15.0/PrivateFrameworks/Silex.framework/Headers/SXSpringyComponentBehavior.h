// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSPRINGYCOMPONENTBEHAVIOR_H
#define SXSPRINGYCOMPONENTBEHAVIOR_H



#import "SXComponentBehavior.h"

@interface SXSpringyComponentBehavior : SXComponentBehavior

@property (readonly, nonatomic) CGFloat damping;
@property (readonly, nonatomic) CGFloat delta;
@property (readonly, nonatomic) CGFloat frequency;


-(Class)handlerClassForComponent:(id)arg0 ;


@end


#endif