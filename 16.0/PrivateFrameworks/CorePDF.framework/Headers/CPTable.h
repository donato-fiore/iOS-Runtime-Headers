// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPTABLE_H
#define CPTABLE_H

@protocol CPDisposable, CPGraphicUser;


#import "CPChunk.h"

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser>

 {
    unsigned int rowCount;
    unsigned int columnCount;
    *CGColor backgroundColor;
    *id backgroundGraphics;
    unsigned int usedGraphicCount;
    BOOL disposed;
}


@property (readonly, nonatomic) unsigned int backgroundGraphicCount; // ivar: backgroundGraphicCount
@property (nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) *CGFloat columnX; // ivar: columnX
@property (nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) *CGFloat rowY; // ivar: rowY
@property (readonly, nonatomic) CGRect tableBounds; // ivar: tableBounds


-(id)backgroundGraphicAtIndex:(unsigned int)arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(struct CGColor *)backgroundColor;
-(unsigned int)usedGraphicCount;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)incrementUsedGraphicCount;
-(void)setBackgroundGraphics:(id)arg0 ;


@end


#endif