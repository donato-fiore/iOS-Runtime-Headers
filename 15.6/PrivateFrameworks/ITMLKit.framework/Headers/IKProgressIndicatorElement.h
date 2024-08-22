// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKPROGRESSINDICATORELEMENT_H
#define IKPROGRESSINDICATORELEMENT_H

@class NSString;


#import "IKViewElement.h"

@interface IKProgressIndicatorElement : IKViewElement

@property (readonly, nonatomic) NSUInteger percentage;
@property (readonly, nonatomic) NSString *type;


+(BOOL)shouldParseChildDOMElements;


@end


#endif