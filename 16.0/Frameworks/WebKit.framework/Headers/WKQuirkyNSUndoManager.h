// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKQUIRKYNSUNDOMANAGER_H
#define WKQUIRKYNSUNDOMANAGER_H

@class NSUndoManager;


#import "WKContentView.h"

@interface WKQuirkyNSUndoManager : NSUndoManager

@property (readonly, weak) WKContentView *contentView; // ivar: _contentView


-(BOOL)canRedo;
-(BOOL)canUndo;
-(id)initWithContentView:(id)arg0 ;
-(void)redo;
-(void)undo;


@end


#endif