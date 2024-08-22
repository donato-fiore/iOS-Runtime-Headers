// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITEXTINPUTVIEWELEMENT_H
#define SKUITEXTINPUTVIEWELEMENT_H

@class NSString;


#import "SKUIInputViewElement.h"
#import "SKUIAnimatorDOMFeature.h"

@interface SKUITextInputViewElement : SKUIInputViewElement

@property (readonly, nonatomic) SKUIAnimatorDOMFeature *animationInterface;
@property (readonly, nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) NSInteger maximumLength; // ivar: _maximumLength
@property (readonly, nonatomic) NSString *placeholderText; // ivar: _placeholderText
@property (readonly, nonatomic, getter=isSecure) BOOL secure; // ivar: _secure


+(BOOL)isTextInputType:(id)arg0 ;
+(id)supportedFeatures;
-(NSUInteger)elementType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif