// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISUNIQUEOPERATIONCONTEXT_H
#define ISUNIQUEOPERATIONCONTEXT_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}




-(BOOL)containsOperation:(id)arg0 ;
-(NSUInteger)countOfOperations;
-(id)init;
-(id)uniqueOperationForKey:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)dealloc;
-(void)removeOperation:(id)arg0 ;
-(void)setUniqueOperation:(id)arg0 forKey:(id)arg1 ;


@end


#endif