// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOMPOSETEXTFIELDCONFIGURATION_H
#define SKUICOMPOSETEXTFIELDCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKUIComposeTextFieldConfiguration : NSObject

@property (nonatomic) UIEdgeInsets borderInsets; // ivar: _borderInsets
@property (nonatomic) NSInteger columnIndex; // ivar: _columnIndex
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (nonatomic, getter=isRequired) BOOL required; // ivar: _isRequired
@property (copy, nonatomic) NSString *value; // ivar: _value




@end


#endif