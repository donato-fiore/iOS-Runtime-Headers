// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTCOMPOUNDPREDICATE_H
#define WFCONTENTCOMPOUNDPREDICATE_H

@class NSSet, NSArray;
@protocol WFContentPropertyContainer;


#import "WFContentPredicate.h"

@interface WFContentCompoundPredicate : WFContentPredicate <WFContentPropertyContainer>



@property (readonly) NSUInteger compoundPredicateType; // ivar: _compoundPredicateType
@property (readonly, nonatomic) NSSet *containedProperties;
@property (readonly, copy) NSArray *subpredicates; // ivar: _subpredicates


+(id)andPredicateWithSubpredicates:(id)arg0 ;
+(id)notPredicateWithSubpredicate:(id)arg0 ;
+(id)orPredicateWithSubpredicates:(id)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 subpredicates:(id)arg1 ;
// -(void)evaluateWithObject:(id)arg0 propertySubstitutor:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif