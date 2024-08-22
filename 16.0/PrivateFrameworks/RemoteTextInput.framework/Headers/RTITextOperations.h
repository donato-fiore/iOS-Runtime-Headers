// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTITEXTOPERATIONS_H
#define RTITEXTOPERATIONS_H

@class NSAttributedString, NSDictionary, NSString, NSMutableArray, TIKeyboardIntermediateText, TIKeyboardOutput, NSArray, NSMutableDictionary;
@protocol NSSecureCoding, RTICustomDataProtocol;

#import <Foundation/Foundation.h>

#import "RTIInputSourceState.h"
#import "RTIStyledIntermediateText.h"

@interface RTITextOperations : NSObject <NSSecureCoding, RTICustomDataProtocol>



@property (readonly, nonatomic) NSAttributedString *attributedInsertionText;
@property (retain, nonatomic) NSDictionary *attributedPlaceholders; // ivar: _attributedPlaceholders
@property (retain, nonatomic) NSObject<NSSecureCoding> *customInfo; // ivar: _customInfo
@property (retain, nonatomic) NSString *customInfoType; // ivar: _customInfoType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SEL editingActionSelector; // ivar: _editingActionSelector
@property (retain, nonatomic) NSMutableArray *fileHandles; // ivar: _fileHandles
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *imageUserInfos; // ivar: _imageUserInfos
@property (retain, nonatomic) RTIInputSourceState *inputSourceState; // ivar: _inputSourceState
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText; // ivar: _intermediateText
@property (readonly, nonatomic) TIKeyboardOutput *keyboardOutput; // ivar: _keyboardOutput
@property (retain, nonatomic) NSArray *multilingualLanguages; // ivar: _multilingualLanguages
@property (readonly, nonatomic) NSMutableDictionary *mutableAttributedPlaceholders;
@property (nonatomic) _NSRange selectionRangeToAssert; // ivar: _selectionRangeToAssert
@property (retain, nonatomic) RTIStyledIntermediateText *styledIntermediateText; // ivar: _styledIntermediateText
@property (readonly) Class superclass;
@property (copy, nonatomic) NSAttributedString *textCheckingAnnotatedString; // ivar: _textCheckingAnnotatedString
@property (nonatomic) _NSRange textCheckingAnnotationRange; // ivar: _textCheckingAnnotationRange
@property (nonatomic) _NSRange textCheckingAnnotationRemovalRange; // ivar: _textCheckingAnnotationRemovalRange
@property (copy, nonatomic) NSString *textCheckingAnnotationToRemove; // ivar: _textCheckingAnnotationToRemove
@property (nonatomic) _NSRange textCheckingReplacementRange; // ivar: _textCheckingReplacementRange
@property (copy, nonatomic) NSString *textToAssert; // ivar: _textToAssert
@property (retain, nonatomic) NSMutableArray *typeIdentifiers; // ivar: _typeIdentifiers


+(BOOL)supportsSecureCoding;
+(void)registerCustomInfoClasses:(id)arg0 forType:(id)arg1 ;
+(void)unregisterCustomInfoType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_createAttributedPlaceholdersIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateImagesAndUserInfosUsingBlock:(id)arg0 ;
-(void)enumerateImagesUsingBlock:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 replacementRange:(struct _NSRange )arg1 ;
-(void)insertImageWithFileHandle:(id)arg0 typeIdentifier:(id)arg1 ;
-(void)insertImageWithFileHandle:(id)arg0 typeIdentifier:(id)arg1 imageUserInfo:(id)arg2 ;
-(void)insertText:(id)arg0 replacementRange:(struct _NSRange )arg1 ;


@end


#endif