// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICOMPOSITEMECABRACANDIDATE_H
#define TICOMPOSITEMECABRACANDIDATE_H

@class NSArray, NSString;


#import "TIMecabraCandidate.h"

@interface TICompositeMecabraCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSArray *autoconvertedCandidatePointerValues; // ivar: _autoconvertedCandidatePointerValues
@property (copy, nonatomic) NSString *remainderCandidateString; // ivar: _remainderCandidateString


+(BOOL)supportsSecureCoding;
+(int)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)label;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif