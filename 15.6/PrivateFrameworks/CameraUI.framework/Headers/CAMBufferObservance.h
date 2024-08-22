// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMBUFFEROBSERVANCE_H
#define CAMBUFFEROBSERVANCE_H


#import <Foundation/Foundation.h>


@interface CAMBufferObservance : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isFulfilled) BOOL fulfilled; // ivar: _fulfilled
@property (readonly, copy, nonatomic) id *predicate; // ivar: _predicate
@property (readonly, nonatomic, getter=isRemovedOnceEnabled) BOOL removedOnceEnabled; // ivar: _removedOnceEnabled


-(BOOL)shouldBeFulfilledByChange:(id)arg0 ;
// -(id)initWithPredicate:(id)arg0 removedOnceEnabled:(unk)arg1  ;
-(void)fulfillWithChange:(id)arg0 ;
-(void)setupObservanceForBuffer:(id)arg0 ;
-(void)teardownObservanceForBuffer:(id)arg0 ;


@end


#endif