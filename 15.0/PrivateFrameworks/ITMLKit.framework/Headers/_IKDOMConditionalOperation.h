// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IKDOMCONDITIONALOPERATION_H
#define _IKDOMCONDITIONALOPERATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IKDataBindingPropertyPath.h"

@interface _IKDOMConditionalOperation : NSObject

@property (copy, nonatomic) NSString *literal; // ivar: _literal
@property (retain, nonatomic) IKDataBindingPropertyPath *propertyPath; // ivar: _propertyPath
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)passesForDataItem:(id)arg0 ;


@end


#endif