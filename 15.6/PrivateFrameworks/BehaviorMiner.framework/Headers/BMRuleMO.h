// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMRULEMO_H
#define BMRULEMO_H

@class NSManagedObject, NSSet;



@interface BMRuleMO : NSManagedObject

@property (nonatomic) NSInteger absoluteAntecedentSupport;
@property (nonatomic) NSInteger absoluteConsequentSupport;
@property (nonatomic) NSInteger absoluteSupport;
@property (retain, nonatomic) NSSet *antecedent;
@property (nonatomic) CGFloat confidence;
@property (retain, nonatomic) NSSet *consequent;
@property (nonatomic) CGFloat support;
@property (nonatomic) NSInteger uniqueDaysLastWeek;
@property (nonatomic) NSInteger uniqueDaysTotal;


+(id)fetchRequest;


@end


#endif