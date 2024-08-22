// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPERSONSDELETION_H
#define PGGRAPHPERSONSDELETION_H

@class NSSet;


#import "PGGraphChange.h"

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers


-(NSUInteger)changeCount;
-(NSUInteger)type;
-(id)description;
-(id)initWithPersonLocalIdentifiers:(id)arg0 ;


@end


#endif