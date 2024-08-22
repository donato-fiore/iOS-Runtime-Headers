// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDCANDIDATEGROUP_H
#define TIKEYBOARDCANDIDATEGROUP_H

@class NSOrderedSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSOrderedSet *candidates; // ivar: _candidates
@property (copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)hasAlternativeText;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 candidates:(id)arg1 ;
-(id)mutableCandidates;
-(void)addCandidate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif