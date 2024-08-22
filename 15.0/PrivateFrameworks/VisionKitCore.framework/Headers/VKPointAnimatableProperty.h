// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKPOINTANIMATABLEPROPERTY_H
#define VKPOINTANIMATABLEPROPERTY_H

@class UIViewFloatAnimatableProperty;

#import <Foundation/Foundation.h>


@interface VKPointAnimatableProperty : NSObject

@property (readonly, nonatomic) CGPoint presentationValue;
@property (nonatomic) CGPoint value;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *x; // ivar: _x
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *y; // ivar: _y


-(id)init;


@end


#endif