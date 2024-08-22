// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCONTACTAUTOFILLPROPERTYVALUES_H
#define SFCONTACTAUTOFILLPROPERTYVALUES_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "SFContactAutoFillValue.h"

@interface SFContactAutoFillPropertyValues : NSObject

@property (readonly, copy, nonatomic) NSString *property; // ivar: _property
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly, nonatomic) SFContactAutoFillValue *selectedValue;
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


-(id)initWithValues:(id)arg0 property:(id)arg1 ;


@end


#endif