// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCRO2DBRAILLECANVAS_H
#define SCRO2DBRAILLECANVAS_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>

#import "SCRO2DBrailleCanvasDescriptor.h"

@interface SCRO2DBrailleCanvas : NSObject {
    NSArray *_pins;
    NSData *_imageData;
    NSData *_brailleTextData;
    NSUInteger _numberOfTextLines;
}


@property (readonly) SCRO2DBrailleCanvasDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NSData *imageData;


-(BOOL)_canBlitCellAtX:(NSUInteger)arg0 y:(NSUInteger)arg1 ;
-(BOOL)hasConsistentHorizontalPinSpacing;
-(BOOL)hasConsistentVerticalPinSpacing;
-(BOOL)skipPinBetweenCellsHorizontally;
-(BOOL)skipPinBetweenCellsVertically;
-(BOOL)supportsBrailleText;
-(CGFloat)horizontalPinSpacing;
-(CGFloat)interCellHorizontalSpacing;
-(CGFloat)interCellVerticalSpacing;
-(CGFloat)verticalPinSpacing;
-(NSUInteger)_numberOfTextLines;
-(NSUInteger)_textDisplayHeight;
-(NSUInteger)cellHeight;
-(NSUInteger)cellWidth;
-(NSUInteger)detentCount;
-(NSUInteger)height;
-(NSUInteger)pinHeightStyle;
-(NSUInteger)width;
-(id)_pinForX:(NSUInteger)arg0 y:(NSUInteger)arg1 ;
-(id)debugAsciiCanvas;
-(id)init;
-(id)initWithCanvasDescriptor:(id)arg0 ;
// -(unk)_fullyDownPinState:(id)arg0  ;
// -(unk)_fullyUpPinState:(id)arg0  ;
// -(unk)pinStateForX:(id)arg0 y:(SEL)arg1  ;
-(void)_blitBMP;
-(void)_blitCell:(unsigned char)arg0 AtX:(NSUInteger)arg1 y:(NSUInteger)arg2 ;
-(void)_blitText;
-(void)_clearCells;
-(void)_updateCells;
-(void)_updateTextCells;
-(void)setBrailleText:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)setNumberOfTextLines:(NSInteger)arg0 ;
// -(void)setPinState:(unk)arg0 forX:(NSUInteger)arg1 y:(float)arg2  ;


@end


#endif