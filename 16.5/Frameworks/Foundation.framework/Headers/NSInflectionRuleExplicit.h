// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSINFLECTIONRULEEXPLICIT_H
#define NSINFLECTIONRULEEXPLICIT_H



#import "NSInflectionRule.h"
#import "NSMorphology.h"

@interface NSInflectionRuleExplicit : NSInflectionRule

@property (readonly, copy) NSMorphology *morphology; // ivar: _morphology


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMorphology:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif