// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHTEXTINPUTTARGETCONTENTINFO_H
#define CHTEXTINPUTTARGETCONTENTINFO_H

@class NSIndexSet, NSString;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>

#import "CHTextInputTarget.h"

@interface CHTextInputTargetContentInfo : NSObject <NSMutableCopying>



@property (readonly, nonatomic) _NSRange activePreviewRange; // ivar: _activePreviewRange
@property (readonly, nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (readonly, nonatomic) int autoCorrectionMode; // ivar: _autoCorrectionMode
@property (readonly, nonatomic) *CGRect characterRectsInReferenceSubstring; // ivar: _characterRectsInReferenceSubstring
@property (readonly, nonatomic) BOOL containsCommittedStrokes; // ivar: _containsCommittedStrokes
@property (readonly, nonatomic) int contentType; // ivar: _contentType
@property (readonly, nonatomic) BOOL isCursorStrong; // ivar: _isCursorStrong
@property (readonly, nonatomic) BOOL isSingleLine; // ivar: _isSingleLine
@property (readonly, nonatomic) NSInteger lastCharacterLevelPosition; // ivar: _lastCharacterLevelPosition
@property (readonly, copy, nonatomic) NSIndexSet *protectedCharacterIndexes; // ivar: _protectedCharacterIndexes
@property (readonly, copy, nonatomic) NSString *referenceSubstring; // ivar: _referenceSubstring
@property (readonly, nonatomic) _NSRange referenceSubstringRange; // ivar: _referenceSubstringRange
@property (readonly, nonatomic) _NSRange selectedTextRange; // ivar: _selectedTextRange
@property (readonly, nonatomic) _NSRange strokeCoveredTextRange; // ivar: _strokeCoveredTextRange
@property (readonly, nonatomic) BOOL supportsAutoLineBreaks; // ivar: _supportsAutoLineBreaks
@property (readonly, nonatomic) NSInteger textContentLength; // ivar: _textContentLength
@property (readonly, nonatomic) CHTextInputTarget *textInputTarget; // ivar: _textInputTarget


-(NSInteger)absoluteLocationFromRelativeLocation:(NSInteger)arg0 ;
-(NSInteger)relativeLocationFromAbsoluteLocation:(NSInteger)arg0 ;
-(id)_initWithTextInputTarget:(id)arg0 contentLength:(NSInteger)arg1 referenceSubstring:(id)arg2 referenceSubstringRange:(struct _NSRange )arg3 charRectsInReferenceSubstring:(struct CGRect *)arg4 strokeCoveredTextRange:(struct _NSRange )arg5 selectedTextRange:(struct _NSRange )arg6 isCursorStrong:(BOOL)arg7 activePreviewRange:(struct _NSRange )arg8 contentType:(int)arg9 autoCapitalizationMode:(int)arg10 autoCorrectionMode:(int)arg11 isSingleLine:(BOOL)arg12 lastCharacterLevelPosition:(NSInteger)arg13 protectedCharacterIndexes:(id)arg14 ;
-(id)description;
-(id)initWithTextInputTarget:(id)arg0 contentLength:(NSInteger)arg1 referenceSubstring:(id)arg2 referenceSubstringRange:(struct _NSRange )arg3 charRectsInReferenceSubstring:(struct CGRect *)arg4 strokeCoveredTextRange:(struct _NSRange )arg5 selectedTextRange:(struct _NSRange )arg6 activePreviewRange:(struct _NSRange )arg7 contentType:(int)arg8 lastCharacterLevelPosition:(NSInteger)arg9 ;
-(id)initWithTextInputTarget:(id)arg0 contentLength:(NSInteger)arg1 referenceSubstring:(id)arg2 referenceSubstringRange:(struct _NSRange )arg3 charRectsInReferenceSubstring:(struct CGRect *)arg4 strokeCoveredTextRange:(struct _NSRange )arg5 selectedTextRange:(struct _NSRange )arg6 isCursorStrong:(BOOL)arg7 activePreviewRange:(struct _NSRange )arg8 contentType:(int)arg9 autoCapitalizationMode:(int)arg10 autoCorrectionMode:(int)arg11 isSingleLine:(BOOL)arg12 lastCharacterLevelPosition:(NSInteger)arg13 ;
-(id)initWithTextInputTarget:(id)arg0 contentLength:(NSInteger)arg1 referenceSubstring:(id)arg2 referenceSubstringRange:(struct _NSRange )arg3 charRectsInReferenceSubstring:(struct CGRect *)arg4 strokeCoveredTextRange:(struct _NSRange )arg5 selectedTextRange:(struct _NSRange )arg6 isCursorStrong:(BOOL)arg7 activePreviewRange:(struct _NSRange )arg8 contentType:(int)arg9 isSingleLine:(BOOL)arg10 lastCharacterLevelPosition:(NSInteger)arg11 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)referenceSubstringInRange:(struct _NSRange )arg0 ;
-(struct CGRect )characterRectForCharacterIndex:(NSInteger)arg0 ;
-(struct CGRect )unionCharacterRects;
-(struct CGRect )visualCharacterRectForCharacterIndex:(NSInteger)arg0 ;
-(struct _NSRange )referenceSubstringRangeOfComposedCharacterAtIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateCharacterRectsInRange:(struct _NSRange )arg0 block:(id)arg1 ;
-(void)enumerateCharacterRectsInRange:(struct _NSRange )arg0 reverse:(BOOL)arg1 block:(id)arg2 ;


@end


#endif