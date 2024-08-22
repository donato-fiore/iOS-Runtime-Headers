// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVIMAGE16X9DECORATOR_H
#define _TVIMAGE16X9DECORATOR_H

@class NSString;


#import "TVImageScaleDecorator.h"

@interface _TVImage16x9Decorator : TVImageScaleDecorator

@property (copy, nonatomic) NSString *inlineTitle; // ivar: _inlineTitle


-(id)decorate:(id)arg0 scaledWithSize:(struct CGSize )arg1 croppedToFit:(BOOL)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithInlineTitle:(id)arg0 ;


@end


#endif