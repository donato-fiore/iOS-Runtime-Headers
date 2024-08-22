// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNCHARTFORMULAARGUMENTCOLLECTION_H
#define TNCHARTFORMULAARGUMENTCOLLECTION_H

@class NSArray;
@protocol NSFastEnumeration, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying>

 {
    NSArray *_array;
}


@property (nonatomic) BOOL storeBadRef; // ivar: _storeBadRef


+(id)argumentCollectionFromFormula:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 usingCalcEngine:(id)arg2 ;
+(id)argumentCollectionFromFormula:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 usingCalcEngine:(id)arg2 storeBadRef:(BOOL)arg3 ;
+(id)evalArgumentCollectionFromFormula:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 usingCalcEngine:(id)arg2 ;
-(NSUInteger)components;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)elementAtIndex:(NSUInteger)arg0 ;
-(id)elementEnumerator;
-(id)firstElement;
-(id)initWithArray:(id)arg0 ;
-(id)initWithFormula:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 usingCalcEngine:(id)arg2 ;
-(id)initWithFormula:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 usingCalcEngine:(id)arg2 storeBadRef:(BOOL)arg3 ;
-(id)lastElement;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)reverseElementEnumerator;
-(id)wrappedChartFormulaWithID:(struct TSUCellCoord )arg0 andLocale:(id)arg1 ;


@end


#endif