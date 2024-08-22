// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCUNDOMANAGER_H
#define DOCUNDOMANAGER_H

@class NSUndoManager;



@interface DOCUndoManager : NSUndoManager

@property (nonatomic) BOOL shouldRemoveAllActions; // ivar: _shouldRemoveAllActions


+(id)shared;
-(BOOL)isActionOperation:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)didPerformUndoableOperation;
-(void)registerUndoOperationForSender:(id)arg0 ;
-(void)startUndoNotificationsObservation;
-(void)stopUndoNotificationsObservation;


@end


#endif