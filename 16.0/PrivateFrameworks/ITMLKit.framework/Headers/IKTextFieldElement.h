// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKTEXTFIELDELEMENT_H
#define IKTEXTFIELDELEMENT_H



#import "IKTextElement.h"
#import "IKAppKeyboard.h"

@interface IKTextFieldElement : IKTextElement

@property (readonly, nonatomic) IKAppKeyboard *keyboard; // ivar: _keyboard


+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif