// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDSQLENTITYITERATOR_H
#define GDSQLENTITYITERATOR_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "GDLazyGraphTripleRow.h"
#import "GDSQLTripleRowIterator.h"

@interface GDSQLEntityIterator : NSObject <NSFastEnumeration>

 {
    GDLazyGraphTripleRow *_lazyTripleRow;
    GDSQLTripleRowIterator *_innerIterator;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithColumns:(NSUInteger)arg0 statement:(id)arg1 ;


@end


#endif