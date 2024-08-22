// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMECABRACANDIDATE_H
#define TIMECABRACANDIDATE_H

@class NSString, NSNumber;


#import "TIKeyboardCandidate.h"

@interface TIMecabraCandidate : TIKeyboardCandidate {
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    BOOL _isAutocorrection;
    BOOL _OTAWordListCandidate;
    BOOL _regionalCandidate;
    BOOL _responseKitCandidate;
    BOOL _bilingualCandidate;
    BOOL _asIsCandidate;
    BOOL _partialCandidate;
    BOOL _wubixingConvertedByPinyin;
    BOOL _prefixMatched;
    NSString *_candidate;
    NSString *_input;
    NSUInteger _deleteCount;
    NSInteger _cursorMovement;
    NSString *_responseKitCategory;
}


@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion; // ivar: _continuousPathConversion
@property (readonly, nonatomic) unsigned short flags;
@property (retain, nonatomic) NSNumber *mecabraCandidatePointerValue; // ivar: _mecabraCandidatePointerValue


+(BOOL)supportsSecureCoding;
+(int)type;
-(BOOL)isAsIsCandidate;
-(BOOL)isAutocorrection;
-(BOOL)isBilingualCandidate;
-(BOOL)isEmojiCandidate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExtensionCandidate;
-(BOOL)isForShortcutConversion;
-(BOOL)isFullwidthCandidate;
-(BOOL)isMecabraCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isPartialCandidate;
-(BOOL)isPrefixMatched;
-(BOOL)isRegionalCandidate;
-(BOOL)isResponseKitCandidate;
-(BOOL)isWubixingConvertedByPinyin;
-(NSInteger)cursorMovement;
-(NSUInteger)deleteCount;
-(id)candidate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 mecabraCandidatePointerValue:(id)arg2 withFlags:(unsigned short)arg3 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 mecabraCandidatePointerValue:(id)arg2 withFlags:(unsigned short)arg3 deleteCount:(NSUInteger)arg4 cursorMovement:(NSInteger)arg5 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseKitString:(id)arg0 responseKitCategory:(id)arg1 mecabraCandidatePointerValue:(id)arg2 ;
-(id)initWithSurface:(id)arg0 input:(id)arg1 mecabraCandidatePointerValue:(id)arg2 ;
-(id)input;
-(id)label;
-(id)responseKitCategory;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif