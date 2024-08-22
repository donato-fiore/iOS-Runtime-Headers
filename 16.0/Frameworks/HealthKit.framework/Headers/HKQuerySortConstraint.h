// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUERYSORTCONSTRAINT_H
#define HKQUERYSORTCONSTRAINT_H

@class NSComparisonPredicate, NSSortDescriptor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSComparisonPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSSortDescriptor *sortDescriptor; // ivar: _sortDescriptor


+(BOOL)supportsSecureCoding;
+(id)sortConstraintByRelaxingSortConstraint:(id)arg0 error:(*id)arg1 ;
+(id)sortConstraintWithSortDescriptor:(id)arg0 predicate:(id)arg1 ;
-(BOOL)canRelax;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSortDescriptor:(id)arg0 predicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif