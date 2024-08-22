// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSCOREDPERSON_H
#define INSCOREDPERSON_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INPerson.h"

@interface INScoredPerson : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INPerson *person; // ivar: _person
@property (readonly, nonatomic) NSInteger recommendation; // ivar: _recommendation
@property (readonly, copy, nonatomic) NSNumber *score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPerson:(id)arg0 recommendation:(NSInteger)arg1 ;
-(id)initWithPerson:(id)arg0 score:(id)arg1 ;
-(id)initWithPerson:(id)arg0 score:(id)arg1 recommendation:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif