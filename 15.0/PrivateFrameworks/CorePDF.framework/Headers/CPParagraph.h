// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPPARAGRAPH_H
#define CPPARAGRAPH_H



#import "CPRegion.h"
#import "CPParagraphListItem.h"

@interface CPParagraph : CPRegion {
    BOOL noIndentation;
    BOOL below;
    NSUInteger alignment;
    BOOL hasDropCap;
    id *flowProperties;
    CGFloat preformatWidth;
}


@property (retain, nonatomic) CPParagraphListItem *listItem; // ivar: listItem


-(BOOL)below;
-(BOOL)hasDropCap;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isImageRegion;
-(BOOL)isListItemRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isPreformattedWithUnitWidth:(*CGFloat)arg0 ;
-(BOOL)isRowRegion;
-(BOOL)isShapeRegion;
-(BOOL)isTextRegion;
-(BOOL)noIndentation;
-(CGFloat)selectionBottom;
-(NSUInteger)alignment;
-(NSUInteger)index;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flowProperties;
-(id)init;
-(struct CGRect )reducedBounds;
-(void)accept:(id)arg0 ;
-(void)dealloc;
-(void)explode;
-(void)setAlignment:(NSUInteger)arg0 ;
-(void)setBelow:(BOOL)arg0 ;
-(void)setFlowProperties:(id)arg0 ;
-(void)setHasDropCap:(BOOL)arg0 ;
-(void)setIsImageRegion:(BOOL)arg0 ;
-(void)setIsTextRegion:(BOOL)arg0 ;
-(void)setNoIndentation:(BOOL)arg0 ;


@end


#endif