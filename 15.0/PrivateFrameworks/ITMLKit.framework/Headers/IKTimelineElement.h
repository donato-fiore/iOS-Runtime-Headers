// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKTIMELINEELEMENT_H
#define IKTIMELINEELEMENT_H

@class NSArray, NSURL;


#import "IKViewElement.h"
#import "IKTextElement.h"

@interface IKTimelineElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray *events;
@property (readonly, nonatomic) CGFloat refreshInterval;
@property (readonly, nonatomic) NSUInteger timelineType;
@property (readonly, retain, nonatomic) IKTextElement *title;
@property (readonly, retain, nonatomic) NSURL *url;




@end


#endif