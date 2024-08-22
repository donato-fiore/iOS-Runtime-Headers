// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPERSONSINSERTION_H
#define PGGRAPHPERSONSINSERTION_H

@class NSSet;


#import "PGGraphChange.h"

@interface PGGraphPersonsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (readonly, nonatomic) NSSet *persons; // ivar: _persons


-(NSUInteger)changeCount;
-(NSUInteger)type;
-(id)description;
-(id)initWithPersonLocalIdentifiers:(id)arg0 ;
-(id)initWithPersons:(id)arg0 ;


@end


#endif