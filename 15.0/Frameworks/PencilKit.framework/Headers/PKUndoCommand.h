// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKUNDOCOMMAND_H
#define PKUNDOCOMMAND_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface PKUndoCommand : NSObject

@property (copy, nonatomic) NSString *actionName; // ivar: _actionName
@property (readonly, nonatomic) BOOL changesVisibleStrokes; // ivar: _changesVisibleStrokes
@property (readonly, nonatomic) NSUUID *drawingUUID; // ivar: _drawingUUID


-(id)applyToDrawingReturnInverted:(id)arg0 ;
-(id)initWithDrawingUUID:(id)arg0 actionName:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg0 actionName:(id)arg1 changesVisibleStrokes:(BOOL)arg2 ;
-(id)inverted;
-(id)invertedInDrawing:(id)arg0 ;
-(id)strokes;
-(void)applyToDrawing:(id)arg0 ;
-(void)registerWithUndoManager:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;


@end


#endif