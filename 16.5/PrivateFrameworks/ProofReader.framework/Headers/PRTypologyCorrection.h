// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRTYPOLOGYCORRECTION_H
#define PRTYPOLOGYCORRECTION_H

@class NSString, NSTextCheckingResult, NSMutableString;

#import <Foundation/Foundation.h>


@interface PRTypologyCorrection : NSObject {
    NSString *_misspelling;
    _NSRange _misspelledRange;
    NSTextCheckingResult *_correctionResult;
    NSMutableString *_logs;
    CGFloat _openTime;
    CGFloat _closeTime;
    BOOL _isOpen;
}




+(id)openTypologyCorrectionWithString:(id)arg0 range:(struct _NSRange )arg1 inString:(id)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addTypologyCorrectionLog:(id)arg0 ;
-(void)closeTypologyCorrectionWithResult:(id)arg0 ;
-(void)dealloc;


@end


#endif