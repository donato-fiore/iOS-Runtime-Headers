// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKMEDIAELEMENT_H
#define IKMEDIAELEMENT_H

@class NSArray;


#import "IKViewElement.h"

@interface IKMediaElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray *assets;
@property (readonly, nonatomic) IKViewElement *relatedContent;
@property (readonly, nonatomic) NSUInteger scrubBehavior;




@end


#endif