// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDMOCKINTERACTIONSTORE_H
#define GDMOCKINTERACTIONSTORE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GDMockInteractionStore : NSObject {
    NSArray *_interactions;
}




-(id)cdStore;
-(id)initWithInteractions:(id)arg0 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif