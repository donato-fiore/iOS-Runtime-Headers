// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDSQLTRIPLEROWITERATOR_H
#define GDSQLTRIPLEROWITERATOR_H

@class NSString;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "GDLazyGraphTripleRow.h"

@interface GDSQLTripleRowIterator : NSObject <NSFastEnumeration>

 {
    GDLazyGraphTripleRow *_lazyTripleRow;
    BOOL _internalIteratorStarted;
    NSString *_iterateSubjectValue;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithColumns:(NSUInteger)arg0 statement:(id)arg1 subjectOverride:(id)arg2 ;
-(id)relationshipIdIterator;


@end


#endif