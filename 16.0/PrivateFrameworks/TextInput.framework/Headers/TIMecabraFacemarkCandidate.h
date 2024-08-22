// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIMECABRAFACEMARKCANDIDATE_H
#define TIMECABRAFACEMARKCANDIDATE_H

@class NSString;


#import "TIMecabraCandidate.h"

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *category; // ivar: _category


+(BOOL)supportsSecureCoding;
+(id)candidateWithCandidate:(id)arg0 category:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
+(int)type;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFacemarkCandidate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCandidate:(id)arg0 category:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithCandidateResultSetCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif