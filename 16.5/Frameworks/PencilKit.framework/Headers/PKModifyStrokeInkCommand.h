// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMODIFYSTROKEINKCOMMAND_H
#define PKMODIFYSTROKEINKCOMMAND_H

@class NSArray;


#import "PKUndoCommand.h"

@interface PKModifyStrokeInkCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *inks; // ivar: _inks
@property (readonly, nonatomic) NSArray *oldInks; // ivar: _oldInks
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes


+(id)commandForModifyingStrokes:(id)arg0 drawing:(id)arg1 inks:(id)arg2 ;
-(id)applyToDrawingReturnInverted:(id)arg0 ;
-(id)description;
-(id)initWithStrokes:(id)arg0 drawingUUID:(id)arg1 actionName:(id)arg2 inks:(id)arg3 oldInks:(id)arg4 ;
-(id)invertedInDrawing:(id)arg0 ;
-(void)applyToDrawing:(id)arg0 ;


@end


#endif