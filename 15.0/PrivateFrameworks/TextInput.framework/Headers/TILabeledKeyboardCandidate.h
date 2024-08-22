// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILABELEDKEYBOARDCANDIDATE_H
#define TILABELEDKEYBOARDCANDIDATE_H

@class NSString;


#import "TIKeyboardCandidateSingle.h"

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {
    NSInteger _transliterationType;
    BOOL _transliterationCandidate;
}


@property (copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
+(int)type;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTransliterationCandidate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 label:(id)arg2 ;
-(id)initWithCandidate:(id)arg0 forInput:(id)arg1 label:(id)arg2 transliterationType:(NSInteger)arg3 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif