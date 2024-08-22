// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAEDITDESCRIPTION_H
#define IPAEDITDESCRIPTION_H

@class NSArray, NSString;
@protocol IPAEditOperationOrdering, NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration>

 {
    NSArray *_operations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)containsValidOperations:(id)arg0 ;
+(Class)expectedOperationClass;
+(NSUInteger)insertIndexForOperationWithIdentifier:(id)arg0 inArray:(id)arg1 withOrdering:(id)arg2 ;
+(id)presetifyAdjustmentStack:(id)arg0 ;
+(id)sortOperations:(id)arg0 withOrdering:(id)arg1 ;
-(BOOL)containsOperationWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescription:(id)arg0 ;
-(BOOL)isEqualToDescriptionRenderOperations:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)firstIndexOfOperationWithIdentifier:(id)arg0 ;
-(NSUInteger)indexOfOperationWithUUID:(id)arg0 ;
-(NSUInteger)insertIndexForOperationWithIdentifier:(id)arg0 ;
-(NSUInteger)operationCount;
-(NSUInteger)sortOrderForOperationWithIdentifier:(id)arg0 ;
-(id)_init;
-(id)_operationAtIndex:(NSUInteger)arg0 ;
-(id)_operations;
-(id)archivalRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionByAddingOperation:(id)arg0 ;
-(id)descriptionByAddingOperation:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)descriptionByRemovingOperation:(id)arg0 ;
-(id)descriptionByRemovingOperationAtIndex:(NSUInteger)arg0 ;
-(id)descriptionByRemovingOperationsStartingAtIndex:(NSUInteger)arg0 ;
-(id)descriptionByReplacingOperation:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)descriptionWithOperations:(id)arg0 ;
-(id)descriptionWithOperationsUpToUUID:(id)arg0 ;
-(id)firstOperationWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithOperations:(id)arg0 ;
-(id)operationAtIndex:(NSUInteger)arg0 ;
-(id)operationWithUUID:(id)arg0 ;
-(id)operations;
-(void)forEachImmutableOperation:(id)arg0 ;
-(void)withImmutableOperationAtIndex:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif