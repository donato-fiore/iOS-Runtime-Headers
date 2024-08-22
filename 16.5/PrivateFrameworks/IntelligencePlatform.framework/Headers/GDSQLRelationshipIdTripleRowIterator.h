// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDSQLRELATIONSHIPIDTRIPLEROWITERATOR_H
#define GDSQLRELATIONSHIPIDTRIPLEROWITERATOR_H

@class NSString;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "GDLazyGraphTripleRow.h"

@interface GDSQLRelationshipIdTripleRowIterator : NSObject <NSFastEnumeration>

 {
    GDLazyGraphTripleRow *_lazyTripleRow;
    NSString *_iterateSubjectValue;
    NSString *_iteratePredicateValue;
    NSString *_iterateRelationshipIdValue;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithLazyTripleRow:(id)arg0 ;


@end


#endif