// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTCHECKINGCONTROLLER_H
#define UITEXTCHECKINGCONTROLLER_H

@protocol UITextCheckingClient;

#import <Foundation/Foundation.h>

#import "UITextChecker.h"

@interface UITextCheckingController : NSObject {
    id<UITextCheckingClient> *_client;
    UITextChecker *_textChecker;
    _NSRange _selectedRangeFromPreviousUnchecked;
    __tccClientFlags _tccClientFlags;
}


@property (readonly) NSObject<UITextCheckingClient> *client;


-(BOOL)continuousSpellCheckingEnabled;
-(BOOL)foundApostropheAfterRange:(struct _NSRange )arg0 ;
-(id)initWithClient:(id)arg0 ;
-(id)keyboardLanguages;
-(id)textChecker;
-(id)validAnnotations;
-(struct _NSRange )nsRangeForTextRange:(id)arg0 ;
-(struct _NSRange )selectedRange;
-(void)checkSpellingForSelectionChangeFromRange:(struct _NSRange )arg0 ;
-(void)checkSpellingForWordInRange:(id)arg0 ;
-(void)considerTextCheckingForRange:(id)arg0 ;
-(void)dealloc;
-(void)didChangeSelectionFromRange:(id)arg0 ;
-(void)didChangeTextInRange:(id)arg0 ;
-(void)insertedTextInRange:(id)arg0 ;
-(void)invalidate;
-(void)preheatTextChecker;
-(void)removeSpellingMarkersFromWordInRange:(id)arg0 ;


@end


#endif