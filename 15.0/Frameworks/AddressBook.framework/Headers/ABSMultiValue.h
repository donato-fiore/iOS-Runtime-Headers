// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABSMULTIVALUE_H
#define ABSMULTIVALUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ABSMultiValue : NSObject

@property (readonly, nonatomic) BOOL mutable; // ivar: _mutable
@property (readonly, nonatomic) unsigned int propertyType; // ivar: _propertyType
@property (readonly, nonatomic) NSMutableArray *values; // ivar: _values


+(void)initialize;
-(BOOL)addValue:(id)arg0 label:(id)arg1 outIdentifier:(*int)arg2 ;
-(BOOL)insertValue:(id)arg0 label:(id)arg1 atIndex:(NSInteger)arg2 outIdentifier:(*int)arg3 ;
-(BOOL)removeValueAtIndex:(NSInteger)arg0 ;
-(BOOL)replaceLabel:(id)arg0 atIndex:(NSInteger)arg1 ;
-(BOOL)replaceValue:(id)arg0 atIndex:(NSInteger)arg1 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)indexForIdentifier:(int)arg0 ;
-(NSUInteger)indexOfValue:(id)arg0 ;
-(id)allValues;
-(id)copyValueAtIndex:(NSInteger)arg0 ;
-(id)initWithPropertyType:(unsigned int)arg0 mutable:(BOOL)arg1 values:(id)arg2 ;
-(id)labelAtIndex:(NSInteger)arg0 ;
-(int)identifierAtIndex:(NSInteger)arg0 ;
-(int)nextLegacyIdentifier;


@end


#endif