// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC7NEWSUI27TAGVIEW27CONTENTACCESSIBILITYELEMENT_H
#define _TTCC7NEWSUI27TAGVIEW27CONTENTACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, NSString, NSArray;



@interface _TtCC7NewsUI27TagView27ContentAccessibilityElement : UIAccessibilityElement

@property (nonatomic) CGPoint accessibilityActivationPoint;
@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;


-(BOOL)accessibilityActivate;
-(id)init;
-(id)initWithAccessibilityContainer:(id)arg0 ;


@end


#endif