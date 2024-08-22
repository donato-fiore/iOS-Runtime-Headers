// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKBADGEELEMENT_H
#define IKBADGEELEMENT_H

@class NSString;


#import "IKImageElement.h"

@interface IKBadgeElement : IKImageElement

@property (readonly, retain, nonatomic) NSString *textContent;


+(BOOL)shouldParseChildDOMElements;


@end


#endif