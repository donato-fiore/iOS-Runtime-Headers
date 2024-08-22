// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8PAPERKITP33_745DA07C2AB299ADF5B7B63B4181D3F122PKCOHERENCEUNDOCOMMAND_H
#define _TTC8PAPERKITP33_745DA07C2AB299ADF5B7B63B4181D3F122PKCOHERENCEUNDOCOMMAND_H

@class PKUndoCommand;



@interface _TtC8PaperKitP33_745DA07C2AB299ADF5B7B63B4181D3F122PKCoherenceUndoCommand : PKUndoCommand {
    ? undo;
}




-(id)applyToDrawingReturnInverted:(id)arg0 ;
-(id)init;
-(id)initWithDrawingUUID:(id)arg0 actionName:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg0 actionName:(id)arg1 changesVisibleStrokes:(BOOL)arg2 ;
-(void)applyToDrawing:(id)arg0 ;


@end


#endif