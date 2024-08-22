// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMSEMANTICTEXT_H
#define AXMSEMANTICTEXT_H

@class NSMutableAttributedString, NSLocale, NSString;

#import <Foundation/Foundation.h>


@interface AXMSemanticText : NSObject {
    NSMutableAttributedString *_text;
}


@property (readonly, nonatomic) BOOL isSemanticallyComplete;
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *preprocessedText;
@property (nonatomic) NSInteger tokenizedLength; // ivar: _tokenizedLength
@property (retain, nonatomic) NSString *transformedSpeechText; // ivar: _transformedSpeechText


-(id)initWithText:(id)arg0 locale:(id)arg1 ;
-(id)makeCursor;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(struct _NSRange )textRange;
-(void)addCustomPattern:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)addDataDetector:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)addIsInLexionMarker:(BOOL)arg0 withRange:(struct _NSRange )arg1 ;
-(void)addNLPToken:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)addNumericToken:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)addSemanticErrorWithRange:(struct _NSRange )arg0 ;
-(void)enumerateCustomPatterns:(id)arg0 ;
-(void)enumerateDataDetectors:(id)arg0 ;
-(void)enumerateLexiconMarkers:(id)arg0 ;
-(void)enumerateNLPTokens:(id)arg0 ;
-(void)enumerateNumericTokens:(id)arg0 ;
-(void)enumerateSemanticErrors:(id)arg0 ;


@end


#endif