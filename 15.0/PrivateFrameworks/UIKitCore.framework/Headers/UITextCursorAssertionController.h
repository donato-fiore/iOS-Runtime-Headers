// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTCURSORASSERTIONCONTROLLER_H
#define UITEXTCURSORASSERTIONCONTROLLER_H

@class NSHashTable;
@protocol UITextCursorAssertionControllerSubject;

#import <Foundation/Foundation.h>


@interface UITextCursorAssertionController : NSObject {
    NSHashTable *_assertions;
}


@property (weak, nonatomic) NSObject<UITextCursorAssertionControllerSubject> *subject; // ivar: _subject


-(id)_createAssertionWithReason:(id)arg0 options:(NSUInteger)arg1 ;
-(id)debugDescription;
-(id)nonBlinkingAssertionWithReason:(id)arg0 ;
-(id)nonBlinkingGhostAssertionWithReason:(id)arg0 ;
-(id)nonVisibleAssertionWithReason:(id)arg0 ;
-(void)_beginTrackingAssertion:(id)arg0 ;
-(void)_endTrackingAssertion:(id)arg0 ;
-(void)_updateSubjectWithAssertionState;
-(void)dealloc;


@end


#endif