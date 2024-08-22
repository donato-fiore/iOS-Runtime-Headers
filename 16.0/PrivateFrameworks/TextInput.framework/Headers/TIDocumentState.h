// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIDOCUMENTSTATE_H
#define TIDOCUMENTSTATE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TIDocumentState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *contextAfterInput; // ivar: _contextAfterInput
@property (readonly, nonatomic) NSString *contextBeforeInput; // ivar: _contextBeforeInput
@property (readonly, nonatomic) NSString *markedText; // ivar: _markedText
@property (readonly, nonatomic) _NSRange selectedRangeInMarkedText; // ivar: _selectedRangeInMarkedText
@property (readonly, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (readonly, nonatomic) NSString *string;


+(BOOL)supportsSecureCoding;
+(id)_selectedTextByDeletingInteriorSentences:(id)arg0 ;
+(id)_string:(id)arg0 byTrimmingWordsAfterIndex:(NSUInteger)arg1 ;
+(id)_string:(id)arg0 byTrimmingWordsBeforeIndex:(NSUInteger)arg1 ;
+(id)documentStateForTestingWithContextBefore:(id)arg0 selectedText:(id)arg1 contextAfter:(id)arg2 ;
+(id)documentStateForTestingWithContextBefore:(id)arg0 selectedText:(id)arg1 contextAfter:(id)arg2 markedText:(id)arg3 selectedRangeInMarkedText:(struct _NSRange )arg4 ;
+(id)documentStateForTestingWithText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
+(id)documentStateWithContextBefore:(id)arg0 markedText:(id)arg1 selectedRange:(struct _NSRange )arg2 contextAfter:(id)arg3 ;
+(id)documentStateWithContextBefore:(id)arg0 selectedText:(id)arg1 contextAfter:(id)arg2 ;
+(id)unboundedDocumentStateForTestingWithContextBefore:(id)arg0 selectedText:(id)arg1 contextAfter:(id)arg2 ;
-(BOOL)deletingBackwardsWillRemoveText;
-(BOOL)documentIsEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringMarkedText:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)hashString:(id)arg0 intoHashValue:(NSUInteger)arg1 ;
-(NSUInteger)inputIndexWithTerminatorPredicate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)documentStateAfterCollapsingSelection;
-(id)documentStateAfterCursorAdjustment:(NSInteger)arg0 ;
-(id)documentStateAfterDeletingBackward;
-(id)documentStateAfterDeletingForward;
-(id)documentStateAfterInsertingText:(id)arg0 ;
-(id)documentStateAfterInsertingTextAfterSelection:(id)arg0 ;
-(id)documentStateAfterReplacingText:(id)arg0 withText:(id)arg1 ;
-(id)documentStateAfterSettingMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(id)documentStateAfterUnmarkingText;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextBefore:(id)arg0 markedText:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 selectedRangeInMarkedText:(struct _NSRange )arg4 ;
-(id)initWithText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(id)initWithUnboundedContextBefore:(id)arg0 markedText:(id)arg1 selectedText:(id)arg2 unboundedContextAfter:(id)arg3 selectedRangeInMarkedText:(struct _NSRange )arg4 ;
-(id)inputStemWithTerminatorPredicate:(id)arg0 ;
-(id)inputStringWithTerminatorPredicate:(id)arg0 ;
// -(id)wordPrefixOfString:(id)arg0 withTerminatorPredicate:(id)arg1 reverse:(unk)arg2  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif