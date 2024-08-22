// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSPROCESSPLATFORMPREDICATE_H
#define RBSPROCESSPLATFORMPREDICATE_H



#import "RBSProcessPredicateImpl.h"

@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) int platform; // ivar: _platform


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPlatform:(int)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif