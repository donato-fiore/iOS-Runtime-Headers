// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKLOCKUPELEMENT_H
#define IKLOCKUPELEMENT_H



#import "IKViewElement.h"
#import "IKTextElement.h"
#import "IKImageElement.h"
#import "IKOrdinalElement.h"

@interface IKLockupElement : IKViewElement

@property (readonly, retain, nonatomic) IKTextElement *descriptionText;
@property (readonly, retain, nonatomic) IKImageElement *fullscreenImage;
@property (readonly, retain, nonatomic) IKImageElement *image;
@property (readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property (readonly, retain, nonatomic) IKViewElement *overlays;
@property (readonly, nonatomic) BOOL showTitlesOnFocus;
@property (readonly, retain, nonatomic) IKTextElement *subtitle;
@property (readonly, retain, nonatomic) IKTextElement *title;




@end


#endif