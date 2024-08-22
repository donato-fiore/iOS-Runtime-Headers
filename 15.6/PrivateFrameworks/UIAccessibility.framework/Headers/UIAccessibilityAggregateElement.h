// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYAGGREGATEELEMENT_H
#define UIACCESSIBILITYAGGREGATEELEMENT_H

@class UIAccessibilityElement, NSArray;



@interface UIAccessibilityAggregateElement : UIAccessibilityElement

@property (retain, nonatomic) NSArray *representedElements; // ivar: _representedElements


-(id)accessibilityLabel;
-(id)initWithAccessibilityContainer:(id)arg0 ;
-(id)initWithAccessibilityContainer:(id)arg0 representedElements:(id)arg1 ;
-(struct CGRect )accessibilityFrame;
-(void)addRepresentedObject:(id)arg0 ;


@end


#endif