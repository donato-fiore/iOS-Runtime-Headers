// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKBACKGROUNDELEMENT_H
#define IKBACKGROUNDELEMENT_H

@class UIColor, NSArray;


#import "IKViewElement.h"
#import "IKAudioElement.h"

@interface IKBackgroundElement : IKViewElement

@property (readonly, retain, nonatomic) IKAudioElement *audio;
@property (readonly, retain, nonatomic) UIColor *backgroundColor;
@property (readonly, retain, nonatomic) NSArray *images;
@property (readonly, nonatomic) CGFloat transitionInterval;




@end


#endif