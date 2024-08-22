// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPTABLECELL_H
#define CPTABLECELL_H

@protocol CPDisposable;


#import "CPChunk.h"

@interface CPTableCell : CPChunk <CPDisposable>

 {
    *? borders;
    *CGColor backgroundColor;
    *id backgroundGraphics;
}


@property (readonly, nonatomic) unsigned int backgroundGraphicCount; // ivar: backgroundGraphicCount
@property (readonly, nonatomic) CGRect cellBounds; // ivar: cellBounds
@property (nonatomic) ? columnSpan; // ivar: columnSpan
@property (nonatomic) ? rowSpan; // ivar: rowSpan


-(NSInteger)compareCellOrdinal:(id)arg0 ;
-(id)backgroundGraphicAtIndex:(unsigned int)arg0 ;
-(id)graphicObjectOfBorder:(int)arg0 atIndex:(unsigned int)arg1 ;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(struct CGColor *)backgroundColor;
-(struct CGColor *)colorOfBorder:(int)arg0 ;
-(struct CGRect )boundsOfBorder:(int)arg0 ;
-(unsigned int)graphicCountOfBorder:(int)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)setBackgroundGraphics:(id)arg0 ;
-(void)setBorder:(int)arg0 bounds:(struct CGRect )arg1 graphics:(id)arg2 ;


@end


#endif