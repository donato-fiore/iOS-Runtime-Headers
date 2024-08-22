// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPREGION_H
#define CPREGION_H



#import "CPChunk.h"
#import "CPRegion.h"

@interface CPRegion : CPChunk {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id *link;
}




-(BOOL)isBodyZone;
-(BOOL)isBoxRegion;
-(BOOL)isCompoundShape;
-(BOOL)isGraphicalRegion;
-(BOOL)isImageRegion;
-(BOOL)isIndivisible;
-(BOOL)isListItemRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isRotated;
-(BOOL)isRowRegion;
-(BOOL)isShapeRegion;
-(BOOL)isTableCellRegion;
-(BOOL)isTextRegion;
-(BOOL)isZone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)link;
-(id)nextRegion;
-(int)order;
-(void)accept:(id)arg0 ;
-(void)dealloc;
-(void)setIsCompoundShape:(BOOL)arg0 ;
-(void)setIsImageRegion:(BOOL)arg0 ;
-(void)setIsTextRegion:(BOOL)arg0 ;
-(void)setLink:(id)arg0 ;
-(void)setNextRegion:(id)arg0 ;
-(void)setOrder:(int)arg0 ;


@end


#endif