// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3NEGATIONPREDICATE_H
#define ML3NEGATIONPREDICATE_H



#import "ML3UnaryPredicate.h"

@interface ML3NegationPredicate : ML3UnaryPredicate



+(BOOL)supportsSecureCoding;
-(id)description;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;


@end


#endif