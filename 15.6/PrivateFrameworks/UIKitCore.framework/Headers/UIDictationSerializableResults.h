// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONSERIALIZABLERESULTS_H
#define UIDICTATIONSERIALIZABLERESULTS_H

@class NSIndexPath, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL addTrailingSpace; // ivar: _addTrailingSpace
@property (readonly, nonatomic) BOOL allowsAlternatives; // ivar: _allowsAlternatives
@property (nonatomic) BOOL fromKeyboard; // ivar: _fromKeyboard
@property (retain, nonatomic) NSIndexPath *indexPathOfInterpretations; // ivar: _indexPathOfInterpretations
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection; // ivar: _lowConfidenceAboutLanguageDetection
@property (copy, nonatomic) NSArray *multilingualAlternatives; // ivar: _multilingualAlternatives
@property (copy, nonatomic) NSArray *phrases; // ivar: _phrases
@property (nonatomic) BOOL showMultilingualAlternatives; // ivar: _showMultilingualAlternatives
@property (nonatomic) *__CFString transform; // ivar: _transform
@property (nonatomic) BOOL useServerCapitalization; // ivar: _useServerCapitalization


+(BOOL)supportsSecureCoding;
-(id)bestResults;
-(id)bestText;
-(id)bestTextArray;
-(id)bestTextArrayForAlternatives:(id)arg0 ;
-(id)bestTextForMultilingualAlternatives;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictationPhraseArray;
-(id)init;
-(id)initWithArrayOfArrayOfStrings:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectedPhrases:(id)arg0 multilingualAlternatives:(id)arg1 ;
-(id)initWithPhrases:(id)arg0 ;
-(id)multilingualResultsByLanguageCode;
-(id)secondBestText;
-(id)secondBestTextArray;
-(id)singleLineResult;
-(id)text;
-(id)textArray;
-(id)textArrayForAlternatives:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif