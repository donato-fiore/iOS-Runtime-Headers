// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPERSONCHANGE_H
#define PGGRAPHPERSONCHANGE_H

@class NSString, NSSet;


#import "PGGraphChange.h"

@interface PGGraphPersonChange : PGGraphChange

@property (readonly, nonatomic) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier
@property (readonly, nonatomic) NSSet *propertyNames; // ivar: _propertyNames


-(NSUInteger)type;
-(id)description;
-(id)initWithPersonLocalIdentifier:(id)arg0 propertyNames:(id)arg1 ;
-(void)mergeChange:(id)arg0 ;


@end


#endif