// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGMUTABLEPROPERTYVALUEARRAY_H
#define KGMUTABLEPROPERTYVALUEARRAY_H

@class NSMutableArray;


#import "KGPropertyValueArray.h"
#import "KGMutableElementIdentifierSet.h"

@interface KGMutablePropertyValueArray : KGPropertyValueArray

@property (readonly, nonatomic) KGMutableElementIdentifierSet *elementIdentifiers;
@property (readonly, nonatomic) NSMutableArray *values;


-(id)init;
-(void)appendValue:(id)arg0 forIdentifier:(NSUInteger)arg1 ;


@end


#endif