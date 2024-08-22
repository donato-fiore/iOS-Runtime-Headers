// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TACIRCULARBUFFER_H
#define TACIRCULARBUFFER_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TACircularBuffer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)add:(id)arg0 ;
-(id)description;
-(id)dropOldestElement;
-(id)firstObject;
// -(id)firstObjectMatchingTest:(id)arg0 withOptions:(unk)arg1  ;
-(id)getObjectAtIndex:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)insert:(id)arg0 at:(NSUInteger)arg1 ;
-(id)lastObject;
-(id)objectsMatchingPredicate:(id)arg0 ;
-(id)removeLastObject;
-(id)removeUntilFirstPredicateFail:(id)arg0 ;
-(id)removeWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif