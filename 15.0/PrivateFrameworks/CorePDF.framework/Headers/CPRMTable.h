// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPRMTABLE_H
#define CPRMTABLE_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface CPRMTable : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_matrix;
    NSUInteger _elementCount;
    NSMutableArray *_rowFirstElements;
    NSMutableArray *_columnFirstElements;
    *CGPDFLayout _layout;
    *CGPDFNode _tableRoot;
}


@property (readonly) *CGPDFPage page;
@property BOOL rowOrder; // ivar: _rowOrder


-(NSUInteger)columns;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)rows;
-(id)columnAtIndex:(NSUInteger)arg0 ;
-(id)initWithRoot:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1 ;
-(id)rowAtIndex:(NSUInteger)arg0 ;
-(struct CGPDFLayout *)layout;
-(struct CGRect )bounds;
-(void)dealloc;
-(void)dump;
-(void)matrixDealloc;


@end


#endif