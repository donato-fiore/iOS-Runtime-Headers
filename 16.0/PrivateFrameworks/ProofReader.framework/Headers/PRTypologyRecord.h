// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRTYPOLOGYRECORD_H
#define PRTYPOLOGYRECORD_H

@class NSString, NSArray, NSValue, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PRLanguage.h"

@interface PRTypologyRecord : NSObject {
    NSString *_string;
    _NSRange _range;
    PRLanguage *_langObj;
    NSArray *_languages;
    NSString *_appIdentifier;
    NSValue *_selectedRangeValue;
    NSArray *_topLanguages;
    NSArray *_keyEventArray;
    NSMutableArray *_typologyCorrections;
    NSMutableArray *_typologyCandidates;
    NSArray *_results;
    CGFloat _openTime;
    CGFloat _closeTime;
    NSUInteger _offset;
    BOOL _autocorrect;
    BOOL _initialCapitalize;
    BOOL _autocapitalize;
    BOOL _isOpen;
}




+(id)currentTypologyRecord;
+(id)openTypologyRecordWithString:(id)arg0 range:(struct _NSRange )arg1 languageObject:(id)arg2 languages:(id)arg3 topLanguages:(id)arg4 autocorrect:(BOOL)arg5 initialCapitalize:(BOOL)arg6 autocapitalize:(BOOL)arg7 keyEventArray:(id)arg8 appIdentifier:(id)arg9 selectedRangeValue:(id)arg10 ;
+(void)resetTypologyRecords;
+(void)setTypologyRecordsLimit:(NSUInteger)arg0 ;
+(void)writeTypologyRecords;
-(id)dictionaryRepresentation;
-(id)initWithString:(id)arg0 offset:(NSUInteger)arg1 range:(struct _NSRange )arg2 languageObject:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(BOOL)arg6 initialCapitalize:(BOOL)arg7 autocapitalize:(BOOL)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11 ;
-(void)addCandidate:(id)arg0 ;
-(void)addCorrection:(id)arg0 ;
-(void)closeTypologyRecordWithResults:(id)arg0 ;
-(void)dealloc;


@end


#endif