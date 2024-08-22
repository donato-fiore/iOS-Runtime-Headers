// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTRUNDOMANAGER_H
#define TTRUNDOMANAGER_H

@class NSUndoManager, NSString;



@interface TTRUndoManager : NSUndoManager

@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, nonatomic) NSString *debug_redoStackDescription;
@property (readonly, nonatomic) NSString *debug_undoStackDescription;
@property (nonatomic) BOOL disableRemoveAllActions; // ivar: _disableRemoveAllActions
@property (retain, nonatomic) NSString *pendingActionName; // ivar: _pendingActionName


+(void)withActionName:(id)arg0 undoManager:(id)arg1 block:(id)arg2 ;
-(id)description;
-(id)initWithDebugIdentifier:(id)arg0 ;
-(void)_consumePendingActionName;
-(void)_registerLogUserAction:(id)arg0 ;
-(void)registerUndoWithTarget:(id)arg0 handler:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)removeAllActions;


@end


#endif