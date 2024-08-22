// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKHEADERELEMENT_H
#define IKHEADERELEMENT_H



#import "IKViewElement.h"
#import "IKTextElement.h"
#import "IKImageElement.h"

@interface IKHeaderElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) IKImageElement *image;
@property (readonly, nonatomic) NSInteger separator;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *title;




@end


#endif