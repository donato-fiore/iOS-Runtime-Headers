// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMODIFYSTROKESCOMMAND_H
#define PKMODIFYSTROKESCOMMAND_H

@class NSArray;


#import "PKUndoCommand.h"

@interface PKModifyStrokesCommand : PKUndoCommand

@property (readonly, nonatomic) BOOL hide; // ivar: _hide
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes


+(id)commandForErasingAllStrokesInDrawing:(id)arg0 ;
+(id)commandForErasingStrokes:(id)arg0 drawing:(id)arg1 ;
+(id)commandForMakingStrokeVisible:(id)arg0 drawing:(id)arg1 hiding:(BOOL)arg2 ;
+(id)commandForMakingStrokesVisible:(id)arg0 drawing:(id)arg1 hiding:(BOOL)arg2 ;
-(id)description;
-(id)initWithStrokes:(id)arg0 drawingUUID:(id)arg1 actionName:(id)arg2 hiding:(BOOL)arg3 ;
-(id)invertedInDrawing:(id)arg0 ;
-(void)applyToDrawing:(id)arg0 ;


@end


#endif