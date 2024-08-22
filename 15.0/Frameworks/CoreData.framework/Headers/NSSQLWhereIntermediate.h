// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLWHEREINTERMEDIATE_H
#define NSSQLWHEREINTERMEDIATE_H

@class NSPredicate;


#import "NSSQLIntermediate.h"

@interface NSSQLWhereIntermediate : NSSQLIntermediate {
    NSPredicate *_predicate;
}




-(id)initWithPredicate:(id)arg0 inScope:(id)arg1 ;


@end


#endif