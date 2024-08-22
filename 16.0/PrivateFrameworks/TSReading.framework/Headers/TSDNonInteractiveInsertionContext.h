// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDNONINTERACTIVEINSERTIONCONTEXT_H
#define TSDNONINTERACTIVEINSERTIONCONTEXT_H



#import "TSDInsertionContext.h"

@interface TSDNonInteractiveInsertionContext : TSDInsertionContext



-(BOOL)fromDragToInsertController;
-(BOOL)hasPreferredCenter;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)insertWillBeDiscarded;
-(BOOL)isInteractive;
-(BOOL)isPreferredCenterRequired;
-(BOOL)shouldEndEditing;
-(struct CGPoint )preferredCenter;


@end


#endif