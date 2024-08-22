// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDCANDIDATESINGLE_H
#define TIKEYBOARDCANDIDATESINGLE_H

@class NSString;


#import "TIKeyboardCandidate.h"

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

@property (copy, nonatomic) NSString *candidate; // ivar: _candidate
@property (nonatomic) NSInteger cursorMovement; // ivar: _cursorMovement
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate; // ivar: _extensionCandidate
@property (copy, nonatomic) NSString *input; // ivar: _input


+(BOOL)supportsSecureCoding;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 ;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 cursorMovement:(NSInteger)arg2 ;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 customInfoType:(NSUInteger)arg2 ;
+(id)candidateWithCandidate:(id)arg0 forInput:(id)arg1 extensionCandidate:(BOOL)arg2 ;
+(id)candidateWithUnchangedInput:(id)arg0 ;
+(id)secureCandidateForInput:(id)arg0 slotID:(unsigned int)arg1 ;
+(id)secureCandidateForInput:(id)arg0 slotID:(unsigned int)arg1 customInfoType:(NSUInteger)arg2 ;
+(int)type;
-(BOOL)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
-(BOOL)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
-(id)candidateByReplacingWithCandidate:(id)arg0 ;
-(id)candidateByReplacingWithCandidate:(id)arg0 input:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidate:(id)arg0 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 extensionCandidate:(BOOL)arg2 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseCandidate:(id)arg0 ;
-(id)initWithUnchangedInput:(id)arg0 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif