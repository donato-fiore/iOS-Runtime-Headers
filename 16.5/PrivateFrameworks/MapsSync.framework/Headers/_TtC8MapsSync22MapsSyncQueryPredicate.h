// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC22MAPSSYNCQUERYPREDICATE_H
#define _TTC8MAPSSYNC22MAPSSYNCQUERYPREDICATE_H

@class NSCompoundPredicate;



@interface _TtC8MapsSync22MapsSyncQueryPredicate : NSCompoundPredicate

@property (nonatomic, readonly) Class classForCoder;


+(Class)classForKeyedUnarchiver;
+(id)queryPredicateWithFormat:(id)arg0 argumentArray:(id)arg1 ;
-(id)initWithAnd:(id)arg0 ;
-(id)initWithCenterLatitude:(CGFloat)arg0 centerLongitude:(CGFloat)arg1 squareSideLengthMeters:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(id)arg0 args:(id)arg1 ;
-(id)initWithNot:(id)arg0 ;
-(id)initWithOr:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 subpredicates:(id)arg1 ;
-(id)not;
-(id)replacementObjectForCoder:(id)arg0 ;


@end


#endif