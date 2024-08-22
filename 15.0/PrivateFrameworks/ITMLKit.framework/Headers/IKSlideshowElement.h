// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKSLIDESHOWELEMENT_H
#define IKSLIDESHOWELEMENT_H

@class NSArray;


#import "IKViewElement.h"

@interface IKSlideshowElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray *images;
@property (readonly, nonatomic) NSInteger showSettings;
@property (readonly, nonatomic) NSUInteger transition;
@property (readonly, nonatomic) CGFloat transitionInterval;




@end


#endif