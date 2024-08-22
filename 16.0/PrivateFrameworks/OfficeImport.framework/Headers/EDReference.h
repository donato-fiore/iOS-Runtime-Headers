// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDREFERENCE_H
#define EDREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EDReference : NSObject <NSCopying>

 {
    EDAreaReference mAreaReference;
}




+(id)reference;
+(id)referenceWithAreaReference:(struct EDAreaReference *)arg0 ;
+(id)referenceWithFirstRow:(int)arg0 lastRow:(int)arg1 firstColumn:(int)arg2 lastColumn:(int)arg3 ;
+(id)referenceWithReference:(id)arg0 ;
-(BOOL)containsRow:(int)arg0 column:(int)arg1 ;
-(BOOL)fullyAdjacentToReference:(id)arg0 ;
-(BOOL)isCellReference;
-(BOOL)isColumnReference;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReference:(id)arg0 ;
-(BOOL)isRowReference;
-(BOOL)isValidAreaReference;
-(BOOL)isValidCellReference;
-(NSUInteger)countOfCellsBeingReferenced;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAreaReference:(struct EDAreaReference *)arg0 ;
-(id)initWithFirstRow:(int)arg0 lastRow:(int)arg1 firstColumn:(int)arg2 lastColumn:(int)arg3 ;
-(id)initWithReference:(id)arg0 ;
-(int)firstColumn;
-(int)firstRow;
-(int)lastColumn;
-(int)lastRow;
-(struct EDAreaReference )areaReference;
-(void)setFirstColumn:(int)arg0 ;
-(void)setFirstRow:(int)arg0 ;
-(void)setLastColumn:(int)arg0 ;
-(void)setLastRow:(int)arg0 ;
-(void)unionWithFirstRow:(int)arg0 lastRow:(int)arg1 firstColumn:(int)arg2 lastColumn:(int)arg3 ;
-(void)unionWithReference:(id)arg0 ;
-(void)unionWithRow:(int)arg0 column:(int)arg1 ;


@end


#endif