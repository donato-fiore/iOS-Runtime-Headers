// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCACCESSIBILITYELEMENT_H
#define CCACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, NSString;



@interface CCAccessibilityElement : UIAccessibilityElement

@property CGRect frame;
@property (retain) NSString *label; // ivar: label
@property (retain) NSString *roleDescription; // ivar: roleDescription


-(BOOL)isAccessibilityElement;
-(id)accessibilityLabel;


@end


#endif