// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXACTION_H
#define PXACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXAction : NSObject

@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSString *actionNameLocalizationKey; // ivar: _actionNameLocalizationKey
@property (readonly, nonatomic) NSString *actionSystemImageName; // ivar: _actionSystemImageName
@property (readonly) BOOL executionStarted; // ivar: _executionStarted
@property (readonly, nonatomic) NSString *localizedActionName; // ivar: _localizedActionName
@property (readonly, nonatomic) NSString *redoMenuItemTitle; // ivar: _redoMenuItemTitle
@property (readonly, nonatomic) NSString *undoMenuItemTitle; // ivar: _undoMenuItemTitle


-(void)_performRedoWithUndoManager:(id)arg0 ;
-(void)_performUndoWithUndoManager:(id)arg0 ;
-(void)_registerRedoWithUndoManager:(id)arg0 ;
-(void)_registerUndoWithUndoManager:(id)arg0 ;
-(void)_unregisterFromUndoManager:(id)arg0 ;
-(void)_updateNameWithUndoManager:(id)arg0 ;
-(void)executeWithUndoManager:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;
-(void)registerWithUndoManager:(id)arg0 ;
-(void)removeAllActionsFromUndoManager:(id)arg0 ;


@end


#endif