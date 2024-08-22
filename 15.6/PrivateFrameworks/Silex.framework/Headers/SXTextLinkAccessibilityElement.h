// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTLINKACCESSIBILITYELEMENT_H
#define SXTEXTLINKACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, NSString, NSURL;


#import "SXTextTangierFlowRep.h"

@interface SXTextLinkAccessibilityElement : UIAccessibilityElement

@property (readonly, nonatomic) NSString *displayText; // ivar: _displayText
@property (weak, nonatomic) SXTextTangierFlowRep *parentRep; // ivar: _parentRep
@property (readonly, nonatomic) _NSRange rangeInParentRep; // ivar: _rangeInParentRep
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityValue;
-(id)description;
-(id)initWithHyperlinkField:(id)arg0 parentRep:(id)arg1 ;
-(struct CGRect )accessibilityFrame;


@end


#endif