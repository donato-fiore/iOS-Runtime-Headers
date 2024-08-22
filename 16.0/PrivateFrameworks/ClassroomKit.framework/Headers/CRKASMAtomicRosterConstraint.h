// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMATOMICROSTERCONSTRAINT_H
#define CRKASMATOMICROSTERCONSTRAINT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRKASMAtomicRosterConstraint : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) id *rosterEvaluator; // ivar: _rosterEvaluator


+(id)constraintWithRosterEvaluator:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFulfilledByRoster:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 rosterEvaluator:(id)arg1 ;


@end


#endif