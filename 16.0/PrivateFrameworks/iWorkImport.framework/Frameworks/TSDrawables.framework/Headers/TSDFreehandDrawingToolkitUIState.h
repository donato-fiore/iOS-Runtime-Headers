// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDFREEHANDDRAWINGTOOLKITUISTATE_H
#define TSDFREEHANDDRAWINGTOOLKITUISTATE_H

@class TSPObject, TSUColor;



@interface TSDFreehandDrawingToolkitUIState : TSPObject {
    NSUInteger _mostRecentToolTypeToRestore;
    TSUColor *_penToolColor;
    CGFloat _penToolOpacity;
    CGFloat _penToolUnscaledWidth;
    TSUColor *_pencilToolColor;
    CGFloat _pencilToolOpacity;
    CGFloat _pencilToolUnscaledWidth;
    TSUColor *_crayonToolColor;
    CGFloat _crayonToolOpacity;
    CGFloat _crayonToolUnscaledWidth;
    TSUColor *_fillToolColor;
    CGFloat _fillToolOpacity;
    CGFloat _eraserToolScaledWidth;
    BOOL _eraserToolErasesWholeObjects;
}


@property (nonatomic) NSUInteger currentToolType; // ivar: _currentToolType
@property (readonly, nonatomic) NSUInteger mostRecentRestorableToolType; // ivar: _mostRecentRestorableToolType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFreehandDrawingToolkitUIState:(id)arg0 ;
-(CGFloat)p_defaultStrokeWidthForToolType:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)p_defaultToolType;
-(NSUInteger)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(NSUInteger)arg0 ;
-(id)copy;
-(id)initWithContext:(id)arg0 ;
-(id)p_defaultColorForToolType:(NSUInteger)arg0 ;
-(id)strokeWidthsForFreehandDrawingToolType:(NSUInteger)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_setColor:(id)arg0 forToolType:(NSUInteger)arg1 ;
-(void)p_setDefaultToolType:(NSUInteger)arg0 ;
-(void)p_setupDefaultValues;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif