// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHCONTACTNODE_H
#define PGGRAPHCONTACTNODE_H

@class NSDate, NSString;


#import "PGGraphOptimizedNode.h"

@interface PGGraphContactNode : PGGraphOptimizedNode

@property (readonly) NSDate *birthdayDate; // ivar: _birthdayDate
@property (readonly) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSDate *potentialBirthdayDate; // ivar: _potentialBirthdayDate


-(BOOL)hasProperties:(id)arg0 ;
-(NSUInteger)sexHintForGivenName;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithName:(id)arg0 contactIdentifier:(id)arg1 birthdayDate:(id)arg2 potentialBirthdayDate:(id)arg3 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)setLocalProperties:(id)arg0 ;


@end


#endif