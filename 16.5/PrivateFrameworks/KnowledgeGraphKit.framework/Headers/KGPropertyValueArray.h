// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGPROPERTYVALUEARRAY_H
#define KGPROPERTYVALUEARRAY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "KGElementIdentifierSet.h"

@interface KGPropertyValueArray : NSObject

@property (readonly, nonatomic) KGElementIdentifierSet *elementIdentifiers; // ivar: _elementIdentifiers
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(id)initWithValues:(id)arg0 elementIdentifiers:(id)arg1 ;
-(void)enumerateUsingBlock:(id)arg0 ;


@end


#endif