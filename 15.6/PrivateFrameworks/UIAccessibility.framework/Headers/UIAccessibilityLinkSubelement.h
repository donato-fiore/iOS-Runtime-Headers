// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYLINKSUBELEMENT_H
#define UIACCESSIBILITYLINKSUBELEMENT_H

@class UIAccessibilityElement, NSURL;



@interface UIAccessibilityLinkSubelement : UIAccessibilityElement

@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(NSUInteger)_accessibilityAutomationType;
-(NSUInteger)accessibilityTraits;
-(id)textRangeForTextView:(id)arg0 ;
-(struct CGRect )accessibilityFrame;


@end


#endif