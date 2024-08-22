// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPREVENTLAUNCHLIMITATION_H
#define RBSPREVENTLAUNCHLIMITATION_H



#import "RBSLimitation.h"
#import "RBSProcessPredicate.h"

@interface RBSPreventLaunchLimitation : RBSLimitation

@property (readonly, nonatomic) RBSProcessPredicate *predicate; // ivar: _predicate


+(id)limitationWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif