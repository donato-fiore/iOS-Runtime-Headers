// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEDENSEGRID_H
#define TSCEDENSEGRID_H

@protocol NSCopying;


#import "TSCEAbstractGrid.h"
#import "TSCEValueGrid.h"

@interface TSCEDenseGrid : TSCEAbstractGrid <NSCopying>

 {
    TSCEValueGrid *_valueGrid;
    char _gridKind;
    BOOL _isFlattened;
}




-(?)flattenedGrid;
-(?)flattenedGridNoThrow;
-(?)subGridValueAtGridCoord:(?)arg0 width:(?)arg1 heightaccessContext;
-(?)valueAtGridCoordaccessContext;
-(?)valueAtIndexaccessContext;
-(BOOL)boolean:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(NSUInteger)count;
-(char)deepType:(*void)arg0 ;
-(char)gridKind;
-(char)nativeType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)date:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(id)error;
-(id)initWithValueGrid:(id)arg0 ;
-(id)initWithValues:(*void)arg0 ;
-(id)initWithValues:(*void)arg0 gridKind:(char)arg1 ;
-(id)initWithValues:(*void)arg0 gridKind:(char)arg1 isFlattened:(BOOL)arg2 ;
-(id)initWithValues:(*void)arg0 gridKind:(char)arg1 isFlattened:(BOOL)arg2 dimensions:(struct TSCEGridDimensions *)arg3 ;
-(id)rawString:(id)arg0 argIndex:(int)arg1 locale:(id)arg2 ;
-(id)string:(id)arg0 argIndex:(int)arg1 locale:(id)arg2 ;
-(struct TSCEGridDimensions )dimensions;
-(struct TSCENumberValue )number:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(struct TSCEReferenceValue )reference:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(struct TSCEValue )value;


@end


#endif