// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDESCRIPTIONBUILDER_H
#define CALDESCRIPTIONBUILDER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CalDescriptionBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *descriptionUnderConstruction; // ivar: _descriptionUnderConstruction
@property (copy, nonatomic) NSString *keyDelimiter; // ivar: _keyDelimiter
@property (nonatomic) BOOL sortedByKey; // ivar: _sortedByKey
@property (copy, nonatomic) NSString *superclassDescription; // ivar: _superclassDescription


-(id)build;
-(id)description;
-(id)init;
-(id)initWithSuperclassDescription:(id)arg0 ;
-(void)setKey:(id)arg0 withArray:(id)arg1 ;
-(void)setKey:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)setKey:(id)arg0 withChar:(char)arg1 ;
-(void)setKey:(id)arg0 withCharArray:(char *)arg1 ;
-(void)setKey:(id)arg0 withClass:(Class)arg1 ;
-(void)setKey:(id)arg0 withDate:(id)arg1 ;
-(void)setKey:(id)arg0 withDictionary:(id)arg1 ;
-(void)setKey:(id)arg0 withDispatchQueue:(id)arg1 ;
-(void)setKey:(id)arg0 withDispatchSource:(id)arg1 ;
-(void)setKey:(id)arg0 withDouble:(CGFloat)arg1 ;
-(void)setKey:(id)arg0 withEnumNumericalValue:(NSInteger)arg1 andStringValue:(id)arg2 ;
-(void)setKey:(id)arg0 withFloat:(float)arg1 ;
-(void)setKey:(id)arg0 withInt:(int)arg1 ;
-(void)setKey:(id)arg0 withInteger:(NSInteger)arg1 ;
-(void)setKey:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)setKey:(id)arg0 withLongLong:(NSInteger)arg1 ;
-(void)setKey:(id)arg0 withMachPort:(unsigned int)arg1 ;
-(void)setKey:(id)arg0 withObject:(id)arg1 ;
-(void)setKey:(id)arg0 withPointerAddress:(*void)arg1 ;
-(void)setKey:(id)arg0 withProcessID:(int)arg1 ;
-(void)setKey:(id)arg0 withSelector:(SEL)arg1 ;
-(void)setKey:(id)arg0 withSet:(id)arg1 ;
-(void)setKey:(id)arg0 withShort:(short)arg1 ;
-(void)setKey:(id)arg0 withSize:(NSUInteger)arg1 ;
-(void)setKey:(id)arg0 withString:(id)arg1 ;
-(void)setKey:(id)arg0 withTimeInterval:(CGFloat)arg1 ;
-(void)setKey:(id)arg0 withUnsignedChar:(unsigned char)arg1 ;
-(void)setKey:(id)arg0 withUnsignedInt:(unsigned int)arg1 ;
-(void)setKey:(id)arg0 withUnsignedInteger:(NSUInteger)arg1 ;
-(void)setKey:(id)arg0 withUnsignedLong:(NSUInteger)arg1 ;
-(void)setKey:(id)arg0 withUnsignedLongLong:(NSUInteger)arg1 ;
-(void)setKey:(id)arg0 withUnsignedShort:(unsigned short)arg1 ;


@end


#endif