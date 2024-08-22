// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSEARCHPREDICATE_H
#define CRSEARCHPREDICATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRSearchPredicate : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)predicateForKey:(id)arg0 inCollection:(id)arg1 ;
+(id)predicateForKey:(id)arg0 matchingText:(id)arg1 comparison:(NSUInteger)arg2 ;
+(id)predicateSatisfyingAllSubpredicates:(id)arg0 ;
+(id)predicateSatisfyingAnySubpredicate:(id)arg0 ;
+(id)secureCodableSubclasses;
-(id)asNSPredicate;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif