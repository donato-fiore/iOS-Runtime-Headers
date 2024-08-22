// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COBALLOT_H
#define COBALLOT_H

@class NSOrderedSet, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface COBallot : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSOrderedSet *candidates; // ivar: _candidates
@property (copy, nonatomic) NSDictionary *discovery; // ivar: _discovery


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBallot:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBallot:(id)arg0 ;
-(id)initWithCandidate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif