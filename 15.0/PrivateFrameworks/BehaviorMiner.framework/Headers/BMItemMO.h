// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMITEMMO_H
#define BMITEMMO_H

@class NSManagedObject, NSSet, NSString;



@interface BMItemMO : NSManagedObject

@property (nonatomic) NSInteger absoluteSupport;
@property (retain, nonatomic) NSSet *antecedentOfRules;
@property (retain, nonatomic) NSSet *consequentOfRules;
@property (copy, nonatomic) NSString *normalizedValue;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (copy, nonatomic) NSString *uniformIdentifier;


+(id)fetchRequest;


@end


#endif