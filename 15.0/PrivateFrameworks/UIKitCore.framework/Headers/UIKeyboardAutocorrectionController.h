// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDAUTOCORRECTIONCONTROLLER_H
#define UIKEYBOARDAUTOCORRECTIONCONTROLLER_H

@class NSHashTable, TIKeyboardCandidate, TIAutocorrectionList;

#import <Foundation/Foundation.h>


@interface UIKeyboardAutocorrectionController : NSObject {
    NSUInteger _signpostToken;
    BOOL _requestedAutocorrection;
    BOOL _needsAutocorrection;
    BOOL _hasPendingAutocorrection;
    NSHashTable *_autocorrectionObservers;
}


@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList; // ivar: _autocorrectionList
@property (readonly, nonatomic) BOOL hasActiveObservers;
@property (nonatomic) NSUInteger maximumNumberOfCandidates; // ivar: _maximumNumberOfCandidates
@property (readonly, nonatomic) BOOL requestedAutocorrection;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList; // ivar: _textSuggestionList


-(BOOL)hasAutocorrection;
-(BOOL)hasAutofillCandidates;
-(BOOL)hasContinuousPathConversions;
-(BOOL)hasProactiveCandidates;
-(BOOL)hasTextSuggestionCandidates;
-(id)init;
-(void)addAutocorrectionObserver:(id)arg0 ;
-(void)clearAutocorrection;
-(void)clearAutocorrectionAndNotifyObservers:(BOOL)arg0 ;
-(void)clearAutofillAndTextSuggestions;
-(void)removeAutocorrectionObserver:(id)arg0 ;
-(void)requestAutocorrectionWithExecutionContext:(id)arg0 ;
-(void)setNeedsAutocorrection;
-(void)updateAfterShiftStateChange;


@end


#endif