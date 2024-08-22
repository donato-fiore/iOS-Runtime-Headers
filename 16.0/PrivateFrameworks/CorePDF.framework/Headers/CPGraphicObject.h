// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPGRAPHICOBJECT_H
#define CPGRAPHICOBJECT_H

@class CPChunk<CPGraphicUser>;


#import "CPChunk.h"
#import "CPTextLine.h"
#import "CPParagraph.h"

@interface CPGraphicObject : CPChunk {
    CGRect renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPChunk<CPGraphicUser> *user;
}


@property (retain, nonatomic) CPParagraph *anchoringParagraph; // ivar: anchoringParagraph
@property (nonatomic) unsigned int clipIndex; // ivar: clipIndex


-(BOOL)canBeContainer;
-(BOOL)isInZoneBorder;
-(BOOL)isIndivisible;
-(BOOL)isNarrow;
-(BOOL)isVisible;
-(id)anchoringTextLine;
-(id)init;
-(id)user;
-(int)zoneGraphicType;
-(struct CGRect )renderedBounds;
-(unsigned short)unicode;
-(void)dealloc;
-(void)setAnchoringTextLine:(id)arg0 ;
-(void)setIsInZoneBorder:(BOOL)arg0 ;
-(void)setUser:(id)arg0 ;
-(void)setZoneGraphicType:(int)arg0 ;


@end


#endif