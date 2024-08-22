// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEREFERENCEBACKEDGRID_H
#define TSCEREFERENCEBACKEDGRID_H

@protocol NSCopying;


#import "TSCEAbstractGrid.h"
#import "TSCEEvalRef.h"

@interface TSCEReferenceBackedGrid : TSCEAbstractGrid <NSCopying>

 {
    TSCEEvalRef *_evalRef;
    TSCECellTractRefCore _apparentTractRef;
}




-(?)flattenedGrid;
-(?)flattenedGridNoThrow;
-(?)formatAtIndexaccessContext;
-(?)subGridValueAtGridCoord:(?)arg0 width:(?)arg1 heightaccessContext;
-(?)valueAtGridCoordaccessContext;
-(?)valueAtIndexNoThrowaccessContext;
-(?)valueAtIndexaccessContext;
-(NSUInteger)count;
-(char)deepType:(*void)arg0 ;
-(char)gridKind;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWitRefValue:(struct TSCEReferenceValue *)arg0 rangeContext:(unsigned char)arg1 ;
-(id)string:(id)arg0 argIndex:(int)arg1 locale:(id)arg2 ;
-(struct TSCEGridDimensions )dimensions;
-(struct TSCEReferenceValue )reference:(id)arg0 argIndex:(int)arg1 evaluationContext:(*void)arg2 ;
-(struct TSCEValue )value;
-(struct TSKUIDStruct )tableUID;
-(unsigned int)height;
-(unsigned int)width;


@end


#endif