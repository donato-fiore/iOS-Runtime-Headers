// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMODIFYSTROKESGROUPIDCOMMAND_H
#define PKMODIFYSTROKESGROUPIDCOMMAND_H

@class NSUUID, NSArray;


#import "PKUndoCommand.h"

@interface PKModifyStrokesGroupIDCommand : PKUndoCommand

@property (readonly, nonatomic) NSUUID *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSUUID *oldGroupID; // ivar: _oldGroupID
@property (readonly, nonatomic) NSArray *strokes; // ivar: _strokes


+(id)commandForModifyingStrokes:(id)arg0 drawing:(id)arg1 groupID:(id)arg2 actionName:(id)arg3 ;
-(id)applyToDrawingReturnInverted:(id)arg0 ;
-(id)description;
-(id)initWithStrokes:(id)arg0 drawingUUID:(id)arg1 actionName:(id)arg2 groupID:(id)arg3 oldGroupID:(id)arg4 ;
-(id)invertedInDrawing:(id)arg0 ;
-(void)applyToDrawing:(id)arg0 ;


@end


#endif