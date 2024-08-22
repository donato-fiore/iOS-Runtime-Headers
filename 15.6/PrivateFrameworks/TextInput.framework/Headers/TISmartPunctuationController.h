// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISMARTPUNCTUATIONCONTROLLER_H
#define TISMARTPUNCTUATIONCONTROLLER_H

@class NSCharacterSet;

#import <Foundation/Foundation.h>

#import "TISmartPunctuationOptions.h"

@interface TISmartPunctuationController : NSObject {
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    NSCharacterSet *_alphanumericCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_punctuationCharacterSet;
    NSCharacterSet *_openerCharacterSet;
    NSCharacterSet *_germanApostrophePrecedingSet;
    NSCharacterSet *_dutchApostropheFollowingSet;
    NSCharacterSet *_cornerBracketCharacterSet;
    NSCharacterSet *_bookTitleMarkCharacterSet;
    NSCharacterSet *_dashCharacterSet;
    NSCharacterSet *_enDashCharacterSet;
    NSCharacterSet *_emDashCharacterSet;
}


@property (nonatomic) NSUInteger autoQuoteType; // ivar: _autoQuoteType
@property (nonatomic) BOOL smartDashesEnabled; // ivar: _smartDashesEnabled
@property (retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions; // ivar: _smartPunctuationOptions
@property (nonatomic) BOOL smartQuotesEnabled; // ivar: _smartQuotesEnabled


+(id)_chineseContextualVariantMapping;
-(id)_alternatingStringForInputString:(id)arg0 isLockedInput:(BOOL)arg1 hasMarkedText:(BOOL)arg2 ;
-(id)_checkInput:(id)arg0 forContextualChinesePunctuationInDocumentState:(id)arg1 ;
-(id)_checkInput:(id)arg0 forContextualDashesInDocumentState:(id)arg1 ;
-(id)_checkInput:(id)arg0 forContextualEllipsesInDocumentState:(id)arg1 ;
-(id)_checkInput:(id)arg0 forContextualQuotesInDocumentState:(id)arg1 ;
-(id)init;
-(id)smartPunctuationOutputForInput:(id)arg0 isLockedInput:(BOOL)arg1 documentState:(id)arg2 ;
-(id)smartPunctuationResultsForString:(id)arg0 ;
-(id)smartPunctuationedStringForString:(id)arg0 ;
-(void)_initializeDashCharacterSetsIfNecessary;
-(void)_initializeQuoteCharacterSetsIfNecessary;
-(void)reset;


@end


#endif