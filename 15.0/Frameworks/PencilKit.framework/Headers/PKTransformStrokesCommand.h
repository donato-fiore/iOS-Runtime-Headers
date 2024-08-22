// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSFORMSTROKESCOMMAND_H
#define PKTRANSFORMSTROKESCOMMAND_H

@class NSArray;


#import "PKUndoCommand.h"

@interface PKTransformStrokesCommand : PKUndoCommand

@property (readonly, nonatomic) CGAffineTransform strokeTransform; // ivar: _strokeTransform
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes


+(id)commandForTransforming:(id)arg0 drawing:(id)arg1 strokeTransform:(struct CGAffineTransform )arg2 ;
-(id)description;
-(id)initWithStrokes:(id)arg0 drawingUUID:(id)arg1 actionName:(id)arg2 strokeTransform:(struct CGAffineTransform )arg3 ;
-(id)invertedInDrawing:(id)arg0 ;
-(void)applyToDrawing:(id)arg0 ;


@end


#endif