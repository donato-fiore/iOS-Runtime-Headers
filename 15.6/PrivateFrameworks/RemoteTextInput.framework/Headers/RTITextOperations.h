// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTITEXTOPERATIONS_H
#define RTITEXTOPERATIONS_H

@class NSAttributedString, NSDictionary, TIKeyboardIntermediateText, TIKeyboardOutput, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTIStyledIntermediateText.h"

@interface RTITextOperations : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSAttributedString *attributedInsertionText;
@property (retain, nonatomic) NSDictionary *attributedPlaceholders; // ivar: _attributedPlaceholders
@property (nonatomic) SEL editingActionSelector; // ivar: _editingActionSelector
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText; // ivar: _intermediateText
@property (readonly, nonatomic) TIKeyboardOutput *keyboardOutput; // ivar: _keyboardOutput
@property (readonly, nonatomic) NSMutableDictionary *mutableAttributedPlaceholders;
@property (nonatomic) _NSRange selectionRangeToAssert; // ivar: _selectionRangeToAssert
@property (retain, nonatomic) RTIStyledIntermediateText *styledIntermediateText; // ivar: _styledIntermediateText
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString; // ivar: _textCheckingAnnotatedString
@property (nonatomic) _NSRange textCheckingAnnotationRange; // ivar: _textCheckingAnnotationRange
@property (nonatomic) _NSRange textCheckingAnnotationRemovalRange; // ivar: _textCheckingAnnotationRemovalRange
@property (copy, nonatomic) NSString *textCheckingAnnotationToRemove; // ivar: _textCheckingAnnotationToRemove
@property (nonatomic) _NSRange textCheckingReplacementRange; // ivar: _textCheckingReplacementRange
@property (copy, nonatomic) NSString *textToAssert; // ivar: _textToAssert


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_createAttributedPlaceholdersIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 replacementRange:(struct _NSRange )arg1 ;
-(void)insertText:(id)arg0 replacementRange:(struct _NSRange )arg1 ;


@end


#endif