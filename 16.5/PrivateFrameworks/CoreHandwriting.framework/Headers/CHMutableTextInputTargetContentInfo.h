// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHMUTABLETEXTINPUTTARGETCONTENTINFO_H
#define CHMUTABLETEXTINPUTTARGETCONTENTINFO_H

@class NSIndexSet;
@protocol NSCopying;


#import "CHTextInputTargetContentInfo.h"
#import "CHTextInputTarget.h"

@interface CHMutableTextInputTargetContentInfo : CHTextInputTargetContentInfo <NSCopying>



@property (nonatomic) _NSRange activePreviewRange;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) BOOL containsCommittedStrokes;
@property (nonatomic) int contentType;
@property (nonatomic) BOOL isCursorStrong;
@property (nonatomic) BOOL isSingleLine;
@property (nonatomic) NSInteger lastCharacterLevelPosition;
@property (copy, nonatomic) NSIndexSet *protectedCharacterIndexes;
@property (nonatomic) _NSRange selectedTextRange;
@property (nonatomic) _NSRange strokeCoveredTextRange;
@property (nonatomic) BOOL supportsAutoLineBreaks;
@property (nonatomic) NSInteger textContentLength;
@property (retain, nonatomic) CHTextInputTarget *textInputTarget;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)referenceSubstring;
-(struct CGRect *)characterRectsInReferenceSubstring;
-(struct _NSRange )referenceSubstringRange;
-(void)setReferenceSubstring:(id)arg0 range:(struct _NSRange )arg1 characterRects:(struct CGRect *)arg2 ;


@end


#endif