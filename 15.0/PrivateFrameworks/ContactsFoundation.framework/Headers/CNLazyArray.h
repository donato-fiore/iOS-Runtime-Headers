// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNLAZYARRAY_H
#define CNLAZYARRAY_H

@class NSArray, NSMutableArray;
@protocol NSFastEnumeration, _CNLazyArrayOperation;

#import <Foundation/Foundation.h>


@interface CNLazyArray : NSObject <NSFastEnumeration>



@property (readonly) NSArray *allObjects;
@property (readonly) id *firstObject;
@property (readonly) id *lastObject;
@property (retain) NSObject<_CNLazyArrayOperation> *operationChain; // ivar: _operationChain
@property (readonly) NSMutableArray *output; // ivar: _output


-(BOOL)consumeNextObject;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)all:(SEL)arg0 ;
-(id)any:(SEL)arg0 ;
-(id)compactMap:(SEL)arg0 ;
-(id)contains:(SEL)arg0 ;
-(id)distinct;
-(id)doOnNext:(SEL)arg0 ;
-(id)filter:(SEL)arg0 ;
-(id)flatMap:(SEL)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithEnumerator:(id)arg0 ;
-(id)initWithFastEnumeration:(id)arg0 ;
// -(id)initWithInitialState:(id)arg0 condition:(id)arg1 nextState:(unk)arg2 resultSelector:(id)arg3  ;
-(id)initWithSource:(id)arg0 ;
-(id)map:(SEL)arg0 ;
-(id)none:(SEL)arg0 ;
-(id)reduce:(SEL)arg0 ;
-(id)skip:(SEL)arg0 ;
-(id)skipLast:(SEL)arg0 ;
-(id)take:(SEL)arg0 ;
-(id)takeLast:(SEL)arg0 ;
-(void)consumeAllObjects;
-(void)consumeToIndex:(NSUInteger)arg0 ;


@end


#endif