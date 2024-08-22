// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDRAGINSERTIONCONTEXT_H
#define TSDDRAGINSERTIONCONTEXT_H



#import "TSDInsertionContext.h"

@interface TSDDragInsertionContext : TSDInsertionContext {
    CGPoint mPreferredCenter;
    BOOL mPreferredCenterRequired;
    BOOL mShouldEndEditing;
    BOOL mFromDragToInsertController;
    BOOL mInsertWillBeDiscarded;
}




-(BOOL)fromDragToInsertController;
-(BOOL)hasPreferredCenter;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)insertWillBeDiscarded;
-(BOOL)isInteractive;
-(BOOL)isPreferredCenterRequired;
-(BOOL)shouldEndEditing;
-(id)init;
-(id)initWithPreferredCenter:(struct CGPoint )arg0 required:(BOOL)arg1 shouldEndEditing:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertWillBeDiscarded:(BOOL)arg4 ;
-(struct CGPoint )preferredCenter;


@end


#endif