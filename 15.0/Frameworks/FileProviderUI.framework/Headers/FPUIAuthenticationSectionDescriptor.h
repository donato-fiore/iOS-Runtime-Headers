// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPUIAUTHENTICATIONSECTIONDESCRIPTOR_H
#define FPUIAUTHENTICATIONSECTIONDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FPUIAuthenticationSectionDescriptor : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (copy, nonatomic) NSString *footerTitle; // ivar: _footerTitle
@property (copy, nonatomic) Class footerViewClass; // ivar: _footerViewClass
@property (copy, nonatomic) id *footerViewCustomizationBlock; // ivar: _footerViewCustomizationBlock
@property (copy, nonatomic) NSString *footerViewReuseIdentifier; // ivar: _footerViewReuseIdentifier
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (copy, nonatomic) Class headerViewClass; // ivar: _headerViewClass
@property (copy, nonatomic) id *headerViewCustomizationBlock; // ivar: _headerViewCustomizationBlock
@property (copy, nonatomic) NSString *headerViewReuseIdentifier; // ivar: _headerViewReuseIdentifier
@property (copy, nonatomic) Class rowCellClass; // ivar: _rowCellClass
@property (copy, nonatomic) NSString *rowCellReuseIdentifier; // ivar: _rowCellReuseIdentifier
@property (nonatomic) BOOL shouldHighlightRows; // ivar: _shouldHighlightRows


-(id)init;


@end


#endif