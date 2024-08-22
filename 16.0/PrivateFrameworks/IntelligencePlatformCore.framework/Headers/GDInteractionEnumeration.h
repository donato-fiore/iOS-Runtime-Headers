// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDINTERACTIONENUMERATION_H
#define GDINTERACTIONENUMERATION_H

@class _CDInteractionStore, NSArray, NSPredicate, NSSortDescriptor;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface GDInteractionEnumeration : NSObject <NSFastEnumeration>

 {
    _CDInteractionStore *_store;
    NSArray *_batch;
    NSPredicate *_predicate;
    NSSortDescriptor *_sortDescriptor;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithStore:(id)arg0 ;
-(id)initWithStore:(id)arg0 predicate:(id)arg1 sortDescriptor:(id)arg2 ;


@end


#endif