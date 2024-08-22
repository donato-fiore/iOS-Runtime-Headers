// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKTIMELINEEVENTELEMENT_H
#define IKTIMELINEEVENTELEMENT_H

@class NSDate;


#import "IKViewElement.h"

@interface IKTimelineEventElement : IKViewElement

@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat offset;
@property (readonly, retain, nonatomic) IKViewElement *relatedContent;
@property (readonly, retain, nonatomic) NSDate *startDate;




@end


#endif