// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYELEMENTDESCRIPTION_H
#define UIACCESSIBILITYELEMENTDESCRIPTION_H

@class NSAttributedString, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSAttributedString *attributedLabel; // ivar: _attributedLabel
@property (retain, nonatomic) NSAttributedString *attributedValue; // ivar: _attributedValue
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) CGRect frameInContainerSpace; // ivar: _frameInContainerSpace
@property (nonatomic) BOOL isAccessibleElement; // ivar: _isAccessibleElement
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger traits; // ivar: _traits
@property (retain, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_descriptionWithAXElement:(id)arg0 ;
+(id)_descriptionWithLocalElement:(id)arg0 ;
+(id)descriptionWithElement:(id)arg0 frameInContainerSpaceOrNil:(struct CGRect )arg1 ;
-(id)convertToAccessibilityElementWithContainer:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif