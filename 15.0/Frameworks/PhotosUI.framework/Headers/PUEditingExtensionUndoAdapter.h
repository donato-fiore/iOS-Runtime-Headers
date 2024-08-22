// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITINGEXTENSIONUNDOADAPTER_H
#define PUEDITINGEXTENSIONUNDOADAPTER_H

@class NSString, NSUndoManager;
@protocol PUEditingExtensionUndoTarget, PUEditingExtensionUndoButtonHost;

#import <Foundation/Foundation.h>


@interface PUEditingExtensionUndoAdapter : NSObject <PUEditingExtensionUndoTarget>



@property (readonly, nonatomic) NSObject<PUEditingExtensionUndoButtonHost> *buttonHost; // ivar: _buttonHost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(id)initWithButtonHost:(id)arg0 ;
-(void)_registerForUndoManagerNotifications:(id)arg0 ;
-(void)_unregisterForUndoManagerNotifications:(id)arg0 ;
-(void)_updateButtonState;
-(void)performRedo;
-(void)performUndo;


@end


#endif