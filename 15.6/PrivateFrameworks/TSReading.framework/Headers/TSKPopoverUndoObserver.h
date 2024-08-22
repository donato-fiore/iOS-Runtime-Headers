// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKPOPOVERUNDOOBSERVER_H
#define TSKPOPOVERUNDOOBSERVER_H

@class NSMutableSet, NSUndoManager;

#import <Foundation/Foundation.h>


@interface TSKPopoverUndoObserver : NSObject {
    NSMutableSet *mPopoverBasedViewControllers;
    NSMutableSet *mPopoverControllers;
}


@property (retain, nonatomic) NSUndoManager *observedUndoManager; // ivar: mUndoManager


+(id)sharedObserver;
-(id)init;
-(void)addPopoverBasedViewController:(id)arg0 ;
-(void)addPopoverController:(id)arg0 ;
-(void)dealloc;
-(void)removePopoverBasedViewController:(id)arg0 ;
-(void)removePopoverController:(id)arg0 ;
-(void)undoManagerWillRedo:(id)arg0 ;
-(void)undoManagerWillUndo:(id)arg0 ;


@end


#endif