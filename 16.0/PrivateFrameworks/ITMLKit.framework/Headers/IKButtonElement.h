// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKBUTTONELEMENT_H
#define IKBUTTONELEMENT_H

@class NSString;


#import "IKViewElement.h"
#import "IKImageElement.h"
#import "IKTextElement.h"

@interface IKButtonElement : IKViewElement

@property (readonly, nonatomic) NSInteger buttonType;
@property (readonly, copy, nonatomic) NSString *confirmationText;
@property (readonly, retain, nonatomic) IKImageElement *image;
@property (readonly, retain, nonatomic) IKTextElement *text;




@end


#endif