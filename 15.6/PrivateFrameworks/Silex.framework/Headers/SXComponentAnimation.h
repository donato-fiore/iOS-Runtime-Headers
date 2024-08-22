// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTANIMATION_H
#define SXCOMPONENTANIMATION_H



#import "SXJSONObject.h"

@interface SXComponentAnimation : SXJSONObject

@property (readonly, nonatomic) int transitionBehavior;
@property (readonly, nonatomic) BOOL userControllable;


-(Class)handlerClass;


@end


#endif