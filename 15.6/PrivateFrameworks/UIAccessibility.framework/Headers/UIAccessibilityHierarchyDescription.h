// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYHIERARCHYDESCRIPTION_H
#define UIACCESSIBILITYHIERARCHYDESCRIPTION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIAccessibilityElementDescription.h"

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *leafElements; // ivar: _leafElements
@property (retain, nonatomic) UIAccessibilityElementDescription *rootElement; // ivar: _rootElement


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif